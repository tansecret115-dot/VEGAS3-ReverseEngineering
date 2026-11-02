/* Module: pngu3266.dll
   Function: GetCurrentColor
   Address: 606016ad
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CPNColor * __thiscall XPNColorSelection::GetCurrentColor(void) */

CPNColor * __thiscall XPNColorSelection::GetCurrentColor(XPNColorSelection *this)

{
                    /* 0x116ad  1164  ?GetCurrentColor@XPNColorSelection@@QAEPAVCPNColor@@XZ */
  return *(CPNColor **)(*(int *)(this + 0xe0) + *(int *)(this + 0xd8) * 4);
}


