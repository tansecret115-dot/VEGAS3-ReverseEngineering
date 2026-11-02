/* Module: vidcap30.exe
   Function: _SfDlgUndropComboBox@4
   Address: 0047fce0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfDlgUndropComboBox_4(void)

{
  HWND hWnd;
  int iVar1;
  LRESULT LVar2;
  CHAR local_c [12];
  
                    /* 0x7fce0  351  _SfDlgUndropComboBox@4 */
  hWnd = GetFocus();
  if ((hWnd != (HWND)0x0) && (iVar1 = GetClassNameA(hWnd,local_c,10), iVar1 != 0)) {
    iVar1 = lstrcmpiA(local_c,"Edit");
    if (iVar1 == 0) {
      hWnd = GetParent(hWnd);
      iVar1 = GetClassNameA(hWnd,local_c,10);
      if (iVar1 == 0) {
        return 0;
      }
    }
    iVar1 = lstrcmpiA(local_c,"ComboBox");
    if ((iVar1 == 0) && (LVar2 = SendMessageA(hWnd,0x157,0,0), LVar2 != 0)) {
      SendMessageA(hWnd,0x14f,0,0);
      return 1;
    }
  }
  return 0;
}


