/* Module: Setup.exe
   Function: _SfSetEditCtrlFont@8
   Address: 00406530
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfSetEditCtrlFont_8(HWND param_1,HFONT param_2)

{
  UINT UVar1;
  HWND hWnd;
  int iVar2;
  CHAR local_34 [52];
  
                    /* 0x6530  325  _SfSetEditCtrlFont@8 */
  UVar1 = GetACP();
  if (UVar1 != 0x4e4) {
    hWnd = GetWindow(param_1,5);
    if (param_2 == (HFONT)0x0) {
      param_2 = _SfGetUIFont_4(0x11);
    }
    for (; hWnd != (HWND)0x0; hWnd = GetWindow(hWnd,2)) {
      iVar2 = GetClassNameA(hWnd,local_34,0x32);
      if ((iVar2 != 0) &&
         ((iVar2 = lstrcmpiA(local_34,"Edit"), iVar2 == 0 ||
          (iVar2 = lstrcmpiA(local_34,"ComboBox"), iVar2 == 0)))) {
        SendMessageA(hWnd,0x30,(WPARAM)param_2,1);
      }
    }
    return 1;
  }
  return 0;
}


