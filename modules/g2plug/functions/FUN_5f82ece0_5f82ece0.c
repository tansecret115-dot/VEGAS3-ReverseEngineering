/* Module: g2plug.dll
   Function: FUN_5f82ece0
   Address: 5f82ece0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f82ece0(HDC param_1,undefined4 *param_2,undefined4 *param_3,int param_4,int param_5,
                 int param_6,int param_7)

{
  int y;
  int x;
  int x_00;
  
  SelectObject(param_1,(HGDIOBJ)*param_2);
  MoveToEx(param_1,param_4,param_5,(LPPOINT)0x0);
  x_00 = param_6 + (param_4 - param_7 / 2);
  LineTo(param_1,x_00,param_5);
  y = param_5 + param_7;
  x = param_6 + param_4;
  LineTo(param_1,x + -1,y + -2);
  LineTo(param_1,x,y + -2);
  SelectObject(param_1,(HGDIOBJ)*param_3);
  MoveToEx(param_1,param_4,param_5 + 1,(LPPOINT)0x0);
  LineTo(param_1,x_00,param_5 + 1);
  MoveToEx(param_1,x_00,param_5 + 2,(LPPOINT)0x0);
  LineTo(param_1,x + -1,y);
  LineTo(param_1,x + -1,y + -1);
  LineTo(param_1,x,y + -1);
  return;
}


