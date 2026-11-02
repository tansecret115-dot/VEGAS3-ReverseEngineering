/* Module: pngu3266.dll
   Function: GetDialogItemHWND
   Address: 605fbfae
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: struct HWND__ * __thiscall CPNDialog::GetDialogItemHWND(unsigned long) */

HWND__ * __thiscall CPNDialog::GetDialogItemHWND(CPNDialog *this,ulong param_1)

{
  HWND__ *hDlg;
  HWND pHVar1;
  
                    /* 0xbfae  1182  ?GetDialogItemHWND@CPNDialog@@QAEPAUHWND__@@K@Z */
  hDlg = CPNWindow::GetHWND((CPNWindow *)this);
  pHVar1 = GetDlgItem(hDlg,param_1);
  return pHVar1;
}


