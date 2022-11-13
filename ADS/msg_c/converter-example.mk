include /home/chengtao/Downloads/v2x_ads_c/Makefile.am.libasncodec

LIBS += -lm
CFLAGS += $(ASN_MODULE_CFLAGS) -DASN_PDU_COLLECTION -I.
ASN_LIBRARY ?= libasncodec.a
ASN_PROGRAM ?= converter-example
ASN_PROGRAM_SRCS ?= \
	/home/chengtao/Downloads/v2x_ads_c/converter-example.c\
	/home/chengtao/Downloads/v2x_ads_c/pdu_collection.c

all: $(ASN_PROGRAM)

$(ASN_PROGRAM): $(ASN_LIBRARY) $(ASN_PROGRAM_SRCS:.c=.o)
	$(CC) $(CFLAGS) $(CPPFLAGS) -o $(ASN_PROGRAM) $(ASN_PROGRAM_SRCS:.c=.o) $(LDFLAGS) $(ASN_LIBRARY) $(LIBS)

$(ASN_LIBRARY): $(ASN_MODULE_SRCS:.c=.o)
	$(AR) rcs $@ $(ASN_MODULE_SRCS:.c=.o)

.SUFFIXES:
.SUFFIXES: .c .o

.c.o:
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -f $(ASN_PROGRAM) $(ASN_LIBRARY)
	rm -f $(ASN_MODULE_SRCS:.c=.o) $(ASN_PROGRAM_SRCS:.c=.o)

regen: regenerate-from-asn1-source

regenerate-from-asn1-source:
	./asn1c -D /home/chengtao/Downloads/v2x_ads_c /home/chengtao/Documents/github/v2x/ADS/v2x_asn/BSM.asn /home/chengtao/Documents/github/v2x/ADS/v2x_asn/DefAcceleration.asn /home/chengtao/Documents/github/v2x/ADS/v2x_asn/DefMotion.asn /home/chengtao/Documents/github/v2x/ADS/v2x_asn/DefPosition.asn /home/chengtao/Documents/github/v2x/ADS/v2x_asn/DefPositionOffset.asn /home/chengtao/Documents/github/v2x/ADS/v2x_asn/DefTime.asn /home/chengtao/Documents/github/v2x/ADS/v2x_asn/Map.asn /home/chengtao/Documents/github/v2x/ADS/v2x_asn/MapLane.asn /home/chengtao/Documents/github/v2x/ADS/v2x_asn/MapLink.asn /home/chengtao/Documents/github/v2x/ADS/v2x_asn/MapNode.asn /home/chengtao/Documents/github/v2x/ADS/v2x_asn/MapPoint.asn /home/chengtao/Documents/github/v2x/ADS/v2x_asn/MapSpeedLimit.asn /home/chengtao/Documents/github/v2x/ADS/v2x_asn/MsgFrame.asn /home/chengtao/Documents/github/v2x/ADS/v2x_asn/RSI.asn /home/chengtao/Documents/github/v2x/ADS/v2x_asn/RSM.asn /home/chengtao/Documents/github/v2x/ADS/v2x_asn/SignalPhaseAndTiming.asn /home/chengtao/Documents/github/v2x/ADS/v2x_asn/SPATIntersectionState.asn /home/chengtao/Documents/github/v2x/ADS/v2x_asn/VehBrake.asn /home/chengtao/Documents/github/v2x/ADS/v2x_asn/VehClass.asn /home/chengtao/Documents/github/v2x/ADS/v2x_asn/VehSafetyExt.asn /home/chengtao/Documents/github/v2x/ADS/v2x_asn/VehSize.asn /home/chengtao/Documents/github/v2x/ADS/v2x_asn/VehStatus.asn

