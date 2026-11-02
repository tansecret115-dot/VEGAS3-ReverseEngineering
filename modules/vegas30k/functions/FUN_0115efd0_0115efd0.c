/* Module: vegas30k.dll
   Function: FUN_0115efd0
   Address: 0115efd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0115efd0(int param_1)

{
  FUN_0115eea0(param_1,0xee);
  FUN_0115eec0(param_1,0xe);
  FUN_0115ee60(param_1,0x41);
  FUN_0115ee60(param_1,100);
  FUN_0115ee60(param_1,0x6f);
  FUN_0115ee60(param_1,0x62);
  FUN_0115ee60(param_1,0x65);
  FUN_0115eec0(param_1,100);
  FUN_0115eec0(param_1,0);
  FUN_0115eec0(param_1,0);
  if (*(int *)(param_1 + 0x75) == 3) {
    FUN_0115ee60(param_1,1);
    return;
  }
  if (*(int *)(param_1 + 0x75) != 5) {
    FUN_0115ee60(param_1,0);
    return;
  }
  FUN_0115ee60(param_1,2);
  return;
}


