#
# This is a list for tracking status of package relative to Major
# distributions such as Fedora, Ubuntu, Debian, ... The package
# name is the major distribution equivalent to the name used in oe-core
#
# The format is as a bitbake variable override for each recipe
#
#       DISTRO_PN_ALIAS:pn-<recipe name> = "Distro1=<pkgname> Distro2=<pkgname>"
#
# Please keep this list in alphabetical order.
#
DISTRO_PN_ALIAS:pn-alsa-state = "OE-Core"
DISTRO_PN_ALIAS:pn-alsa-utils-alsaconf = "OE-Core"
DISTRO_PN_ALIAS:pn-alsa-utils-scripts = "OE-Core"
DISTRO_PN_ALIAS:pn-atk = "Fedora=atk OpenSuSE=atk"
DISTRO_PN_ALIAS:pn-avahi-ui = "Ubuntu=avahi-discover Debian=avahi-discover"
DISTRO_PN_ALIAS:pn-babeltrace = "OSPDT"
DISTRO_PN_ALIAS:pn-babeltrace2 = "OSPDT"
DISTRO_PN_ALIAS:pn-bjam = "OpenSuSE=boost-jam Debian=bjam"
DISTRO_PN_ALIAS:pn-blktool = "Debian=blktool Mandriva=blktool"
DISTRO_PN_ALIAS:pn-bluez5 = "Fedora=bluez  Opensuse=bluez"
DISTRO_PN_ALIAS:pn-bootchart2 = "Fedora=bootchart2 Opensuse=bootchart"
DISTRO_PN_ALIAS:pn-btrfs-tools = "Debian=btrfs-tools Fedora=btrfs-progs"
DISTRO_PN_ALIAS:pn-build-appliance-image = "OSPDT"
DISTRO_PN_ALIAS:pn-builder = "OE-Core"
DISTRO_PN_ALIAS:pn-buildtools-tarball = "OE-Core"
DISTRO_PN_ALIAS:pn-cdrtools = "OpenSUSE=cdrtools OSPDT"
DISTRO_PN_ALIAS:pn-chkconfig-alternatives = "Mandriva=chkconfig Debian=chkconfig"
DISTRO_PN_ALIAS:pn-connman = "Meego=connman"
DISTRO_PN_ALIAS:pn-connman-conf = "OE-Core"
DISTRO_PN_ALIAS:pn-connman-gnome = "Intel"
DISTRO_PN_ALIAS:pn-console-tools = "Debian=console-tools Ubuntu=console-tools"
DISTRO_PN_ALIAS:pn-core-image-base = "OE-Core"
DISTRO_PN_ALIAS:pn-core-image-full-cmdline = "OE-Core"
DISTRO_PN_ALIAS:pn-core-image-kernel-dev = "OE-Core"
DISTRO_PN_ALIAS:pn-core-image-minimal = "OE-Core"
DISTRO_PN_ALIAS:pn-core-image-minimal-dev = "OE-Core"
DISTRO_PN_ALIAS:pn-core-image-minimal-initramfs = "OE-Core"
DISTRO_PN_ALIAS:pn-core-image-minimal-mtdutils = "OE-Core"
DISTRO_PN_ALIAS:pn-core-image-rt = "OE-Core"
DISTRO_PN_ALIAS:pn-core-image-rt-sdk = "OE-Core"
DISTRO_PN_ALIAS:pn-core-image-sato = "OE-Core"
DISTRO_PN_ALIAS:pn-core-image-sato-dev = "OE-Core"
DISTRO_PN_ALIAS:pn-core-image-sato-sdk = "OE-Core"
DISTRO_PN_ALIAS:pn-core-image-testcontroller = "OE-Core"
DISTRO_PN_ALIAS:pn-core-image-testcontroller-initramfs = "OE-Core"
DISTRO_PN_ALIAS:pn-core-image-weston = "OE-Core"
DISTRO_PN_ALIAS:pn-core-image-x11 = "OE-Core"
DISTRO_PN_ALIAS:pn-createrepo-c = "Fedora=createrepo_c Clear=createrepo_c"
DISTRO_PN_ALIAS:pn-cross-localedef = "OSPDT"
DISTRO_PN_ALIAS:pn-cryptodev-linux = "OE-Core"
DISTRO_PN_ALIAS:pn-cryptodev-module = "OE-Core"
DISTRO_PN_ALIAS:pn-cryptodev-tests = "OE-Core"
DISTRO_PN_ALIAS:pn-cwautomacros = "OSPDT upstream=http://cwautomacros.berlios.de/"
DISTRO_PN_ALIAS:pn-db = "Debian=db5.1 Ubuntu=db5.1"
DISTRO_PN_ALIAS:pn-dbus-test = "Fedora=dbus Ubuntu=dbus"
DISTRO_PN_ALIAS:pn-dbus-wait = "OpenedHand"
DISTRO_PN_ALIAS:pn-depmodwrapper-cross = "OE-Core"
DISTRO_PN_ALIAS:pn-distcc = "Debian=distcc Fedora=distcc"
DISTRO_PN_ALIAS:pn-distcc-config = "OpenedHand"
DISTRO_PN_ALIAS:pn-docbook-dsssl-stylesheets = "Fedora=docbook-style-dsssl Ubuntu=docbook-dsssl"
DISTRO_PN_ALIAS:pn-docbook-sgml-dtd-3.1 = "Fedora=docbook-dtds Mandriva=docbook-dtd31-sgml"
DISTRO_PN_ALIAS:pn-docbook-sgml-dtd-4.1 = "Fedora=docbook-dtds Mandriva=docbook-dtd41-sgml"
DISTRO_PN_ALIAS:pn-docbook-sgml-dtd-4.5 = "Fedora=docbook-dtds Mandriva=docbook-dtd42-sgml"
DISTRO_PN_ALIAS:pn-docbook-xml-dtd4 = "Ubuntu=docbook-xml Fedora=docbook-dtds"
DISTRO_PN_ALIAS:pn-docbook-xml-dtd4-native = "Ubuntu=docbook-xml Fedora=docbook-dtds"
DISTRO_PN_ALIAS:pn-docbook-xsl-stylesheets = "Fedora=docbook-xsl-stylesheets Opensuse=docbook-xsl-stylesheets"
DISTRO_PN_ALIAS:pn-dropbear = "Debian=dropbear Ubuntu=dropbear"
DISTRO_PN_ALIAS:pn-dtc = "Fedora=dtc Ubuntu=dtc"
DISTRO_PN_ALIAS:pn-encodings = "Ubuntu=xfonts-encodings Mandriva=x11-font-encodings Debian=xfonts-encodings"
DISTRO_PN_ALIAS:pn-font-alias = "Fedora=xorg-x11-fonts-base Mandriva=x11-font-alias Meego=xorg-x11-fonts"
DISTRO_PN_ALIAS:pn-font-util = "Meego=xorg-x11-font-utils Fedora=xorg-x11-font-utils Ubuntu=xfonts-utils Mandriva=x11-font-util Debian=xfonts-utils"
DISTRO_PN_ALIAS:pn-formfactor = "OE-Core"
DISTRO_PN_ALIAS:pn-gccmakedep = "Mandriva=gccmakedep Ubuntu=xutils-dev"
DISTRO_PN_ALIAS:pn-gcc-runtime = "Ubuntu=gcc Fedora=gcc"
DISTRO_PN_ALIAS:pn-gcc-sanitizers = "Ubuntu=gcc Fedora=gcc"
DISTRO_PN_ALIAS:pn-gcc-source = "Ubuntu=gcc Fedora=gcc"
DISTRO_PN_ALIAS:pn-gconf-dbus = "Meego=GConf-dbus"
DISTRO_PN_ALIAS:pn-gdk-pixbuf = "Debian=libgdk-pixbuf2.0 Fedora=gdk-pixbuf"
DISTRO_PN_ALIAS:pn-gdk-pixbuf-csource = "Debian=libgdk-pixbuf2.0-0 Fedora=gdk-pixbuf2"
DISTRO_PN_ALIAS:pn-gettext-minimal = "Debian=gettext Fedora=gettext"
DISTRO_PN_ALIAS:pn-glib-2.0 = "Meego=glib2 Fedora=glib2 OpenSuSE=glib2 Ubuntu=glib2.0 Mandriva=glib2.0 Debian=glib2.0"
DISTRO_PN_ALIAS:pn-glibc-locale = "OpenSuSE=glibc-locale Fedora=glibc-devel"
DISTRO_PN_ALIAS:pn-glibc-mtrace = "Fedora=glibc-utils Ubuntu=libc-dev-bin"
DISTRO_PN_ALIAS:pn-glibc-scripts = "Fedora=glibc Ubuntu=libc-bin"
DISTRO_PN_ALIAS:pn-gnome-desktop-testing = "Debian=gnome-desktop-testing Fedora=gnome-desktop-testing"
DISTRO_PN_ALIAS:pn-gnu-config = "OpenedHand"
DISTRO_PN_ALIAS:pn-gptfdisk = "Fedora=gdisk Ubuntu=gdisk"
DISTRO_PN_ALIAS:pn-grub-efi = "Debian=grub-efi Fedora=grub2-efi"
DISTRO_PN_ALIAS:pn-gst-player = "Ubuntu=gst-player Fedora=gstreamer-player"
DISTRO_PN_ALIAS:pn-gst-plugin-bluetooth = "Ubuntu=libgstreamer-plugins-base Fedora=gstreamer-plugins-base"
DISTRO_PN_ALIAS:pn-gstreamer1.0 = "Debian=gstreamer1.0 Ubuntu=gstreamer1.0"
DISTRO_PN_ALIAS:pn-gstreamer1.0-meta-base = "Meego=gstreamer Fedora=gstreamer OpenSuSE=gstreamer Ubuntu=gstreamer0.10"
DISTRO_PN_ALIAS:pn-gstreamer1.0-plugins-bad = "Debian=gstreamer1.0-plugins-bad Ubuntu=gstreamer1.0-plugins-bad"
DISTRO_PN_ALIAS:pn-gstreamer1.0-plugins-base = "Debian=gstreamer1.0-plugins-base Ubuntu=gstreamer1.0-plugins-base"
DISTRO_PN_ALIAS:pn-gstreamer1.0-plugins-good = "Debian=gstreamer1.0-plugins-good Ubuntu=gstreamer1.0-plugins-bad"
DISTRO_PN_ALIAS:pn-gstreamer1.0-rtsp-server = "Ubuntu=gstreamer0.10-rtsp Fedora=gstreamer-rtsp"
DISTRO_PN_ALIAS:pn-gstreamer1.0-vaapi = "Fedora=gstreamer1-vaapi Debian=gstreamer-vaapi Clear=gstreamer-vaapi"
DISTRO_PN_ALIAS:pn-gtk+ = "Meego=gtk2 Fedora=gtk2 OpenSuSE=gtk2 Ubuntu=gtk+2.0 Mandriva=gtk+2.0 Debian=gtk+2.0"
DISTRO_PN_ALIAS:pn-gtk+3 = "Ubuntu=gtk+3.0 Debian=gtk+3.0 Fedora=gtk3"
DISTRO_PN_ALIAS:pn-gtk-doc = "Fedora=gtk-doc Ubuntu=gtk-doc"
DISTRO_PN_ALIAS:pn-gtk-engines = "Fedora=gtk2-engines OpenSuSE=gtk2-engines Ubuntu=gtk2-engines Mandriva=gtk-engines2 Debian=gtk2-engines"
DISTRO_PN_ALIAS:pn-gtk-sato-engine = "OpenedHand"
DISTRO_PN_ALIAS:pn-gtk-icon-utils-native = "OSPDT"
DISTRO_PN_ALIAS:pn-systemd-boot = "Ubuntu=systemd-boot Fedora=systemd-boot"
DISTRO_PN_ALIAS:pn-hello-mod = "OE-Core"
DISTRO_PN_ALIAS:pn-hwlatdetect = "OSPDT"
DISTRO_PN_ALIAS:pn-icecc-create-env = "OE-Core"
DISTRO_PN_ALIAS:pn-init-ifupdown = "Debian=ifupdown Ubuntu=ifupdown"
DISTRO_PN_ALIAS:pn-initramfs-boot = "OE-Core"
DISTRO_PN_ALIAS:pn-initramfs-framework = "OE-Core"
DISTRO_PN_ALIAS:pn-initramfs-live-boot = "OE-Core"
DISTRO_PN_ALIAS:pn-initramfs-live-install = "OE-Core"
DISTRO_PN_ALIAS:pn-initramfs-live-install-efi = "OE-Core"
DISTRO_PN_ALIAS:pn-initramfs-live-install-efi-testfs = "OE-Core"
DISTRO_PN_ALIAS:pn-initramfs-live-install-testfs = "OE-Core"
DISTRO_PN_ALIAS:pn-initscripts = "Fedora=initscripts Mandriva=initscripts"
DISTRO_PN_ALIAS:pn-iproute2 = "OSPDT"
DISTRO_PN_ALIAS:pn-jpeg = "OpenSuSE=libjpeg Ubuntu=libjpeg62"
DISTRO_PN_ALIAS:pn-kernel-devsrc = "Debian=linux-base Ubuntu=linux"
DISTRO_PN_ALIAS:pn-kern-tools-native = "Windriver"
DISTRO_PN_ALIAS:pn-keymaps = "OE-Core"
DISTRO_PN_ALIAS:pn-kf = "OSPDT"
DISTRO_PN_ALIAS:pn-lame = "Debian=lame Ubuntu=lame"
DISTRO_PN_ALIAS:pn-ldconfig-native = "Ubuntu=libc-bin Fedora=glibc"
DISTRO_PN_ALIAS:pn-libacpi = "Ubuntu=libacpi Mandriva=libacpi"
DISTRO_PN_ALIAS:pn-libatomics-ops = "Meego=libatomic-ops Debian=libatomic-ops Ubuntu=libatomic-ops OpenSuSE=libatomic-ops Mandriva=libatomic-ops"
DISTRO_PN_ALIAS:pn-libcgroup = "Ubuntu=libcgroup1 Debian=libcgroup1"
DISTRO_PN_ALIAS:pn-libcheck = "Ubuntu=check Fedora=check OpenSuSE=check"
DISTRO_PN_ALIAS:pn-libclass-isa-perl = "OSPDT"
DISTRO_PN_ALIAS:pn-libdumpvalue-perl = "OSPDT"
DISTRO_PN_ALIAS:pn-libenv-perl = "OSPDT"
DISTRO_PN_ALIAS:pn-liberation-fonts = "Ubuntu=fonts-liberation Fedora=liberation-fonts-ttf"
DISTRO_PN_ALIAS:pn-libfakekey = "Meego1.0=libfakekey Debian=libfakekey"
DISTRO_PN_ALIAS:pn-libfile-checktree-perl = "OSPDT"
DISTRO_PN_ALIAS:pn-libfm-extra = "Opensuse=libfm-extra4 Ubuntu=libfm-extra4"
DISTRO_PN_ALIAS:pn-libgcc = "Debian=libgcc4 Ubuntu=libgcc1 OpenSuSE=libgcc46"
DISTRO_PN_ALIAS:pn-libgdbus = "Intel"
DISTRO_PN_ALIAS:pn-libglade = "Meego=libglade2 Fedora=libglade2 OpenSuSE=libglade2 Ubuntu=libglade2 Mandriva=libglade2.0 Debian=libglade2"
DISTRO_PN_ALIAS:pn-libglu = "Debian=libglu Ubuntu=libglu Opensuse=mesa-libglu"
DISTRO_PN_ALIAS:pn-libgu = "OpenSuSE=glu OSPDT"
DISTRO_PN_ALIAS:pn-libi18n-collate-perl = "OSPDT"
DISTRO_PN_ALIAS:pn-libical = "Ubuntu=libical Fedora=libical"
DISTRO_PN_ALIAS:pn-libiconv = "Fedora=mingw-libiconv Opensuse=cross-mingw-libiconv"
DISTRO_PN_ALIAS:pn-libinput = "Ubuntu=libinput0 Fedora=libinput0"
DISTRO_PN_ALIAS:pn-libjson = "Ubuntu=libjson0-dev Debian=libjson0-dev"
DISTRO_PN_ALIAS:pn-libksba = "Fedora=libksba Debian=libksba8 Ubuntu=libksba"
DISTRO_PN_ALIAS:pn-libmatchbox = "Ubuntu=libmatchbox Fedora=libmatchbox"
DISTRO_PN_ALIAS:pn-libmpc = "Fedora=libmpc OpenSuse=libmpc2"
DISTRO_PN_ALIAS:pn-libnewt = "Debian=libnewt0.52 Fedora=newt"
DISTRO_PN_ALIAS:pn-libnewt-python = "Ubuntu=python-newt Fedora=newt-python"
DISTRO_PN_ALIAS:pn-libnl = "Mandriva=libnl Fedora=libnl"
DISTRO_PN_ALIAS:pn-libnss-mdns = "Meego=nss-mdns OpenSuSE=nss-mdns Ubuntu=nss-mdns Mandriva=nss_mdns Debian=nss-mdns"
DISTRO_PN_ALIAS:pn-libowl = "Debian=owl OpenedHand"
DISTRO_PN_ALIAS:pn-libpam = "Meego=pam Fedora=pam OpenSuSE=pam Ubuntu=pam Mandriva=pam Debian=pam"
DISTRO_PN_ALIAS:pn-libpcre = "Mandriva=libpcre0 Fedora=pcre"
DISTRO_PN_ALIAS:pn-libpcre2 = "Fedora=pcre2 Debian=pcre2 Clear=pcre2"
DISTRO_PN_ALIAS:pn-libpng12 = "Debian=libpng12-0 Fedora=libpng"
DISTRO_PN_ALIAS:pn-libpod-plainer-perl = "OSPDT"
DISTRO_PN_ALIAS:pn-libsamplerate0 = "Meego=libsamplerate Fedora=libsamplerate OpenSuSE=libsamplerate Ubuntu=libsamplerate Mandriva=libsamplerate Debian=libsamplerate"
DISTRO_PN_ALIAS:pn-libsdl2 = "Fedora=sdl2 Opensuse=libsdl2 Ubuntu=libsdl2 Debian=libsdl2"
DISTRO_PN_ALIAS:pn-libsndfile1 = "Meego=libsndfile Fedora=libsndfile OpenSuSE=libsndfile Ubuntu=libsndfile Mandriva=libsndfile Debian=libsndfile"
DISTRO_PN_ALIAS:pn-libsoup-2.4 = "Meego=libsoup Fedora=libsoup OpenSuSE=libsoup Ubuntu=libsoup2.4 Mandriva=libsoup Debian=libsoup2.4"
DISTRO_PN_ALIAS:pn-libtelepathy = "Debian=libtelepathy2 Ubuntu=libtelepathy2"
DISTRO_PN_ALIAS:pn-libtimedate-perl = "Debian=libtimedate-perl Ubuntu=libtimedate-perl"
DISTRO_PN_ALIAS:pn-liburcu = "Fedora=userspace-rcu Ubuntu=liburcu0"
DISTRO_PN_ALIAS:pn-libusb1 = "Debian=libusb-1.0-0 Fedora=libusb1"
DISTRO_PN_ALIAS:pn-libx11 = "Debian=libx11-6 Fedora=libX11 Ubuntu=libx11-6 OpenSuSE=xorg-x11-libX11"
DISTRO_PN_ALIAS:pn-libxcalibrate = "OSPDT upstream=http://cgit.freedesktop.org/xorg/lib/libXCalibrate/"
DISTRO_PN_ALIAS:pn-libxfont2 = "Fedora=libXfont2 Clear=libXfont2"
DISTRO_PN_ALIAS:pn-libxft = "Mandriva=libxft Debian=libxft2 Ubuntu=libxft2"
DISTRO_PN_ALIAS:pn-libxi = "Ubuntu=libxi Fedora=libXi"
DISTRO_PN_ALIAS:pn-libxkbcommon = "Fedora=libxkbcommon Debian=libxkbcommon"
DISTRO_PN_ALIAS:pn-libxscrnsaver = "Fedora=libXScrnSaver Ubuntu=libxss1 Mandriva=libxscrnsaver"
DISTRO_PN_ALIAS:pn-linux-dummy = "Intel"
DISTRO_PN_ALIAS:pn-linux-firmware = "Fedora=linux-firmware Ubuntu=linux-firmware"
DISTRO_PN_ALIAS:pn-linux-libc-headers = "Debian=linux-kernel-headers Ubuntu=linux-kernel-headers"
DISTRO_PN_ALIAS:pn-linux-libc-headers-yocto = "Debian=linux-kernel-headers Ubuntu=linux-kernel-headers"
DISTRO_PN_ALIAS:pn-linux-yocto = "Debian=linux-base Ubuntu=linux"
DISTRO_PN_ALIAS:pn-linux-yocto-rt = "Debian=linux-base Ubuntu=linux"
DISTRO_PN_ALIAS:pn-linux-yocto-tiny = "OSPDT"
DISTRO_PN_ALIAS:pn-ltp = "Mandriva=ltp Ubuntu=ltp"
DISTRO_PN_ALIAS:pn-lttng-modules = "OSPDT upstream=http://lttng.org/"
DISTRO_PN_ALIAS:pn-lttng-tools = "OSPDT upstream=http://lttng.org/"
DISTRO_PN_ALIAS:pn-lttng-ust = "OSPDT upstream=http://lttng.org/"
DISTRO_PN_ALIAS:pn-lz4 = "Debian=lz4 Fedora=lz4"
DISTRO_PN_ALIAS:pn-lzo = "Debian=liblzo Ubuntu=liblzo Fedora=lzp"
DISTRO_PN_ALIAS:pn-mailx = "Debian=bsd-mailx Ubuntu=bsd-mailx"
DISTRO_PN_ALIAS:pn-makedepend = "Mandriva=makedepend Ubuntu=xutils-dev"
DISTRO_PN_ALIAS:pn-makedevs = "OE-Core"
DISTRO_PN_ALIAS:pn-matchbox-config-gtk = "OpenedHand"
DISTRO_PN_ALIAS:pn-matchbox-desktop = "Mandriva=matchbox-desktop Ubuntu=matchbox-desktop"
DISTRO_PN_ALIAS:pn-matchbox-desktop-sato = "OpenedHand"
DISTRO_PN_ALIAS:pn-matchbox-keyboard = "Debian=matchbox-keyboard Fedora=matchbox-keyboard"
DISTRO_PN_ALIAS:pn-matchbox-panel-2 = "Debian=matchbox-panel Mandriva=matchbox-panel Ubuntu=matchbox-panel"
DISTRO_PN_ALIAS:pn-matchbox-session = "OpenedHand"
DISTRO_PN_ALIAS:pn-matchbox-session-sato = "OpenedHand"
DISTRO_PN_ALIAS:pn-matchbox-terminal = "OpenedHand"
DISTRO_PN_ALIAS:pn-matchbox-theme-sato = "OpenedHand"
DISTRO_PN_ALIAS:pn-matchbox-themes-extra = "Ubuntu=matchbox-themes-extra Mandriva=matchbox-themes-extra"
DISTRO_PN_ALIAS:pn-matchbox-themes-gtk = "OpenedHand"
DISTRO_PN_ALIAS:pn-matchbox-wm = "OpenedHand"
DISTRO_PN_ALIAS:pn-menu-cache = "OSPDT"
DISTRO_PN_ALIAS:pn-mesa = "Fedora=mesa Ubuntu=libgl1-mesa-dri"
DISTRO_PN_ALIAS:pn-mesa-gl = "Fedora=mesa Ubuntu=libgl1-mesa-dri"
DISTRO_PN_ALIAS:pn-meta-environment-extsdk-qemux86 = "OE-Core"
DISTRO_PN_ALIAS:pn-meta-environment-i586 = "OE-Core"
DISTRO_PN_ALIAS:pn-meta-environment-qemux86 = "OE-Core"
DISTRO_PN_ALIAS:pn-meta-environment-qemux86-64 = "OE-Core"
DISTRO_PN_ALIAS:pn-meta-ide-support = "OE-Core"
DISTRO_PN_ALIAS:pn-meta-toolchain = "OE-Core"
DISTRO_PN_ALIAS:pn-mini-x-session = "OSPDT"
DISTRO_PN_ALIAS:pn-mkelfimage = "Ubuntu=mkelfimage Fedora=mkelfimage"
DISTRO_PN_ALIAS:pn-mkfontdir = "Mandriva=mkfontdir Ubuntu=xfonts-utils Fedora=xorg-x11-font-utils"
DISTRO_PN_ALIAS:pn-mkfontscale = "Mandriva=mkfontscale Ubuntu=xfonts-utils Fedora=xorg-x11-font-utils"
DISTRO_PN_ALIAS:pn-mmc-utils = "OE-Core"
DISTRO_PN_ALIAS:pn-modutils-initscripts = "OE-Core"
DISTRO_PN_ALIAS:pn-mtd-utils = "Debian=mtd-utils Ubuntu=mtd-utils"
DISTRO_PN_ALIAS:pn-mx-1.0 = "Ubuntu=mx Debian=mx Fedora=mx"
DISTRO_PN_ALIAS:pn-neard = "Intel"
DISTRO_PN_ALIAS:pn-neon = "Fedora=neon Opensuse=neon"
DISTRO_PN_ALIAS:pn-network-suspend-scripts = "OE-Core"
DISTRO_PN_ALIAS:pn-nfs-export-root = "OpenedHand"
DISTRO_PN_ALIAS:pn-npth = "OSPDT"
DISTRO_PN_ALIAS:pn-nss-myhostname = "Meego=nss-mdns OpenSuSE=nss-mdns Ubuntu=nss-mdns Mandriva=nss_mdns Debian=nss-mdns"
DISTRO_PN_ALIAS:pn-ofono = "Debian=ofono Ubuntu=ofono"
DISTRO_PN_ALIAS:pn-oh-puzzles = "OpenedHand"
DISTRO_PN_ALIAS:pn-opkg = "OSPDT upstream=http://svn.openmoko.org/trunk/src/tar"
DISTRO_PN_ALIAS:pn-opkg-arch-config = "OE-Core"
DISTRO_PN_ALIAS:pn-opkg-collateral = "OE-Core"
DISTRO_PN_ALIAS:pn-opkg-keyrings = "OSPDT upstream=git://git.yoctoproject.org/opkg-utils"
DISTRO_PN_ALIAS:pn-opkg-nogpg = "OSPDT upstream=git://git.yoctoproject.org/opkg-utils"
DISTRO_PN_ALIAS:pn-opkg-utils = "OSPDT upstream=git://git.yoctoproject.org/opkg-utils"
DISTRO_PN_ALIAS:pn-os-release = "OE-Core"
DISTRO_PN_ALIAS:pn-packagegroup-base = "OE-Core"
DISTRO_PN_ALIAS:pn-packagegroup-core = "OE-Core"
DISTRO_PN_ALIAS:pn-packagegroup-core-boot = "OE-Core"
DISTRO_PN_ALIAS:pn-packagegroup-core-buildessential = "OE-Core"
DISTRO_PN_ALIAS:pn-packagegroup-core-device-devel = "OE-Core"
DISTRO_PN_ALIAS:pn-packagegroup-core-eclipse-debug = "OE-Core"
DISTRO_PN_ALIAS:pn-packagegroup-core-full-cmdline = "OE-Core"
DISTRO_PN_ALIAS:pn-packagegroup-core-nfs = "OE-Core"
DISTRO_PN_ALIAS:pn-packagegroup-core-sdk = "OE-Core"
DISTRO_PN_ALIAS:pn-packagegroup-core-ssh-dropbear = "OE-Core"
DISTRO_PN_ALIAS:pn-packagegroup-core-ssh-openssh = "OE-Core"
DISTRO_PN_ALIAS:pn-packagegroup-core-standalone-sdk-target = "OE-Core"
DISTRO_PN_ALIAS:pn-packagegroup-core-tools = "OE-Core"
DISTRO_PN_ALIAS:pn-packagegroup-core-tools-debug = "OE-Core"
DISTRO_PN_ALIAS:pn-packagegroup-core-tools-profile = "OE-Core"
DISTRO_PN_ALIAS:pn-packagegroup-core-tools-testapps = "OE-Core"
DISTRO_PN_ALIAS:pn-packagegroup-core-x11 = "OE-Core"
DISTRO_PN_ALIAS:pn-packagegroup-core-x11-base = "OE-Core"
DISTRO_PN_ALIAS:pn-packagegroup-core-x11-mini = "OE-Core"
DISTRO_PN_ALIAS:pn-packagegroup-core-x11-sato = "OE-Core"
DISTRO_PN_ALIAS:pn-packagegroup-core-x11-xserver = "OE-Core"
DISTRO_PN_ALIAS:pn-packagegroup-cross-canadian-i586 = "OE-Core"
DISTRO_PN_ALIAS:pn-packagegroup-cross-canadian-qemux86 = "OE-Core"
DISTRO_PN_ALIAS:pn-packagegroup-cross-canadian-qemux86-64 = "OE-Core"
DISTRO_PN_ALIAS:pn-packagegroup-sdk-host = "OE-Core"
DISTRO_PN_ALIAS:pn-packagegroup-self-hosted = "OE-Core"
DISTRO_PN_ALIAS:pn-package-index = "OE-Core"
DISTRO_PN_ALIAS:pn-patchelf = "Opensuse=patchelf Fedora=patchelf"
DISTRO_PN_ALIAS:pn-perf = "OSPDT"
DISTRO_PN_ALIAS:pn-piglit = "OE-Core"
DISTRO_PN_ALIAS:pn-pkgconfig = "Ubuntu=pkg-config Fedora=pkgconfig"
DISTRO_PN_ALIAS:pn-pointercal-xinput = "OE-Core"
DISTRO_PN_ALIAS:pn-pong-clock = "OpenedHand"
DISTRO_PN_ALIAS:pn-portmap = "Debian=rpcbind Fedora=rpcbind"
DISTRO_PN_ALIAS:pn-powertop = "Meego=powertop Fedora=powertop Debian=powertop OpenSuSE=powertop Mandriva=powertop"
DISTRO_PN_ALIAS:pn-ppp-dialin = "OE-Core"
DISTRO_PN_ALIAS:pn-pseudo = "Windriver"
DISTRO_PN_ALIAS:pn-psplash = "OpenedHand"
DISTRO_PN_ALIAS:pn-ptest-runner = "OE-Core"
DISTRO_PN_ALIAS:pn-pulseaudio-client-conf-sato = "OE-Core"
DISTRO_PN_ALIAS:pn-puzzles = "Debian=sgt-puzzles Fedora=puzzles"
DISTRO_PN_ALIAS:pn-python3 = "Fedora=python3 Debian=python3.2"
DISTRO_PN_ALIAS:pn-python3-iniparse = "Fedora=python-iniparse Debian=python-iniparse"
DISTRO_PN_ALIAS:pn-python3-pip = "OpenSuSE=python3-pip Debian=python3-pip"
DISTRO_PN_ALIAS:pn-python3-pycurl = "Fedora=python-pycurl Debian=pycurl"
DISTRO_PN_ALIAS:pn-python3-pygpgme = "Fedora=python-pygpgme Debian=pygpgme"
DISTRO_PN_ALIAS:pn-python3-setuptools = "OpenSuSE=python3-setuptools Debian=python3-setuptools"
DISTRO_PN_ALIAS:pn-python-dbus = "Ubuntu=python-dbus Debian=python-dbus Mandriva=python-dbus"
DISTRO_PN_ALIAS:pn-python-git = "Debian=python-git Fedora=GitPython"
DISTRO_PN_ALIAS:pn-python-mako = "Fedora=python-mako Opensuse=python-Mako"
DISTRO_PN_ALIAS:pn-python-pycairo = "Meego=pycairo Fedora=pycairo Ubuntu=pycairo Debian=pycairo"
DISTRO_PN_ALIAS:pn-python-pygobject = "Meego=pygobject2 Fedora=pygobject2 Ubuntu=pygobject Debian=pygobject"
DISTRO_PN_ALIAS:pn-python-scons = "Fedora=scons OpenSuSE=scons Ubuntu=scons Mandriva=scons Debian=scons"
DISTRO_PN_ALIAS:pn-python-setuptools = "Mandriva=python-setup OpenSuSE=python-setup-git"
DISTRO_PN_ALIAS:pn-python-smartpm = "Debian=smart OpenSuSE=smart"
DISTRO_PN_ALIAS:pn-qemu-config = "OpenedHand"
DISTRO_PN_ALIAS:pn-qemugl = "OpenedHand"
DISTRO_PN_ALIAS:pn-qemu-helper = "OpenedHand"
DISTRO_PN_ALIAS:pn-qemuwrapper-cross = "OE-Core"
DISTRO_PN_ALIAS:pn-readline = "Fedora=readline Debian=readline-common"
DISTRO_PN_ALIAS:pn-remake = "Mandriva=remake Debian=remake"
DISTRO_PN_ALIAS:pn-rgb = "Fedora=xorg-X11-server-utils Debian=x11-xserver-utils"
DISTRO_PN_ALIAS:pn-rpmresolve = "OSPDT"
DISTRO_PN_ALIAS:pn-rt-tests = "Debian=rt-tests Ubuntu=rt-tests"
DISTRO_PN_ALIAS:pn-run-postinsts = "OE-Core"
DISTRO_PN_ALIAS:pn-sato-icon-theme = "OpenedHand"
DISTRO_PN_ALIAS:pn-sato-screenshot = "OpenedHand"
DISTRO_PN_ALIAS:pn-sbc = "Fedora=sbc Debian=libsbc1"
DISTRO_PN_ALIAS:pn-screenshot = "OpenedHand"
DISTRO_PN_ALIAS:pn-settings-daemon = "OpenedHand"
DISTRO_PN_ALIAS:pn-sgml-common = "OpenSuSE=sgml-common Fedora=sgml-common"
DISTRO_PN_ALIAS:pn-sgmlspl = "Debian=sgmlspl Ubuntu=sgmlspl"
DISTRO_PN_ALIAS:pn-shadow-securetty = "Ubuntu=shadow Fedora=shadow"
DISTRO_PN_ALIAS:pn-shadow-sysroot = "Ubuntu=shadow Fedora=shadow"
DISTRO_PN_ALIAS:pn-shutdown-desktop = "OpenedHand"
DISTRO_PN_ALIAS:pn-speexdsp = "Ubuntu=libspeexdsp1 Fedora=speexdsp"
DISTRO_PN_ALIAS:pn-stat = "Debian=coreutils Fedora=coreutils"
DISTRO_PN_ALIAS:pn-stress = "Debian=stress Fedora=stress"
DISTRO_PN_ALIAS:pn-sysklogd = "Debian=sysklogd Mandriva=sysklogd"
DISTRO_PN_ALIAS:pn-sysprof = "Fedora=sysprof Debian=sysprof"
DISTRO_PN_ALIAS:pn-systemd-compat-units = "Fedora=systemd Ubuntu=systemd"
DISTRO_PN_ALIAS:pn-systemd-systemctl = "OE-Core"
DISTRO_PN_ALIAS:pn-systemd-systemdctl = "Fedora=systemd Ubuntu=systemd"
DISTRO_PN_ALIAS:pn-sysvinit-inittab = "OE-Core"
DISTRO_PN_ALIAS:pn-tar-replacement = "Fedora=tar Ubuntu=tar"
DISTRO_PN_ALIAS:pn-tcf-agent = "Windriver upstream=http://www.eclipse.org/dsdp/tm/"
DISTRO_PN_ALIAS:pn-texinfo-dummy-native = "OE-Core"
DISTRO_PN_ALIAS:pn-tiny-init = "OSPDT"
DISTRO_PN_ALIAS:pn-tremor = "OSPDT upstream=http://www.xiph.org/vorbis/"
DISTRO_PN_ALIAS:pn-ttf-bitstream-vera = "Debian=ttf-bitstream-vera Ubuntu=ttf-bitstream-vera"
DISTRO_PN_ALIAS:pn-tzcode = "OSPDT"
DISTRO_PN_ALIAS:pn-u-boot-fw-utils = "Ubuntu=u-boot-tools Debian=u-boot-tools"
DISTRO_PN_ALIAS:pn-u-boot-tools = "Ubuntu=u-boot-tools Debian=uboot-tools"
DISTRO_PN_ALIAS:pn-udev = "Mandriva=udev Fedora=udev"
DISTRO_PN_ALIAS:pn-udev-extraconf = "OE-Core"
DISTRO_PN_ALIAS:pn-unfs3 = "Debian=unfs3 Fedora=unfs3"
DISTRO_PN_ALIAS:pn-unfs-server = "OE-Core"
DISTRO_PN_ALIAS:pn-uninative-tarball = "OE-Core"
DISTRO_PN_ALIAS:pn-update-alternatives-dpkg = "Opensuse=update-alternatives Mandriva=update-alternatives"
DISTRO_PN_ALIAS:pn-update-rc.d = "OE-Core"
DISTRO_PN_ALIAS:pn-usbinit = "OE-Core"
DISTRO_PN_ALIAS:pn-util-macros = "Meego=xorg-x11-util-macros Fedora=xorg-x11-util-macros Mandriva=x11-util-macros"
DISTRO_PN_ALIAS:pn-v86d = "Debian=v86d Ubuntu=v86d"
DISTRO_PN_ALIAS:pn-waffle = "OE-Core"
DISTRO_PN_ALIAS:pn-watchdog = "Debian=watchdog Ubuntu=watchdog Mandriva=watchdog"
DISTRO_PN_ALIAS:pn-webkitgtk = "Fedora=webkitgtk Ubuntu=libwebkit"
DISTRO_PN_ALIAS:pn-weston = "Fedora=weston OpenSuSE=weston"
DISTRO_PN_ALIAS:pn-weston-init = "OE-Core"
DISTRO_PN_ALIAS:pn-which = "Mandriva=which Fedora=which"
DISTRO_PN_ALIAS:pn-wpa-supplicant = "Meego=wpa_supplicant Fedora=wpa_supplicant OpenSuSE=wpa_supplicant Ubuntu=wpasupplicant Mandriva=wpa_supplicant Debian=wpasupplicant"
DISTRO_PN_ALIAS:pn-x11perf = "Fedora=xorg-x11-apps Ubuntu=x11-apps"
DISTRO_PN_ALIAS:pn-xcb-util-image = "Debian=xcb-util Fedora=xcb-util"
DISTRO_PN_ALIAS:pn-xcb-util-keysyms = "Debian=xcb-util Fedora=xcb-util"
DISTRO_PN_ALIAS:pn-xcb-util-wm = "Debian=xcb-util Fedora=xcb-util"
DISTRO_PN_ALIAS:pn-xcursor-transparent-theme = "OpenedHand"
DISTRO_PN_ALIAS:pn-xdpyinfo = "Fedora=xorg-x11-utils Ubuntu=x11-utils"
DISTRO_PN_ALIAS:pn-xev = "Fedora=xorg-x11-utils Ubuntu=x11-utils"
DISTRO_PN_ALIAS:pn-xeyes = "Ubuntu=x11-apps Fedora=xorg-x11-apps"
DISTRO_PN_ALIAS:pn-xf86-input-evdev = "Ubuntu=xserver-xorg-input-evdev Mandriva=x11-driver-input-evdev Debian=xserver-xorg-input-evdev Fedora=xorg-x11-drv-evdev Meego=xorg-x11-drv-evdev"
DISTRO_PN_ALIAS:pn-xf86-input-keyboard = "Meego=xorg-x11-drv-keyboard Fedora=xorg-x11-drv-keyboard Mandriva=x11-driver-input-keyboard Debian=xserver-xorg-input-keyboard"
DISTRO_PN_ALIAS:pn-xf86-input-mouse = "Ubuntu=xserver-xorg-input-mouse Mandriva=x11-driver-input-mouse Debian=xserver-xorg-input-mouse"
DISTRO_PN_ALIAS:pn-xf86-input-synaptics = "Meego=xorg-x11-drv-synaptics Fedora=xorg-x11-drv-synaptics Ubuntu=xserver-xorg-input-synaptics Mandriva=x11-driver-input-synaptics Debian=xfree86-driver-synaptics"
DISTRO_PN_ALIAS:pn-xf86-input-vmmouse = "Fedora=xorg-x11-drv-vmmouse Ubuntu=xserver-xorg-input-vmmouse Mandriva=x11-driver-input-vmmouse Debian=xserver-xorg-input-vmmouse"
DISTRO_PN_ALIAS:pn-xf86-video-cirrus = "Opensuse=xf86-video-cirrus Debian=xserver-xorg-video-cirrus"
DISTRO_PN_ALIAS:pn-xf86-video-fbdev = "Ubuntu=xserver-xorg-video-fbdev Debian=xserver-xorg-video-fbdev"
DISTRO_PN_ALIAS:pn-xf86-video-intel = "Debian=xserver-xorg-video-intel Fedora=xorg-x11-drv-intel Mandriva=x11-driver-video-intel Meego=xorg-x11-drv-intel Ubuntu=xserver-xorg-video-intel"
DISTRO_PN_ALIAS:pn-xf86-video-modesetting = "Debian=xserver-xorg-video-modesetting Fedora=xf86-video-modesetting"
DISTRO_PN_ALIAS:pn-xf86-video-omap = "Ubuntu=xf86-video-omap Debian=xf86-video-omap"
DISTRO_PN_ALIAS:pn-xf86-video-omapfb = "OSPDT"
DISTRO_PN_ALIAS:pn-xf86-video-vesa = "Debian=xserver-xorg-video-vesa Fedora=xorg-x11-drv-vesa Mandriva=x11-driver-video-vesa Ubuntu=xserver-xorg-video-vesa"
DISTRO_PN_ALIAS:pn-xf86-video-vmware = "Debian=xserver-xorg-video-vmware Fedora=xorg-x11-drv-vmware Mandriva=x11-driver-video-vmware Ubuntu=xserver-xorg-video-vmware"
DISTRO_PN_ALIAS:pn-xhost = "Ubuntu=x11-xserver-utils Fedora=xorg-x11-server-utils"
DISTRO_PN_ALIAS:pn-xinput-calibrator = "Fedora=xinput-calibrator Mandravia=xinput-calibrator Ubuntu=xinput-calibrator"
DISTRO_PN_ALIAS:pn-xkbcomp = "Ubuntu=x11-xkb-utils Fedora=xorg-x11-xkb-utils"
DISTRO_PN_ALIAS:pn-xmodmap = "Meego=xorg-x11-utils-xmodmap Fedora=xorg-x11-server-utils Ubuntu=x11-xserver-utils"
DISTRO_PN_ALIAS:pn-xorg-minimal-fonts = "Ubuntu=xfonts-base Fedora=xorg-x11-fonts-base"
DISTRO_PN_ALIAS:pn-xorgproto = "OSPDT upstream=http://cgit.freedesktop.org/xorg/proto/xorgproto"
DISTRO_PN_ALIAS:pn-xprop = "Meego=xorg-x11-utils-xprop Fedora=xorg-x11-utils Ubuntu=x11-utils"
DISTRO_PN_ALIAS:pn-xproxymanagementprotocol = "Meego=xorg-x11-proto-xproxymanagementprotocol"
DISTRO_PN_ALIAS:pn-xrandr = "Ubuntu=x11-xserver-utils Fedora=xorg-x11-server-utils"
DISTRO_PN_ALIAS:pn-xrdb = "Ubuntu=x11-xserver-utils Fedora=xorg-x11-server-utils"
DISTRO_PN_ALIAS:pn-xserver-nodm-init = "OE-Core"
DISTRO_PN_ALIAS:pn-xserver-xf86-config = "OE-Core"
DISTRO_PN_ALIAS:pn-xserver-xf86-dri-lite = "Fedora=xorg-x11-server Ubuntu=xserver-xorg"
DISTRO_PN_ALIAS:pn-xserver-xf86-lite = "Fedora=xorg-x11-server Ubuntu=xserver-xorg"
DISTRO_PN_ALIAS:pn-xserver-xorg = "Fedora=xorg-x11-server Ubuntu=xserver-xorg"
DISTRO_PN_ALIAS:pn-xset = "Fedora=xorg-x11-server-utils Ubuntu=x11-xserver-utils Debian=x11-xserver-utils Opensuse=xorg-x11"
DISTRO_PN_ALIAS:pn-xuser-account = "OE-Core"
DISTRO_PN_ALIAS:pn-xvinfo = "Fedora=xorg-x11-utils Ubuntu=x11-utils"
DISTRO_PN_ALIAS:pn-xwininfo = "Fedora=xorg-x11-utils Ubuntu=x11-utils"