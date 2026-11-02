/* Module: mpgmux.dll
   Function: FUN_100077d0
   Address: 100077d0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl FUN_100077d0(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint local_8;
  uint local_4;
  
  bVar1 = true;
  local_8 = 0;
  local_4 = 0;
  if (((*(byte *)(param_1 + 0x11ac) & 1) != 0) && (*(int *)(param_1 + 0x2e60) == 0)) {
    local_4 = 1;
    iVar4 = *(int *)(param_1 + 0x24e0) * 2;
    if (0 < iVar4) {
      iVar3 = 0x20;
      do {
        iVar2 = (**(code **)(*(int *)(param_1 + 0x1208) + 4))(*(int *)(param_1 + 0x1208),iVar3);
        if (iVar2 == 0) {
          local_8 = 1;
          break;
        }
        bVar1 = false;
        iVar4 = iVar4 - *(int *)(iVar3 + -0x20 + iVar2);
        iVar3 = iVar3 + 0x20;
      } while (0 < iVar4);
    }
  }
  if (((*(byte *)(param_1 + 0x11ac) & 2) != 0) && (*(int *)(param_1 + 0x2e64) == 0)) {
    iVar4 = *(int *)(param_1 + 0x24e8) << 1;
    local_4 = local_4 | 2;
    if (0 < iVar4) {
      iVar3 = 0x10;
      do {
        iVar2 = (**(code **)(*(int *)(param_1 + 0x120c) + 4))(*(int *)(param_1 + 0x120c),iVar3);
        if (iVar2 == 0) {
          local_8 = local_8 | 2;
          break;
        }
        bVar1 = false;
        iVar4 = iVar4 - *(int *)(iVar3 + -0x10 + iVar2);
        iVar3 = iVar3 + 0x10;
      } while (0 < iVar4);
    }
  }
  if (((*(byte *)(param_1 + 0x11ac) & 4) != 0) && (*(int *)(param_1 + 0x2e68) == 0)) {
    iVar4 = *(int *)(param_1 + 0x24f0) << 1;
    local_4 = local_4 | 4;
    if (0 < iVar4) {
      iVar3 = 0x10;
      do {
        iVar2 = (**(code **)(*(int *)(param_1 + 0x1210) + 4))(*(int *)(param_1 + 0x1210),iVar3);
        if (iVar2 == 0) {
          local_8 = local_8 | 4;
          break;
        }
        bVar1 = false;
        iVar4 = iVar4 - *(int *)(iVar3 + -0x10 + iVar2);
        iVar3 = iVar3 + 0x10;
      } while (0 < iVar4);
    }
  }
  if ((local_4 == local_8) && (bVar1)) {
    local_8 = 8;
  }
  return local_8;
}


