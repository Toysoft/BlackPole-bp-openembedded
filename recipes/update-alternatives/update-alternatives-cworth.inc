LICENSE = "GPL"
SECTION = "base"
SRC_URI = "${HANDHELDS_CVS};module=familiar/dist/ipkg;tag=${@'V' + bb.data.getVar('PV',d,1).replace('.', '-')} \
           file://update-alternatives.use.last.patch \
           file://use-opkg-dir-instead-of-ipkg.patch "
S = "${WORKDIR}/ipkg/C"
PACKAGE_ARCH = "all"

INC_PR = "r4"
