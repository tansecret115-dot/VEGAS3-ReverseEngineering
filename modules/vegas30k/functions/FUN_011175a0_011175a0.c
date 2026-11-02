/* Module: vegas30k.dll
   Function: FUN_011175a0
   Address: 011175a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_011175a0(HDC param_1,undefined4 *param_2,undefined4 *param_3,int param_4,int param_5,
                 int param_6,int param_7)

{
  int x;
  
  SelectObject(param_1,(HGDIOBJ)*param_2);
  MoveToEx(param_1,param_4,param_5,(LPPOINT)0x0);
  x = param_6 + (param_4 - param_7 / 2);
  LineTo(param_1,x,param_5);
  param_7 = param_5 + param_7;
  param_6 = param_6 + param_4;
  LineTo(param_1,param_6 + -1,param_7 + -2);
  LineTo(param_1,param_6,param_7 + -2);
  SelectObject(param_1,(HGDIOBJ)*param_3);
  MoveToEx(param_1,param_4,param_5 + 1,(LPPOINT)0x0);
  LineTo(param_1,x,param_5 + 1);
  MoveToEx(param_1,x,param_5 + 2,(LPPOINT)0x0);
  LineTo(param_1,param_6 + -1,param_7);
  LineTo(param_1,param_6 + -1,param_7 + -1);
  LineTo(param_1,param_6,param_7 + -1);
  return;
}


