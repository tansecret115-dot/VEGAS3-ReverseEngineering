/* Module: pngu3266.dll
   Function: RemovePage
   Address: 60610ae0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall XPNPropertySheet::RemovePage(class CPNPropertyPage *) */

int __thiscall XPNPropertySheet::RemovePage(XPNPropertySheet *this,CPNPropertyPage *param_1)

{
  int *piVar1;
  int iVar2;
  
                    /* 0x20ae0  1767  ?RemovePage@XPNPropertySheet@@UAEHPAVCPNPropertyPage@@@Z */
  iVar2 = 0;
  if (0 < *(int *)(this + 0xd4)) {
    piVar1 = *(int **)(this + 0xd0);
    do {
      if ((CPNPropertyPage *)*piVar1 == param_1) {
        FUN_6061a710(this + 0xd0,iVar2,1);
        return 1;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 < *(int *)(this + 0xd4));
  }
  return 0;
}


