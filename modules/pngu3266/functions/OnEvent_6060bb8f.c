/* Module: pngu3266.dll
   Function: OnEvent
   Address: 6060bb8f
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall XPNDialog::OnEvent(class CPNEvent &) */

int __thiscall XPNDialog::OnEvent(XPNDialog *this,CPNEvent *param_1)

{
  int iVar1;
  
                    /* 0x1bb8f  1619  ?OnEvent@XPNDialog@@UAEHAAVCPNEvent@@@Z */
  if ((*(int *)(param_1 + 8) == 2) && (*(int *)(param_1 + 0xc) == 0xb1)) {
    (**(code **)(*(int *)this + 300))(0);
    iVar1 = 1;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}


