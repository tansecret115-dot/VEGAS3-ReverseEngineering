/* Module: pngu3266.dll
   Function: _PNGuiDlgProc@16
   Address: 605f62c2
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _PNGuiDlgProc_16(HWND__ *param_1,int param_2,undefined4 param_3,CPNWindow *param_4)

{
  _func_long_HWND___ptr_uint_uint_long **pp_Var1;
  code *pcVar2;
  _func_long_HWND___ptr_uint_uint_long *p_Var3;
  HWND pHVar4;
  undefined4 uVar5;
  tagRECT local_24;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
                    /* 0x62c2  2220  _PNGuiDlgProc@16 */
  if (param_2 == 0x110) {
    CPNWindow::Attach(param_4,param_1);
    pp_Var1 = CPNWindow::GetSuperWndProcAddress(param_4);
    pcVar2 = (code *)GetWindowLongA(param_1,4);
    if (pcVar2 != _PNGuiWndProc_16) {
      p_Var3 = (_func_long_HWND___ptr_uint_uint_long *)SetWindowLongA(param_1,4,0x605f618d);
      if (p_Var3 != _PNGuiWndProc_16) {
        *pp_Var1 = p_Var3;
      }
      pHVar4 = GetParent(param_1);
      if (pHVar4 == (HWND)0x0) {
        SystemParametersInfoA(0x30,0,&local_14,0);
        GetWindowRect(param_1,&local_24);
        SetWindowPos(param_1,(HWND)0x0,
                     (local_c - local_14) / 2 - (local_24.right - local_24.left) / 2,
                     (local_8 - local_10) / 2 - (local_24.bottom - local_24.top) / 2,0,0,5);
      }
      uVar5 = (**(code **)(*(int *)param_4 + 0x128))();
      return uVar5;
    }
  }
  return 0;
}


