/* Module: pngu3266.dll
   Function: AddColor
   Address: 606113ae
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall XPNColorSelection::AddColor(class CPNColor &) */

void __thiscall XPNColorSelection::AddColor(XPNColorSelection *this,CPNColor *param_1)

{
  CPNColor *this_00;
  ulong uVar1;
  
                    /* 0x213ae  758  ?AddColor@XPNColorSelection@@QAEXAAVCPNColor@@@Z */
  this_00 = operator_new(0x1f);
  if (this_00 == (CPNColor *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = CPNColor::CPNColor(this_00,param_1);
  }
  if (uVar1 != 0) {
    XPNMenuButton::InsertMenuItemA
              ((XPNMenuButton *)this,0xffffffff,*(int *)(this + 0xe4) + 0x32,uVar1);
    FUN_6061a640(this + 0xe0,*(int *)(this + 0xe4),uVar1);
  }
  return;
}


