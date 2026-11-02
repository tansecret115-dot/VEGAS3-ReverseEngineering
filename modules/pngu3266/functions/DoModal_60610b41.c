/* Module: pngu3266.dll
   Function: DoModal
   Address: 60610b41
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual unsigned long __thiscall XPNPropertySheet::DoModal(class CPNWindow *,char const
   *,unsigned long) */

ulong __thiscall
XPNPropertySheet::DoModal(XPNPropertySheet *this,CPNWindow *param_1,char *param_2,ulong param_3)

{
                    /* 0x20b41  969  ?DoModal@XPNPropertySheet@@UAEKPAVCPNWindow@@PBDK@Z */
  XPNDialog::PreDomodal((XPNDialog *)this,(CPNWindow *)0x0);
  XPNDialog::PostDomodal((XPNDialog *)this,(CPNWindow *)0x0);
  return 0;
}


