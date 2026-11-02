/* Module: vegas30.exe
   Function: FUN_004fcff0
   Address: 004fcff0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004fcff0(undefined4 *param_1)

{
  KillTimer((HWND)*param_1,99);
  if (param_1[0x65] != 0) {
    FUN_004fa200(param_1[0x65]);
  }
  param_1[0x65] = 0;
  if (param_1[0x6a] != 0) {
    _SfDibFree_8(param_1[0x6a],0);
  }
  param_1[0x6a] = 0;
  return;
}


