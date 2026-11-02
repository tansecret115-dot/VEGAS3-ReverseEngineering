/* Module: vegas30.exe
   Function: FUN_00582a70
   Address: 00582a70
   Source: Ghidra pseudocode (Stage 10 batch) */


LRESULT FUN_00582a70(HWND param_1,UINT param_2,WPARAM param_3,LONG *param_4)

{
  int *piVar1;
  LRESULT LVar2;
  
  LVar2 = 0;
  piVar1 = (int *)GetWindowLongA(param_1,-0x15);
  if (param_2 == 1) {
    SetWindowLongA(param_1,-0x15,*param_4);
    piVar1 = (int *)GetWindowLongA(param_1,-0x15);
    if (piVar1 != (int *)0x0) {
      piVar1[1] = (int)param_1;
      LVar2 = (**(code **)(*piVar1 + 0xc))(param_1,1,param_3,param_4);
      return LVar2;
    }
  }
  else {
    if (param_2 != 2) {
      if (piVar1 != (int *)0x0) {
        LVar2 = (**(code **)(*piVar1 + 0xc))(param_1,param_2,param_3,param_4);
        return LVar2;
      }
      LVar2 = DefWindowProcA(param_1,param_2,param_3,(LPARAM)param_4);
      return LVar2;
    }
    piVar1 = (int *)GetWindowLongA(param_1,-0x15);
    if (piVar1 != (int *)0x0) {
      LVar2 = (**(code **)(*piVar1 + 0xc))(param_1,2,param_3,param_4);
      piVar1[1] = 0;
    }
    SetWindowLongA(param_1,-0x15,0);
  }
  return LVar2;
}


