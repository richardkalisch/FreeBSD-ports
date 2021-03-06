# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD$

PORTNAME=	tokyotyrant
PORTVERSION=	1.1.41
PORTREVISION=	2
CATEGORIES=	databases
MASTER_SITES=	http://fallabs.com/${PORTNAME}/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Network interface of Tokyo Cabinet

BUILD_DEPENDS=	tokyocabinet>=1.4.20:databases/tokyocabinet
LIB_DEPENDS=	libtokyocabinet.so:databases/tokyocabinet

GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
USES=		gmake
USE_RC_SUBR=	ttserver

OPTIONS_DEFINE=	LUA

LDFLAGS+=	-L${LOCALBASE}/lib
CFLAGS+=	-I${LOCALBASE}/include

LUA_CONFIGURE_ENABLE=	lua
LUA_LDFLAGS+=	-L${LUA_LIBDIR}
LUA_CFLAGS+=	-I${LUA_INCDIR}
LUA_CPPFLAGS+=	-I${LUA_INCDIR}
LUA_USES=		lua

# Since gnomehack only works for "(libdir)" case, we need to patch it
# manually.
post-patch:
	${REINPLACE_CMD} -e 's|@libdir@/pkgconfig|@prefix@/libdata/pkgconfig|g' \
		${WRKSRC}/Makefile.in
	${REINPLACE_CMD} -e 's|llua|llua-${LUA_VER}|g' ${WRKSRC}/configure

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/*
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/*.so

.include <bsd.port.mk>
