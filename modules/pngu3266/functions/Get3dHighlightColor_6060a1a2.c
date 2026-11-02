/* Module: pngu3266.dll
   Function: Get3dHighlightColor
   Address: 6060a1a2
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static class CPNColor & __cdecl CPNDrawHelper::Get3dHighlightColor(void) */

CPNColor * __cdecl CPNDrawHelper::Get3dHighlightColor(void)

{
                    /* 0x1a1a2  1071  ?Get3dHighlightColor@CPNDrawHelper@@SAAAVCPNColor@@XZ */
  return &m_3dHighlightColor;
}


