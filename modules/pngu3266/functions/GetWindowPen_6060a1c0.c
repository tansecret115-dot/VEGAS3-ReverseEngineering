/* Module: pngu3266.dll
   Function: GetWindowPen
   Address: 6060a1c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static class CPNPen & __cdecl CPNDrawHelper::GetWindowPen(void) */

CPNPen * __cdecl CPNDrawHelper::GetWindowPen(void)

{
                    /* 0x1a1c0  1421  ?GetWindowPen@CPNDrawHelper@@SAAAVCPNPen@@XZ */
  return &m_windowPen;
}


