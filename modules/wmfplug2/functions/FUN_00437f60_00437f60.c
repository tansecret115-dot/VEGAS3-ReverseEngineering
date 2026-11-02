/* Module: wmfplug2.dll
   Function: FUN_00437f60
   Address: 00437f60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00437f60(HDC param_1,undefined4 *param_2,undefined4 *param_3,int param_4,int param_5,
                 int param_6,int param_7)

{
  int x;
  int iVar1;
  
  SelectObject(param_1,(HGDIOBJ)*param_2);
  iVar1 = param_5 + -2 + param_7;
  MoveToEx(param_1,param_4,iVar1,(LPPOINT)0x0);
  LineTo(param_1,param_4 + 1,iVar1);
  x = param_7 / 2 + param_4;
  LineTo(param_1,x,param_5);
  LineTo(param_1,param_6 + param_4,param_5);
  SelectObject(param_1,(HGDIOBJ)*param_3);
  iVar1 = param_5 + -1 + param_7;
  MoveToEx(param_1,param_4,iVar1,(LPPOINT)0x0);
  LineTo(param_1,param_4 + 2,iVar1);
  LineTo(param_1,x,param_5 + 2);
  iVar1 = param_5 + 1;
  LineTo(param_1,x,iVar1);
  MoveToEx(param_1,x + 1,iVar1,(LPPOINT)0x0);
  LineTo(param_1,param_6 + param_4,iVar1);
  return;
}


