/* Module: pngu3266.dll
   Function: GetPage
   Address: 60610b1e
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CPNPropertyPage * __thiscall XPNPropertySheet::GetPage(unsigned long)const  */

CPNPropertyPage * __thiscall XPNPropertySheet::GetPage(XPNPropertySheet *this,ulong param_1)

{
  CPNPropertyPage *pCVar1;
  
                    /* 0x20b1e  1288  ?GetPage@XPNPropertySheet@@QBEPAVCPNPropertyPage@@K@Z */
  if (param_1 < *(uint *)(this + 0xd4)) {
    pCVar1 = *(CPNPropertyPage **)(*(int *)(this + 0xd0) + param_1 * 4);
  }
  else {
    pCVar1 = (CPNPropertyPage *)0x0;
  }
  return pCVar1;
}


