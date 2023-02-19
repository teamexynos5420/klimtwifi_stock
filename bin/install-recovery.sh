#!/system/bin/sh
if ! applypatch -c EMMC:/dev/block/platform/dw_mmc.0/by-name/RECOVERY:8554496:a56722548d6a12c77f06a696623d3505075ed94f; then
  applypatch EMMC:/dev/block/platform/dw_mmc.0/by-name/BOOT:8060928:554418e90049d22c7cc229421e60cdcd91129a86 EMMC:/dev/block/platform/dw_mmc.0/by-name/RECOVERY a56722548d6a12c77f06a696623d3505075ed94f 8554496 554418e90049d22c7cc229421e60cdcd91129a86:/system/recovery-from-boot.p && log -t recovery "Installing new recovery image: succeeded" || log -t recovery "Installing new recovery image: failed"
else
  log -t recovery "Recovery image already installed"
fi
