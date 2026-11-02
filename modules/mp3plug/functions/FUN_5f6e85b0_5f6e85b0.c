/* Module: mp3plug.dll
   Function: FUN_5f6e85b0
   Address: 5f6e85b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_5f6e85b0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = *(int *)(param_1 + 4);
  uVar3 = *(uint *)(param_1 + 0x51c);
  if (((iVar1 == 0) || (iVar1 == 1)) || (iVar1 == 3)) {
    if (0x14 < (int)uVar3) {
      uVar3 = 0x15;
    }
  }
  else {
    if (iVar1 != 2) {
      return 0;
    }
    if (0x23 < (int)uVar3) {
      uVar3 = 0x24;
    }
  }
  uVar4 = *(int *)(param_1 + 0x52c) + 1;
  *(uint *)(param_1 + 0x52c) = uVar4;
  if (2 < uVar4) {
    uVar4 = 3;
  }
  uVar2 = FUN_5f6ffd70(uVar3,param_1 + 0x1c,param_1 + 0x878,*(int *)(&DAT_5f740fec + uVar4 * 4),
                       (int *)(param_1 + 0x538),param_2);
  return uVar2;
}


