/* Module: mp3plug.dll
   Function: FUN_5f6e8070
   Address: 5f6e8070
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_5f6e8070(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_18;
  
  local_18 = 0;
  iVar3 = param_1;
  do {
    if (((*(int *)(iVar3 + 0x150) == 0) && (iVar1 = *(int *)(iVar3 + 0x218), iVar1 != 0)) &&
       (iVar4 = 0, 0 < *(int *)(iVar3 + 0x208))) {
      iVar2 = 0;
      do {
        FUN_5f6e62d0(param_3,*(uint *)(param_1 + 0xc + iVar2 + local_18 * 4),iVar1);
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + 4;
      } while (iVar4 < *(int *)(iVar3 + 0x208));
    }
    local_18 = local_18 + *(int *)(iVar3 + 0x208);
    iVar3 = iVar3 + 4;
  } while (iVar3 < param_1 + 0x10);
  iVar4 = 0;
  iVar1 = 0;
  iVar3 = *(int *)(param_1 + 0x308);
  if (0 < iVar3) {
    do {
      iVar2 = 0;
      if (0 < *(int *)(param_1 + 0x32c + iVar4 * 4)) {
        do {
          FUN_5f6ffc80((int *)(param_2 + iVar1 * 4),*(int *)(param_1 + 0x314 + iVar4 * 4),param_3);
          iVar2 = iVar2 + 1;
          iVar1 = iVar1 + 2;
        } while (iVar2 < *(int *)(param_1 + 0x32c + iVar4 * 4));
        iVar3 = *(int *)(param_1 + 0x308);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x2f8)) {
    do {
      FUN_5f6ffcf0((uint *)(param_2 + iVar1 * 4),*(int *)(param_1 + 0x2fc),param_3);
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + 4;
    } while (iVar3 < *(int *)(param_1 + 0x2f8));
  }
  return;
}


