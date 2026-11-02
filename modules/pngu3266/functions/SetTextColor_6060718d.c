/* Module: pngu3266.dll
   Function: SetTextColor
   Address: 6060718d
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall XPNCustomText::SetTextColor(class CPNColor const &) */

void __thiscall XPNCustomText::SetTextColor(XPNCustomText *this,CPNColor *param_1)

{
                    /* 0x1718d  2022  ?SetTextColor@XPNCustomText@@QAEXABVCPNColor@@@Z */
  CPNColor::operator=((CPNColor *)(this + 0xd0),param_1);
  (**(code **)(*(int *)this + 0x78))(0,1);
  return;
}


