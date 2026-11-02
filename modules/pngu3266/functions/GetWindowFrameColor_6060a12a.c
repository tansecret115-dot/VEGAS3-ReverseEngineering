/* Module: pngu3266.dll
   Function: GetWindowFrameColor
   Address: 6060a12a
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static class CPNColor & __cdecl CPNDrawHelper::GetWindowFrameColor(void) */

CPNColor * __cdecl CPNDrawHelper::GetWindowFrameColor(void)

{
                    /* 0x1a12a  1419  ?GetWindowFrameColor@CPNDrawHelper@@SAAAVCPNColor@@XZ */
  return &m_windowFrameColor;
}


