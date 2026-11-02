/* Module: pngu3266.dll
   Function: Get3dHighlightPen
   Address: 6060a214
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static class CPNPen & __cdecl CPNDrawHelper::Get3dHighlightPen(void) */

CPNPen * __cdecl CPNDrawHelper::Get3dHighlightPen(void)

{
                    /* 0x1a214  1072  ?Get3dHighlightPen@CPNDrawHelper@@SAAAVCPNPen@@XZ */
  return &m_3dHighlightPen;
}


