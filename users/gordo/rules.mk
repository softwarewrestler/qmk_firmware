SRC += gordo.c \
    process_records.c

# Some usual defaults
MOUSEKEY_ENABLE         = no    # Mouse keys (+4700)

ifeq ($(strip $(ENCODER_ENABLE)), yes)
  SRC += custom_encoder.c
endif

ifneq ($(strip $(RGB_MATRIX_ENABLE)), no)
  OPT_DEFS += -DRGB_ENABLE
  SRC += custom_rgb.c
endif

ifeq ($(strip $(RGBLIGHT_ENABLE)), yes)
  OPT_DEFS += -DRGB_ENABLE
  SRC += custom_rgb.c
endif

ifeq ($(strip $(OLED_DRIVER_ENABLE)), yes)
  SRC += custom_oled.c
endif
