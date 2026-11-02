/* Module: g2plug.dll
   Function: SfG2_CreateTemplateDialog
   Address: 5f8100c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfG2_CreateTemplateDialog(struct HWND__ *,struct tagRECT *,struct HWND__ * *) */

long SfG2_CreateTemplateDialog(HWND__ *param_1,tagRECT *param_2,HWND__ **param_3)

{
  HGLOBAL hMem;
  LPVOID pvVar1;
  HWND hWnd;
  
                    /* 0x100c0  21  ?SfG2_CreateTemplateDialog@@YGJPAUHWND__@@PAUtagRECT@@PAPAU1@@Z
                        */
  hMem = GlobalAlloc(0x42,0x1c);
  pvVar1 = GlobalLock(hMem);
  if (pvVar1 == (LPVOID)0x0) {
    return -0x7ff8fff2;
  }
  *(undefined4 *)((int)pvVar1 + 0x10) = 1;
  *(undefined4 *)((int)pvVar1 + 0x14) = 1;
  hWnd = (HWND)FUN_5f816910(DAT_5f87746c,(LPCSTR)0x1aa,param_1,(DLGPROC)&LAB_5f80fd40,(LPARAM)pvVar1
                           );
  *param_3 = hWnd;
  if (hWnd != (HWND)0x0) {
    SetWindowPos(hWnd,(HWND)0x0,param_2->left,param_2->top,param_2->right - param_2->left,
                 param_2->bottom - param_2->top,0x40);
  }
  return 0;
}


