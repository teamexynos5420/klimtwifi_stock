#!/system/bin/sh
if ! applypatch -c EMMC:/dev/block/platform/dw_mmc.0/by-name/RECOVERY:8486912:bc624e663f780277c988e1fad5c63d6a7717db22; then
  applypatch EMMC:/dev/block/platform/dw_mmc.0/by-name/BOOT:8001536:8afd280be7642ca5b8f68518a3867fa85dd213c2 EMMC:/dev/block/platform/dw_mmc.0/by-name/RECOVERY bc624e663f780277c988e1fad5c63d6a7717db22 8486912 8afd280be7642ca5b8f68518a3867fa85dd213c2:/system/recovery-from-boot.p && log -t recovery "Installing new recovery image: succeeded" || log -t recovery "Installing new recovery image: failed"
else
  log -t recovery "Recovery image already installed"
fi
