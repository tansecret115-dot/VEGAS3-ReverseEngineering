/* Module: pngu3266.dll
   Function: AddPage
   Address: 605ffae8
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNPropertySheet::AddPage(class CPNPropertyPage *) */

int __thiscall CPNPropertySheet::AddPage(CPNPropertySheet *this,CPNPropertyPage *param_1)

{
  int iVar1;
  
                    /* 0xfae8  763  ?AddPage@CPNPropertySheet@@UAEHPAVCPNPropertyPage@@@Z */
  if (*(int *)(this + 0xc) != 0) {
    (**(code **)(*(int *)param_1 + 0x178))(*(undefined4 *)(this + 0x104));
    *(CPNPropertySheet **)(param_1 + 0xe4) = this;
    SendMessageA(*(HWND *)(this + 0xc),0x467,0,*(LPARAM *)(param_1 + 0xec));
  }
  iVar1 = XPNPropertySheet::AddPage((XPNPropertySheet *)this,param_1);
  return iVar1;
}


