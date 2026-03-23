CC := gcc
CFLAGS := -Wall -Wextra -O2

SRC := $(shell find . -type f -name '*.c')
OUT := $(SRC:.c=.out)

# Heuristic: detect math function usage
MATH_SRC := $(shell grep -El '\b(sin|cos|sqrt|pow|tan|log|exp)\b' $(SRC) 2>/dev/null)
MATH_OUT := $(MATH_SRC:.c=.out)

all: $(OUT)

%.out: %.c
	$(CC) $(CFLAGS) $< -o $@ $(LDFLAGS)

# Apply -lm only to detected targets
$(MATH_OUT): LDFLAGS += -lm

clean:
	rm -f $(OUT) $(SRC:.c=.d)
