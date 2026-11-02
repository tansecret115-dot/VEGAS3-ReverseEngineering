/* Module: wmfplug2.dll
   Function: SfWMF_CreateTemplateDlg
   Address: 00418430
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfWMF_CreateTemplateDlg(struct HWND__ *,struct tagRECT *,struct
   SFDLG_TEMPLATE_INFO *,struct HWND__ * *) */

long SfWMF_CreateTemplateDlg
               (HWND__ *param_1,tagRECT *param_2,SFDLG_TEMPLATE_INFO *param_3,HWND__ **param_4)

{
  HGLOBAL hMem;
  CEncodeWizard *this;
  int iVar1;
  HWND hWnd;
  
                    /* 0x18430  13
                       ?SfWMF_CreateTemplateDlg@@YGJPAUHWND__@@PAUtagRECT@@PAUSFDLG_TEMPLATE_INFO@@PAPAU1@@Z
                        */
  hMem = GlobalAlloc(0x40,0x920);
  this = GlobalLock(hMem);
  if (this != (CEncodeWizard *)0x0) {
    iVar1 = CEncodeWizard::CEncodeWizard(this,param_1,1);
    if (iVar1 != 0) {
      hWnd = (HWND)FUN_0041f0d0(DAT_00489d58,(LPCSTR)0x1aa,param_1,(DLGPROC)&LAB_00418350,iVar1);
      *param_4 = hWnd;
      if (hWnd != (HWND)0x0) {
        SetWindowPos(hWnd,(HWND)0x0,param_2->left,param_2->top,param_2->right - param_2->left,
                     param_2->bottom - param_2->top,0x40);
        return 0;
      }
    }
  }
  return 0;
}


