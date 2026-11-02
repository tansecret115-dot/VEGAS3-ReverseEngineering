/* Module: vegas30.exe
   Function: FUN_00418c30
   Address: 00418c30
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00418c30(int param_1)

{
  undefined4 uVar1;
  
  FUN_0043c0e0(*(undefined4 *)(param_1 + 0x204));
  *(undefined4 *)(param_1 + 0x204) = 0;
  uVar1 = FUN_00418bc0(param_1);
  *(undefined4 *)(param_1 + 0x204) = uVar1;
  FUN_00418c70(param_1);
  FUN_00418270(param_1);
  return;
}


