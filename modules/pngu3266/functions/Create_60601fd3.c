/* Module: pngu3266.dll
   Function: Create
   Address: 60601fd3
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNToolTip::Create(class CPNWindow *,char const *) */

int __thiscall CPNToolTip::Create(CPNToolTip *this,CPNWindow *param_1,char *param_2)

{
  int iVar1;
  uint uVar2;
  
                    /* 0x11fd3  914  ?Create@CPNToolTip@@UAEHPAVCPNWindow@@PBD@Z */
  iVar1 = XPNToolTip::Create((XPNToolTip *)this,param_1,param_2);
  if (iVar1 != 0) {
    uVar2 = GetWindowLongA(*(HWND *)(this + 0xc),-0x14);
    SetWindowLongA(*(HWND *)(this + 0xc),-0x14,uVar2 | 0x80);
  }
  return iVar1;
}


