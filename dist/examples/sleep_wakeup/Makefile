# name of your application
APPLICATION = sleep_wakeup

# If no BOARD is found in the environment, use this default:
BOARD ?= slstk3401a

# This has to be the absolute path to the RIOT base directory:
RIOTBASE ?= $(CURDIR)/../..

# Required features:
FEATURES_REQUIRED = periph_rtt

# Comment this out to disable code in RIOT that does safety checking
# which is not needed in a production environment but helps in the
# development process:
CFLAGS += -DDEVELHELP -DDEBUG_EFM

# Change this to 0 show compiler invocation lines by default:
QUIET ?= 1

include $(RIOTBASE)/Makefile.include
