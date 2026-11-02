/* Module: pngu3266.dll
   Function: GetWhitePen
   Address: 6060a220
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static class CPNPen & __cdecl CPNDrawHelper::GetWhitePen(void) */

CPNPen * __cdecl CPNDrawHelper::GetWhitePen(void)

{
                    /* 0x1a220  1415  ?GetWhitePen@CPNDrawHelper@@SAAAVCPNPen@@XZ */
  return &m_whitePen;
}


