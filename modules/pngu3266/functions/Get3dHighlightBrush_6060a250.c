/* Module: pngu3266.dll
   Function: Get3dHighlightBrush
   Address: 6060a250
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static class CPNBrush & __cdecl CPNDrawHelper::Get3dHighlightBrush(void) */

CPNBrush * __cdecl CPNDrawHelper::Get3dHighlightBrush(void)

{
                    /* 0x1a250  1070  ?Get3dHighlightBrush@CPNDrawHelper@@SAAAVCPNBrush@@XZ */
  return &m_3dHighlightBrush;
}


