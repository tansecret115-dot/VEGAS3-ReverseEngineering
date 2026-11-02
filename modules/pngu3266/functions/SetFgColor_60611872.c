/* Module: pngu3266.dll
   Function: SetFgColor
   Address: 60611872
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall XPNScrollingText::SetFgColor(class CPNColor const &) */

void __thiscall XPNScrollingText::SetFgColor(XPNScrollingText *this,CPNColor *param_1)

{
  int iVar1;
  
                    /* 0x21872  1902  ?SetFgColor@XPNScrollingText@@QAEXABVCPNColor@@@Z */
  iVar1 = CPNColor::operator!=(param_1,(CPNColor *)(this + 0xdf));
  if (iVar1 != 0) {
    CPNColor::operator=((CPNColor *)(this + 0xdf),param_1);
    (**(code **)(*(int *)this + 0x78))(0,1);
  }
  return;
}


