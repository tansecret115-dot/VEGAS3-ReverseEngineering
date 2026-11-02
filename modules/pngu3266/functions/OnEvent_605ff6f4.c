/* Module: pngu3266.dll
   Function: OnEvent
   Address: 605ff6f4
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNPropertySheet::OnEvent(class CPNEvent &) */

int __thiscall CPNPropertySheet::OnEvent(CPNPropertySheet *this,CPNEvent *param_1)

{
  int iVar1;
  
                    /* 0xf6f4  1610  ?OnEvent@CPNPropertySheet@@UAEHAAVCPNEvent@@@Z */
  iVar1 = 0;
  if (*(int *)(param_1 + 8) == 2) {
    if (*(int *)(param_1 + 0xc) == 0xb1) {
      if (*(int *)(this + 200) != 0) goto LAB_605ff76b;
      (**(code **)(*(int *)this + 300))(2);
      iVar1 = 1;
    }
    else if (*(int *)(param_1 + 0xc) == 0xb2) {
      TermStdButtons(this);
    }
  }
  else if (*(int *)(param_1 + 8) != 0x10) goto LAB_605ff76b;
  if (((*(int *)(this + 200) == 0) && (*(int *)(param_1 + 0x24) == 0x112)) &&
     ((*(uint *)(param_1 + 0x1c) & 0xfff0) == 0xf060)) {
    (**(code **)(*(int *)this + 300))(2);
    iVar1 = 1;
  }
LAB_605ff76b:
  if (iVar1 == 0) {
    iVar1 = XPNDialog::OnEvent((XPNDialog *)this,param_1);
  }
  return iVar1;
}


