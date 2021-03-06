# $FreeBSD$

PORTNAME=	libzmq4
PORTVERSION=	4.1.4
PORTREVISION=	3
CATEGORIES=	net
MASTER_SITES=	http://download.zeromq.org/
DISTNAME=	zeromq-${DISTVERSION}

MAINTAINER=	koobs@FreeBSD.org
COMMENT=	ZeroMQ core library (Version 4)

LICENSE=	LGPL3
LICENSE_FILE=	${WRKSRC}/COPYING

CONFLICTS=	zmq-[0-9]* libzmq[^4]-[0-9]*

USES=		libtool pkgconfig
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes

OPTIONS_DEFINE=		CURVE DEBUG NORM PGM
OPTIONS_DEFAULT=	CURVE PGM

CURVE_DESC=	CURVE security mechanism via libsodium
PGM_DESC=	Reliable multicast transport using PGM via OpenPGM
NORM_DESC=	Reliable multicast transport using NORM via NRL

CURVE_CONFIGURE_WITH=	libsodium
CURVE_LIB_DEPENDS=	libsodium.so:security/libsodium

DEBUG_CONFIGURE_ENABLE=	debug
DEBUG_VARS=		WITH_DEBUG=yes

PGM_CONFIGURE_WITH=	pgm
PGM_LIB_DEPENDS=	libpgm.so:net/openpgm

NORM_CONFIGURE_WITH=	norm=${PREFIX}
NORM_LIB_DEPENDS=	libnorm.so:net/norm

CONFIGURE_ARGS+=	--with-pkgconfigdir=${PREFIX}/libdata/pkgconfig

CFLAGS+=	-Wno-long-long
CPPFLAGS+=	-Wno-error
MAKE_ENV=	V=1

INSTALL_TARGET=	install-strip
TEST_TARGET=	check

.include <bsd.port.mk>
