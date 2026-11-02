/* Module: pngu3266.dll
   Function: GetWindowFramePen
   Address: 6060a1e4
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static class CPNPen & __cdecl CPNDrawHelper::GetWindowFramePen(void) */

CPNPen * __cdecl CPNDrawHelper::GetWindowFramePen(void)

{
                    /* 0x1a1e4  1420  ?GetWindowFramePen@CPNDrawHelper@@SAAAVCPNPen@@XZ */
  return &m_windowFramePen;
}


