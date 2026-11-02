/* Module: pngu3266.dll
   Function: operator=
   Address: 605fd269
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CPNImageButton & __thiscall CPNImageButton::operator=(class CPNImageButton const &)
    */

CPNImageButton * __thiscall CPNImageButton::operator=(CPNImageButton *this,CPNImageButton *param_1)

{
  CPNImageButton *pCVar1;
  int iVar2;
  
                    /* 0xd269  464  ??4CPNImageButton@@QAEAAV0@ABV0@@Z */
  XPNButton::operator=((XPNButton *)this,(XPNButton *)param_1);
  *(undefined4 *)(this + 0xfb) = *(undefined4 *)(param_1 + 0xfb);
  *(undefined4 *)(this + 0xff) = *(undefined4 *)(param_1 + 0xff);
  *(undefined4 *)(this + 0x103) = *(undefined4 *)(param_1 + 0x103);
  *(undefined4 *)(this + 0x107) = *(undefined4 *)(param_1 + 0x107);
  *(undefined4 *)(this + 0x10b) = *(undefined4 *)(param_1 + 0x10b);
  *(undefined4 *)(this + 0x10f) = *(undefined4 *)(param_1 + 0x10f);
  *(undefined4 *)(this + 0x113) = *(undefined4 *)(param_1 + 0x113);
  pCVar1 = this + 0x117;
  iVar2 = 4;
  do {
    *(undefined4 *)pCVar1 = *(undefined4 *)(pCVar1 + ((int)param_1 - (int)this));
    pCVar1 = pCVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return this;
}


