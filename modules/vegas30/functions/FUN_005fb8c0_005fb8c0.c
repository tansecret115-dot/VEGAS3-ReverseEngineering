/* Module: vegas30.exe
   Function: FUN_005fb8c0
   Address: 005fb8c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005fb8c0(undefined4 param_1)

{
  int iVar1;
  __int64 _Var2;
  
  iVar1 = Transport_IsPlaying();
  if (iVar1 != 0) {
    _Var2 = Transport_GetPosEx(0);
    FUN_005fb8f0(&DAT_0065e528,_Var2,param_1);
    DAT_0064767c = DAT_0064767c | 4;
  }
  return;
}


