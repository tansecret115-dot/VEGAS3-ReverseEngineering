/* Module: pngu3266.dll
   Function: GetColor
   Address: 6060d9b4
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual class CPNColor & __thiscall XPNPen::GetColor(void) */

CPNColor * __thiscall XPNPen::GetColor(XPNPen *this)

{
                    /* 0x1d9b4  1135  ?GetColor@XPNPen@@UAEAAVCPNColor@@XZ */
  return (CPNColor *)(this + 0x14);
}


