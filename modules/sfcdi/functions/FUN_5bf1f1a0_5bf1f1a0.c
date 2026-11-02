/* Module: sfcdi.dll
   Function: FUN_5bf1f1a0
   Address: 5bf1f1a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf1f1a0(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  
  if (param_1 == 0) {
    return 0x80004003;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar1 = FUN_5bf2bb90(param_1);
    if (uVar1 != 0) {
      uVar3 = 0;
      if (uVar1 != 0) {
        do {
          piVar2 = (int *)FUN_5bf2bbb0(param_1,uVar3);
          uVar3 = uVar3 + 1;
          *piVar2 = *piVar2 + param_2;
        } while (uVar3 < uVar1);
      }
      return 0;
    }
    return 0;
  }
  return 0x80070057;
}


