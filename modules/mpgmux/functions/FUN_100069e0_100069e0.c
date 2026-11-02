/* Module: mpgmux.dll
   Function: FUN_100069e0
   Address: 100069e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_100069e0(int param_1)

{
  int iVar1;
  
  if (((*(byte *)(param_1 + 0x11ac) & 1) != 0) && (*(char *)(param_1 + 0x2518) == '\0')) {
    iVar1 = (**(code **)(*(int *)(param_1 + 0x1208) + 0xc))
                      (*(int *)(param_1 + 0x1208),param_1 + 0x1220,0x20);
    if (iVar1 != 0x20) {
      FUN_100050f0(param_1,(byte *)s_Unable_to_read_from_video_units__10017600);
      return 1;
    }
    if (*(char *)(param_1 + 0x6c) != '\0') {
      FUN_10006840(param_1,*(int *)(param_1 + 0x11fc));
    }
    *(undefined4 *)(param_1 + 0x1460) = *(undefined4 *)(param_1 + 0x1238);
    *(undefined4 *)(param_1 + 0x1464) = *(undefined4 *)(param_1 + 0x123c);
    *(undefined1 *)(param_1 + 0x2518) = 1;
    *(int *)(param_1 + 0x2e70) = *(int *)(param_1 + 0x2e70) + 1;
  }
  if (((*(byte *)(param_1 + 0x11ac) & 2) != 0) && (*(char *)(param_1 + 0x2519) == '\0')) {
    iVar1 = (**(code **)(*(int *)(param_1 + 0x120c) + 0xc))
                      (*(int *)(param_1 + 0x120c),param_1 + 0x1240,0x10);
    if (iVar1 != 0x10) {
LAB_10006ade:
      FUN_100050f0(param_1,(byte *)s_Unable_to_read_from_audio_units_100175e0);
      return 2;
    }
    if (*(char *)(param_1 + 0x6c) != '\0') {
      FUN_10006620(param_1 + 0x13c8,*(int *)(param_1 + 0x1200));
    }
    if (*(int *)(param_1 + 0x13e4) == 4) {
      iVar1 = (**(code **)(*(int *)(param_1 + 0x120c) + 0xc))
                        (*(int *)(param_1 + 0x120c),param_1 + 0x1240,0x10);
      if (iVar1 != 0x10) goto LAB_10006ade;
    }
    *(undefined1 *)(param_1 + 0x2519) = 1;
    *(int *)(param_1 + 0x25f4) = *(int *)(param_1 + 0x25f4) + 1;
  }
  if (((*(byte *)(param_1 + 0x11ac) & 4) != 0) && (*(char *)(param_1 + 0x251a) == '\0')) {
    iVar1 = (**(code **)(*(int *)(param_1 + 0x1210) + 0xc))
                      (*(int *)(param_1 + 0x1210),param_1 + 0x1250,0x10);
    if (iVar1 != 0x10) {
LAB_10006b79:
      FUN_100050f0(param_1,(byte *)s_Unable_to_read_from_secondary_au_100175b4);
      return 4;
    }
    if (*(char *)(param_1 + 0x6c) != '\0') {
      FUN_10006620(param_1 + 0x1408,*(int *)(param_1 + 0x1204));
    }
    if (*(int *)(param_1 + 0x1424) == 4) {
      iVar1 = (**(code **)(*(int *)(param_1 + 0x1210) + 0xc))
                        (*(int *)(param_1 + 0x1210),param_1 + 0x1250,0x10);
      if (iVar1 != 0x10) goto LAB_10006b79;
    }
    *(undefined1 *)(param_1 + 0x251a) = 1;
    *(int *)(param_1 + 0x25f8) = *(int *)(param_1 + 0x25f8) + 1;
  }
  return 0;
}


