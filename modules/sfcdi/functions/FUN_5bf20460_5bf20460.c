/* Module: sfcdi.dll
   Function: FUN_5bf20460
   Address: 5bf20460
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf20460(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    return 0x80004003;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    return 0;
  }
  uVar2 = 0;
  iVar1 = FUN_5bf2bb90(param_1);
  if (0 < iVar1) {
    do {
      iVar1 = FUN_5bf2bbb0(param_1,uVar2);
      FUN_5bf2beb0(iVar1 + 0x40);
      uVar2 = uVar2 + 1;
      iVar1 = FUN_5bf2bb90(param_1);
    } while ((int)uVar2 < iVar1);
  }
  FUN_5bf2bd60((uint *)(param_1 + 0xc));
  return 0;
}


