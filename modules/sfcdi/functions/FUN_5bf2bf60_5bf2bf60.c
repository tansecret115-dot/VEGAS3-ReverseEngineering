/* Module: sfcdi.dll
   Function: FUN_5bf2bf60
   Address: 5bf2bf60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf2bf60(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (param_1 == 0) {
    return 0x80004003;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar2 = FUN_5bf2bb90(param_1);
    if (iVar2 != 0) {
      uVar1 = iVar2 - 1;
      uVar4 = 0;
      if (uVar1 != 0) {
        do {
          iVar2 = FUN_5bf2bbb0(param_1,uVar4);
          uVar4 = uVar4 + 1;
          iVar3 = FUN_5bf2bbb0(param_1,uVar4);
          *(int *)(iVar2 + 0x18) = *(int *)(iVar3 + 0x14) - *(int *)(iVar2 + 0x14);
        } while (uVar4 < uVar1);
      }
      iVar2 = FUN_5bf2bbb0(param_1,uVar1);
      *(int *)(iVar2 + 0x18) = *(int *)(param_1 + 0x1d8c) - *(int *)(iVar2 + 0x14);
      return 0;
    }
    return 0;
  }
  return 0x80070057;
}


