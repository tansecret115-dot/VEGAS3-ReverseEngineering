/* Module: pngu3266.dll
   Function: GetColor
   Address: 605f19c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CPNColor & __thiscall XPNBrush::GetColor(void) */

CPNColor * __thiscall XPNBrush::GetColor(XPNBrush *this)

{
                    /* 0x19c0  1134  ?GetColor@XPNBrush@@QAEAAVCPNColor@@XZ */
  return (CPNColor *)(this + 0x10);
}


