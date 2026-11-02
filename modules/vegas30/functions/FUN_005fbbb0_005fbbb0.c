/* Module: vegas30.exe
   Function: FUN_005fbbb0
   Address: 005fbbb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005fbbb0(WPARAM param_1,int param_2)

{
  int iVar1;
  __int64 _Var2;
  
  iVar1 = Transport_IsPreviewPlaying();
  if (iVar1 == 0) {
    _Var2 = Transport_GetPreviewPos();
    FUN_005fbc10(&DAT_0065e528,_Var2,param_1,param_2);
  }
  if (DAT_0064763c != (HWND)0x0) {
    SendMessageA(DAT_0064763c,0x618,param_1,param_2);
  }
  if (param_2 == 0x4e00d) {
    FUN_005fb200(1);
    FUN_00405540(0x6e10);
  }
  return;
}


