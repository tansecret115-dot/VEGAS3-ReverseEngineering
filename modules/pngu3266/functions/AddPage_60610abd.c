/* Module: pngu3266.dll
   Function: AddPage
   Address: 60610abd
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall XPNPropertySheet::AddPage(class CPNPropertyPage *) */

int __thiscall XPNPropertySheet::AddPage(XPNPropertySheet *this,CPNPropertyPage *param_1)

{
                    /* 0x20abd  764  ?AddPage@XPNPropertySheet@@UAEHPAVCPNPropertyPage@@@Z */
  if (param_1 != (CPNPropertyPage *)0x0) {
    FUN_6061a640(this + 0xd0,*(int *)(this + 0xd4),param_1);
  }
  return (uint)(param_1 != (CPNPropertyPage *)0x0);
}


