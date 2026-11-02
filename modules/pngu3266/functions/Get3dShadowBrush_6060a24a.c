/* Module: pngu3266.dll
   Function: Get3dShadowBrush
   Address: 6060a24a
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static class CPNBrush & __cdecl CPNDrawHelper::Get3dShadowBrush(void) */

CPNBrush * __cdecl CPNDrawHelper::Get3dShadowBrush(void)

{
                    /* 0x1a24a  1074  ?Get3dShadowBrush@CPNDrawHelper@@SAAAVCPNBrush@@XZ */
  return &m_3dShadowBrush;
}


