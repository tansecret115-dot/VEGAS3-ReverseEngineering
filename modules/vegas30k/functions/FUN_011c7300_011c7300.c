/* Module: vegas30k.dll
   Function: FUN_011c7300
   Address: 011c7300
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_011c7300(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_c;
  int local_8;
  int local_4;
  
  iVar3 = 0;
  local_c = 0;
  if (*(int **)(param_1 + 0x210) == (int *)0x0) {
    local_8 = 0;
  }
  else {
    local_8 = **(int **)(param_1 + 0x210);
  }
  local_4 = 0;
  iVar2 = param_3;
  if (0 < local_8) {
    do {
      if ((*(byte *)(param_1 + 0x68) & 0x18) == 0) break;
      iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x210) + 8) + iVar3 * 4);
      if (((*(uint *)(iVar1 + 0x154) & 1) != 0) && ((*(uint *)(iVar1 + 0x154) & 6) != 0)) {
        local_4 = local_4 + 1;
        iVar2 = param_3;
        if (*(int *)(iVar1 + 0x1e4) < param_3) {
          iVar2 = *(int *)(iVar1 + 0x1e4);
        }
        iVar2 = FUN_011d1750(*(undefined4 *)(iVar1 + 0x1f0),iVar2);
        if (iVar2 < 0) {
          return iVar2;
        }
        if (iVar2 == 0) break;
        _SfAudio_CopyChannels_24
                  (*(undefined4 *)(param_1 + 0x1ac),param_2,*(undefined4 *)(iVar1 + 0x19c),
                   *(undefined4 *)(iVar1 + 0x1f0),iVar2,iVar1 + 0x1f8);
        local_c = local_c + iVar2;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < local_8);
  }
  if ((-1 < iVar2) && (iVar2 = local_c, local_4 != 0)) {
    return local_c / local_4;
  }
  return iVar2;
}


