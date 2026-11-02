/* Module: pngu3266.dll
   Function: GetWindowTextPen
   Address: 6060a1d8
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static class CPNPen & __cdecl CPNDrawHelper::GetWindowTextPen(void) */

CPNPen * __cdecl CPNDrawHelper::GetWindowTextPen(void)

{
                    /* 0x1a1d8  1426  ?GetWindowTextPen@CPNDrawHelper@@SAAAVCPNPen@@XZ */
  return &m_windowTextPen;
}


