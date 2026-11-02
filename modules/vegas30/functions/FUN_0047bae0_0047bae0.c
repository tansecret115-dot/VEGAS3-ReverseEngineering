/* Module: vegas30.exe
   Function: FUN_0047bae0
   Address: 0047bae0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0047bae0(HWND param_1,int *param_2,int *param_3)

{
  HDC hdc;
  
  hdc = GetDC(param_1);
  SetROP2(hdc,10);
  if (param_2 != (int *)0x0) {
    MoveToEx(hdc,param_2[2],param_2[1],(LPPOINT)0x0);
    LineTo(hdc,*param_2,param_2[1]);
    LineTo(hdc,*param_2,param_2[3]);
    LineTo(hdc,param_2[2],param_2[3]);
    LineTo(hdc,param_2[2],param_2[1]);
  }
  MoveToEx(hdc,param_3[2],param_3[1],(LPPOINT)0x0);
  LineTo(hdc,*param_3,param_3[1]);
  LineTo(hdc,*param_3,param_3[3]);
  LineTo(hdc,param_3[2],param_3[3]);
  LineTo(hdc,param_3[2],param_3[1]);
  ReleaseDC(param_1,hdc);
  return;
}


