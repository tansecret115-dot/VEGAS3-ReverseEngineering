/* Module: sftrans1.dll
   Function: FUN_00497e80
   Address: 00497e80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_00497e80(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  HWND hWnd;
  double local_158;
  double local_150;
  
  if ((param_4 != (undefined4 *)0x0) && (param_4[1] == 0x1623)) {
    hWnd = GetDlgItem((HWND)param_1[0xc],0x1623);
    SendMessageA(hWnd,0x805,0,(LPARAM)&local_158);
    param_1[0x1a] = (int)(float)local_158;
    param_1[0x1b] = (int)(float)local_150;
    (**(code **)(*param_1 + 0x2c))(param_1);
    *param_4 = 1;
  }
  return 0;
}


