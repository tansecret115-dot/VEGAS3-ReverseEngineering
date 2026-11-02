/* Module: pngu3266.dll
   Function: OnPrimaryButtonDown
   Address: 60610dba
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall XPNMenuButton::OnPrimaryButtonDown(class CPNxPoint &,unsigned
   short) */

void __thiscall
XPNMenuButton::OnPrimaryButtonDown(XPNMenuButton *this,CPNxPoint *param_1,ushort param_2)

{
                    /* 0x20dba  1690  ?OnPrimaryButtonDown@XPNMenuButton@@UAEXAAVCPNxPoint@@G@Z */
  SendClickAndShowEvents(this);
  (**(code **)(*(int *)this + 0x90))();
  (**(code **)(*(int *)this + 0x130))();
  return;
}


