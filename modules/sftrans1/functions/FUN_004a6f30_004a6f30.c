/* Module: sftrans1.dll
   Function: FUN_004a6f30
   Address: 004a6f30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_004a6f30(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  HWND hWnd;
  int local_158;
  int local_154;
  int local_150;
  int local_14c;
  
  if ((param_4 != (undefined4 *)0x0) && (param_4[1] == 0x6dc)) {
    hWnd = GetDlgItem((HWND)param_1[0xc],0x6dc);
    SendMessageA(hWnd,0x805,0,(LPARAM)&local_158);
    param_1[0x1e] = local_158;
    param_1[0x1f] = local_154;
    param_1[0x20] = local_150;
    param_1[0x21] = local_14c;
    (**(code **)(*param_1 + 0x2c))(param_1);
    *param_4 = 1;
  }
  return 0;
}


