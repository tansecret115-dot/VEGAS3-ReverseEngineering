/* Module: vidcap30.exe
   Function: FUN_00404f10
   Address: 00404f10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00404f10(int param_1)

{
  undefined4 uVar1;
  
  if (DAT_005ba9a0 != 0) {
    uVar1 = FUN_00410190();
    *(undefined4 *)(param_1 + 100) = uVar1;
    FUN_00404c90(param_1,0);
    return;
  }
  *(undefined4 *)(param_1 + 100) = 0;
  FUN_00404c90(param_1,0);
  return;
}


