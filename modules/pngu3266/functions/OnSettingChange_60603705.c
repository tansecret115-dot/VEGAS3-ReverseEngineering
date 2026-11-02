/* Module: pngu3266.dll
   Function: OnSettingChange
   Address: 60603705
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNCustomFrame::OnSettingChange(class CPNEvent &) */

int __thiscall CPNCustomFrame::OnSettingChange(CPNCustomFrame *this,CPNEvent *param_1)

{
  int iVar1;
  
                    /* 0x13705  1696  ?OnSettingChange@CPNCustomFrame@@UAEHAAVCPNEvent@@@Z */
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 == 0x2a) {
    (**(code **)(*(int *)this + 0x40))();
    CPNCustomMenu::ResetDummyMenuItem(*(CPNCustomMenu **)(this + 0xc));
  }
  return (uint)(iVar1 == 0x2a);
}


