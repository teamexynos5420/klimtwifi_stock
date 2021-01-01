#!/system/bin/sh
if ! applypatch -c EMMC:/dev/block/platform/dw_mmc.0/by-name/RECOVERY:8554496:fe5d3c5549f0cba8ea6bade96b111f974c91e307; then
  applypatch EMMC:/dev/block/platform/dw_mmc.0/by-name/BOOT:8060928:e55837583c5d2367d129135e90401d8d0ae13534 EMMC:/dev/block/platform/dw_mmc.0/by-name/RECOVERY fe5d3c5549f0cba8ea6bade96b111f974c91e307 8554496 e55837583c5d2367d129135e90401d8d0ae13534:/system/recovery-from-boot.p && log -t recovery "Installing new recovery image: succeeded" || log -t recovery "Installing new recovery image: failed"
else
  log -t recovery "Recovery image already installed"
fi
