/* Module: pngu3266.dll
   Function: GetControlsFont
   Address: 6060a27a
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static class CPNFont & __cdecl CPNDrawHelper::GetControlsFont(void) */

CPNFont * __cdecl CPNDrawHelper::GetControlsFont(void)

{
                    /* 0x1a27a  1150  ?GetControlsFont@CPNDrawHelper@@SAAAVCPNFont@@XZ */
  return &m_controlsFont;
}


