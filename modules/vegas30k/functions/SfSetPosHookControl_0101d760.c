/* Module: vegas30k.dll
   Function: SfSetPosHookControl
   Address: 0101d760
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall SfSetPosHookControl(struct HWND__ *,struct HWND__ *,unsigned int,unsigned int,int)
    */

int SfSetPosHookControl(HWND__ *param_1,HWND__ *param_2,uint param_3,uint param_4,int param_5)

{
  HWND hWnd;
  HWND hWnd_00;
  BOOL BVar1;
  tagRECT *lpRect;
  tagRECT local_20;
  tagRECT local_10;
  
                    /* 0x1d760  499  ?SfSetPosHookControl@@YGHPAUHWND__@@0IIH@Z */
  if (param_2 == (HWND__ *)0x0) {
    param_2 = GetParent(param_1);
  }
  hWnd = GetDlgItem(param_1,param_4);
  if (hWnd == (HWND)0x0) {
    return 0;
  }
  GetWindowRect(hWnd,&local_10);
  lpRect = &local_20;
  hWnd_00 = GetDlgItem(param_2,param_3);
  GetWindowRect(hWnd_00,lpRect);
  MapWindowPoints((HWND)0x0,param_1,(LPPOINT)&local_10,2);
  MapWindowPoints((HWND)0x0,param_1,(LPPOINT)&local_20,2);
  if (param_5 != 0) {
    local_20.left = local_20.left - param_5;
    local_20.right = local_20.right + param_5;
  }
  BVar1 = SetWindowPos(hWnd,(HWND)0x0,local_20.left,local_10.top,local_20.right - local_20.left,
                       local_10.bottom - local_10.top,0);
  return BVar1;
}


