/* Module: wmfplug2.dll
   Function: FillInPropertyPage
   Address: 0041c080
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CEncodeWizard::FillInPropertyPage(struct _PROPSHEETPAGEA *,int,char const
   *,int (__stdcall*)(struct HWND__ *,unsigned int,unsigned int,long)) */

void __thiscall
CEncodeWizard::FillInPropertyPage
          (CEncodeWizard *this,_PROPSHEETPAGEA *param_1,int param_2,char *param_3,
          _func_int_HWND___ptr_uint_uint_long *param_4)

{
                    /* 0x1c080  7
                       ?FillInPropertyPage@CEncodeWizard@@QAEXPAU_PROPSHEETPAGEA@@HPBDP6GHPAUHWND__@@IIJ@Z@Z
                        */
  param_1->dwSize = 0x30;
  param_1->dwFlags = 0x28;
  (param_1->u).pszTemplate = (LPCSTR)(param_2 & 0xffff);
  param_1->hInstance = DAT_00489d50;
  param_1->pfnDlgProc = (DLGPROC)param_4;
  (param_1->u2).hIcon = (HICON)0x0;
  param_1->pszTitle = param_3;
  param_1->lParam = (LPARAM)this;
  return;
}


