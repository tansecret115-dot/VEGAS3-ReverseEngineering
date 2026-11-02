/* Module: sfcdi.dll
   Function: FUN_5bf2bf00
   Address: 5bf2bf00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf2bf00(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_1 == 0) {
    return 0x80004003;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    return 0x80070057;
  }
  uVar1 = FUN_5bf2bb90(param_1);
  if (uVar1 == 0) {
    return 0;
  }
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      iVar2 = FUN_5bf2bbb0(param_1,uVar3);
      FUN_5bf2bac0(iVar2);
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  return 0;
}


