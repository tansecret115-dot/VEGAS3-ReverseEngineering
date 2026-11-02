/* Module: vegas30k.dll
   Function: _SfLineupHookWithMainDialog@8
   Address: 010b6bc0
   Source: Ghidra pseudocode (Stage 10 batch) */


BOOL _SfLineupHookWithMainDialog_8(HWND param_1,HWND param_2)

{
  BOOL BVar1;
  tagRECT local_20;
  tagRECT local_10;
  
                    /* 0xb6bc0  1055  _SfLineupHookWithMainDialog@8 */
  if (param_2 == (HWND)0x0) {
    param_2 = GetParent(param_1);
  }
  GetWindowRect(param_2,&local_10);
  GetWindowRect(param_1,&local_20);
  if (local_20.right < local_10.right) {
    local_20.right = local_10.right;
    MapWindowPoints((HWND)0x0,param_2,(LPPOINT)&local_20,2);
    BVar1 = SetWindowPos(param_1,(HWND)0x0,local_20.left,local_20.top,local_20.right - local_20.left
                         ,local_20.bottom - local_20.top,0);
    return BVar1;
  }
  return 1;
}


