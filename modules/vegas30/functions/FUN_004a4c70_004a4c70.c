/* Module: vegas30.exe
   Function: FUN_004a4c70
   Address: 004a4c70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004a4c70(int param_1)

{
  __int64 _Var1;
  
  _Var1 = Transport_GetPosEx(0);
  FUN_00453970();
  FUN_004543c0(param_1,_Var1,*(undefined4 *)(param_1 + 0xb90),*(undefined4 *)(param_1 + 0xb94),1);
  return;
}


