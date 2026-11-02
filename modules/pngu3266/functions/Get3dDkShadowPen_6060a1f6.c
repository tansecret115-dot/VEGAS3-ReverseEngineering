/* Module: pngu3266.dll
   Function: Get3dDkShadowPen
   Address: 6060a1f6
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static class CPNPen & __cdecl CPNDrawHelper::Get3dDkShadowPen(void) */

CPNPen * __cdecl CPNDrawHelper::Get3dDkShadowPen(void)

{
                    /* 0x1a1f6  1066  ?Get3dDkShadowPen@CPNDrawHelper@@SAAAVCPNPen@@XZ */
  return &m_3dDkShadowPen;
}


