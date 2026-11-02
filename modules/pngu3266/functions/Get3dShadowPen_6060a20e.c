/* Module: pngu3266.dll
   Function: Get3dShadowPen
   Address: 6060a20e
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static class CPNPen & __cdecl CPNDrawHelper::Get3dShadowPen(void) */

CPNPen * __cdecl CPNDrawHelper::Get3dShadowPen(void)

{
                    /* 0x1a20e  1076  ?Get3dShadowPen@CPNDrawHelper@@SAAAVCPNPen@@XZ */
  return &m_3dShadowPen;
}


