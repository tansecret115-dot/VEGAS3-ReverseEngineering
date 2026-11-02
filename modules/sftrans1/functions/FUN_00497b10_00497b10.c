/* Module: sftrans1.dll
   Function: FUN_00497b10
   Address: 00497b10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_00497b10(int *param_1,undefined4 param_2,ushort param_3,undefined4 param_4,undefined4 *param_5)

{
  HWND hWnd;
  UINT Msg;
  WPARAM wParam;
  int *lParam;
  
  if (param_3 < 0xa029) {
    if (param_3 == 41000) {
      FUN_004c5940(1,param_1[0xc],0x3f7,0xf,0);
      return 0;
    }
    if (param_3 == 1000) {
      FUN_004976d0();
      *param_5 = 1;
      return 0;
    }
    if (param_3 == 0x1625) {
      lParam = param_1 + 0x1d;
      wParam = 0;
      Msg = 0x702;
      hWnd = GetDlgItem((HWND)param_1[0xc],0x1625);
      SendMessageA(hWnd,Msg,wParam,(LPARAM)lParam);
      (**(code **)(*param_1 + 0x2c))(param_1);
      return 0;
    }
  }
  else if (param_3 == 0xa029) {
    FUN_00406390(param_1[0xc]);
  }
  return 0;
}


