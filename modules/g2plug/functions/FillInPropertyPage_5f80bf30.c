/* Module: g2plug.dll
   Function: FillInPropertyPage
   Address: 5f80bf30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CG2EncodeWizard::FillInPropertyPage(struct _PROPSHEETPAGEA *,int,char
   const *,int (__stdcall*)(struct HWND__ *,unsigned int,unsigned int,long)) */

void __thiscall
CG2EncodeWizard::FillInPropertyPage
          (CG2EncodeWizard *this,_PROPSHEETPAGEA *param_1,int param_2,char *param_3,
          _func_int_HWND___ptr_uint_uint_long *param_4)

{
                    /* 0xbf30  7
                       ?FillInPropertyPage@CG2EncodeWizard@@QAEXPAU_PROPSHEETPAGEA@@HPBDP6GHPAUHWND__@@IIJ@Z@Z
                        */
  param_1->dwSize = 0x30;
  param_1->dwFlags = 0x28;
  (param_1->u).pszTemplate = (LPCSTR)(param_2 & 0xffff);
  param_1->hInstance = DAT_5f877460;
  param_1->pfnDlgProc = (DLGPROC)param_4;
  (param_1->u2).hIcon = (HICON)0x0;
  param_1->pszTitle = param_3;
  param_1->lParam = (LPARAM)this;
  return;
}


