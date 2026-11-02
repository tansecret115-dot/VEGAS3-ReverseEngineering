/* Module: vegas30.exe
   Function: FUN_0045ab80
   Address: 0045ab80
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0045ab80(HWND param_1,UINT param_2,WPARAM param_3,LPARAM param_4)

{
  LONG LVar1;
  int iVar2;
  
  LVar1 = GetWindowLongA(param_1,-0x15);
  if (LVar1 != 0) {
    if (param_2 == 2) {
      FUN_0045aaf0(param_1,LVar1);
      return 0;
    }
    iVar2 = FUN_00459d60(LVar1,param_1,param_2,param_3,param_4);
    return iVar2;
  }
  if (param_2 == 1) {
    iVar2 = FUN_0045aa50(param_1,param_4);
    return (iVar2 != 0) - 1;
  }
  iVar2 = DefWindowProcA(param_1,param_2,param_3,param_4);
  return iVar2;
}


