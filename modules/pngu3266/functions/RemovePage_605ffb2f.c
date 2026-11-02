/* Module: pngu3266.dll
   Function: RemovePage
   Address: 605ffb2f
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNPropertySheet::RemovePage(class CPNPropertyPage *) */

int __thiscall CPNPropertySheet::RemovePage(CPNPropertySheet *this,CPNPropertyPage *param_1)

{
  int iVar1;
  
                    /* 0xfb2f  1766  ?RemovePage@CPNPropertySheet@@UAEHPAVCPNPropertyPage@@@Z */
  if (*(HWND *)(this + 0xc) != (HWND)0x0) {
    SendMessageA(*(HWND *)(this + 0xc),0x466,0,*(LPARAM *)(param_1 + 0xec));
    (**(code **)(*(int *)param_1 + 0xc))();
  }
  iVar1 = XPNPropertySheet::RemovePage((XPNPropertySheet *)this,param_1);
  return iVar1;
}


