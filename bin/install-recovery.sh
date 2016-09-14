#!/system/bin/sh
if ! applypatch -c EMMC:/dev/block/platform/dw_mmc.0/by-name/RECOVERY:7749632:575735e085ac0f851256ce7816414b1c1971e33f; then
  applypatch EMMC:/dev/block/platform/dw_mmc.0/by-name/BOOT:7536640:ae560e8628b4aebfaa9b6d119329043d88a8b0ef EMMC:/dev/block/platform/dw_mmc.0/by-name/RECOVERY 575735e085ac0f851256ce7816414b1c1971e33f 7749632 ae560e8628b4aebfaa9b6d119329043d88a8b0ef:/system/recovery-from-boot.p && log -t recovery "Installing new recovery image: succeeded" || log -t recovery "Installing new recovery image: failed"
else
  log -t recovery "Recovery image already installed"
fi
