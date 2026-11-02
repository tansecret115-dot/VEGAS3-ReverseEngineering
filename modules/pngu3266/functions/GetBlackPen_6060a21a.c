/* Module: pngu3266.dll
   Function: GetBlackPen
   Address: 6060a21a
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static class CPNPen & __cdecl CPNDrawHelper::GetBlackPen(void) */

CPNPen * __cdecl CPNDrawHelper::GetBlackPen(void)

{
                    /* 0x1a21a  1099  ?GetBlackPen@CPNDrawHelper@@SAAAVCPNPen@@XZ */
  return &m_blackPen;
}


