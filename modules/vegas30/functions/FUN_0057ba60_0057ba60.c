/* Module: vegas30.exe
   Function: FUN_0057ba60
   Address: 0057ba60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0057ba60(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = _SfIsWin95_0();
  if (iVar1 != 0) {
    FUN_0057b750(param_1,param_2);
    return;
  }
  FUN_0057b860(param_1,param_2);
  return;
}


