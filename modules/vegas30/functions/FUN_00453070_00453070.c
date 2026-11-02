/* Module: vegas30.exe
   Function: FUN_00453070
   Address: 00453070
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00453070(int param_1)

{
  if ((param_1 != 0) && (*(int *)(param_1 + 4) != 0)) {
    FUN_004a4580(param_1);
    FUN_004530a0(param_1,0x7fff);
    FUN_00453030(param_1);
  }
  return;
}


