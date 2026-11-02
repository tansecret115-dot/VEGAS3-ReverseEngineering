/* Module: pngu3266.dll
   Function: SetBgColor
   Address: 6061183f
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall XPNScrollingText::SetBgColor(class CPNColor const &) */

void __thiscall XPNScrollingText::SetBgColor(XPNScrollingText *this,CPNColor *param_1)

{
  int iVar1;
  
                    /* 0x2183f  1832  ?SetBgColor@XPNScrollingText@@QAEXABVCPNColor@@@Z */
  iVar1 = CPNColor::operator!=(param_1,(CPNColor *)(this + 0xc0));
  if (iVar1 != 0) {
    CPNColor::operator=((CPNColor *)(this + 0xc0),param_1);
    (**(code **)(*(int *)this + 0x78))(0,1);
  }
  return;
}


