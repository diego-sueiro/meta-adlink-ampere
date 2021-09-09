require conf/machine/include/arm/arch-armv8a.inc


# Use kernel provided by ampere
PREFERRED_PROVIDER_virtual/kernel ?= "linux-ampere-lts"
PREFERRED_VERSION_linux-ampere-lts ?= "5.10%"

EFI_PROVIDER ?= "grub-efi"


IMAGE_FSTYPES += "tar.bz2 ext4 wic wic.gz cpio.gz"
WKS_FILE ?= "ampere-efidisk.wks"


DISTRO_FEATURES_append = " systemd"
DISTRO_FEATURES_BACKFILL_CONSIDERED += "sysvinit"
VIRTUAL-RUNTIME_init_manager = "systemd"
VIRTUAL-RUNTIME_initscripts = "systemd-compat-units"


IMAGE_INSTALL_append = " kernel-modules"

KERNEL_IMAGETYPE = "Image"