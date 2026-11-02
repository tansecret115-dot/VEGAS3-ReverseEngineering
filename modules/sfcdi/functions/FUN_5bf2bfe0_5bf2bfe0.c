/* Module: sfcdi.dll
   Function: FUN_5bf2bfe0
   Address: 5bf2bfe0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf2bfe0(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (param_1 == 0) {
    return 0x80004003;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    return 0x80070057;
  }
  uVar1 = FUN_5bf2bb90(param_1);
  if (uVar1 == 0) {
    return 0x8004e0ce;
  }
  if (uVar1 < 100) {
    uVar1 = uVar1 - 1;
    uVar4 = 0;
    if (uVar1 != 0) {
      do {
        iVar2 = FUN_5bf2bbb0(param_1,uVar4);
        uVar4 = uVar4 + 1;
        iVar3 = FUN_5bf2bbb0(param_1,uVar4);
        if (*(uint *)(iVar3 + 0x14) <= *(uint *)(iVar2 + 0x14)) {
          return 0x8004e0ce;
        }
        *(uint *)(iVar2 + 0x18) = *(uint *)(iVar3 + 0x14) - *(uint *)(iVar2 + 0x14);
      } while (uVar4 < uVar1);
    }
    iVar2 = FUN_5bf2bbb0(param_1,uVar1);
    if (*(uint *)(param_1 + 0x1d8c) <= *(uint *)(iVar2 + 0x14)) {
      return 0x8004e0ce;
    }
    *(uint *)(iVar2 + 0x18) = *(uint *)(param_1 + 0x1d8c) - *(uint *)(iVar2 + 0x14);
    return 0;
  }
  return 0x8004e0ce;
}


