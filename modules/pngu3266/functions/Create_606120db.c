/* Module: pngu3266.dll
   Function: Create
   Address: 606120db
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall XPNToolTip::Create(class CPNWindow *,char const *) */

int __thiscall XPNToolTip::Create(XPNToolTip *this,CPNWindow *param_1,char *param_2)

{
  int iVar1;
  
                    /* 0x220db  930  ?Create@XPNToolTip@@UAEHPAVCPNWindow@@PBD@Z */
  iVar1 = 0;
  if ((param_2 != (char *)0x0) || (cRam00000000 != '\0')) {
    iVar1 = CPNWindow::Create((CPNWindow *)this,param_1,0,0,10,10,0x2000,param_2);
  }
  return iVar1;
}


