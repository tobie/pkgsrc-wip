# $NetBSD$
#

DISTNAME=		opendchub-0.7.15
CATEGORIES=		net
MASTER_SITES=		${MASTER_SITE_SOURCEFORGE:=opendchub/}

MAINTAINER=		dhowland@users.sourceforge.net
HOMEPAGE=		http://opendchub.sourceforge.net/
COMMENT=		Open source Direct Connect hub software

GNU_CONFIGURE=		yes
# only works for systems with cap_set_proc() support
CONFIGURE_ARGS+=	--enable-switch_user

USE_TOOLS+=		gmake perl

EGDIR=			${PREFIX}/share/examples/${PKGBASE}
DOCDIR=			${PREFIX}/share/doc/${PKGBASE}

INSTALLATION_DIRS+=	share/examples share/doc

post-install:
	${INSTALL_DATA_DIR} ${DESTDIR:Q}${EGDIR:Q}
	${INSTALL_DATA} ${WRKSRC}/Samplescripts/functestbot.plz \
		${DESTDIR:Q}${EGDIR:Q}
	${INSTALL_DATA} ${WRKSRC}/Samplescripts/subtestbot.plz \
		${DESTDIR:Q}${EGDIR:Q}
	${INSTALL_DATA_DIR} ${DESTDIR:Q}${DOCDIR:Q}
	${INSTALL_DATA} ${WRKSRC}/Documentation/configfiles \
		${DESTDIR:Q}${DOCDIR:Q}
	${INSTALL_DATA} ${WRKSRC}/Documentation/general \
		${DESTDIR:Q}${DOCDIR:Q}
	${INSTALL_DATA} ${WRKSRC}/Documentation/scriptdoc \
		${DESTDIR:Q}${DOCDIR:Q}

.include "../../lang/perl5/buildlink3.mk"
.include "../../mk/bsd.prefs.mk"
.include "../../mk/bsd.pkg.mk"
