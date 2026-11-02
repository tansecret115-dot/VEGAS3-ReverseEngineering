/* Module: vegas30.exe
   Function: FUN_00560a00
   Address: 00560a00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00560a00(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x3c) == 0) {
    uVar1 = _SfGetFileNamePtrA_4(param_1 + 0x39e);
    SfPrintF(param_2,"Copying to %s",uVar1);
    return;
  }
  if (*(int *)(param_1 + 0x4c8) != 0) {
    SfPrintF(param_2,"Calculating Tail...");
    return;
  }
  uVar1 = _SfGetFileNamePtrA_4(param_1 + 0x39e);
  SfPrintF(param_2,"Processing to %s",uVar1);
  return;
}


