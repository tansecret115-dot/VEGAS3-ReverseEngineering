/* Module: vegas30.exe
   Function: FUN_005fbb00
   Address: 005fbb00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005fbb00(undefined4 param_1)

{
  int iVar1;
  __int64 _Var2;
  
  iVar1 = Transport_IsPreviewPlaying();
  if (iVar1 != 0) {
    _Var2 = Transport_GetPreviewPos();
    FUN_005fbb30(&DAT_0065e528,_Var2,param_1);
  }
  return;
}


