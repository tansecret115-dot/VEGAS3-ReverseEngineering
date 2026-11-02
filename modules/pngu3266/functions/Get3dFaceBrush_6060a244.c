/* Module: pngu3266.dll
   Function: Get3dFaceBrush
   Address: 6060a244
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static class CPNBrush & __cdecl CPNDrawHelper::Get3dFaceBrush(void) */

CPNBrush * __cdecl CPNDrawHelper::Get3dFaceBrush(void)

{
                    /* 0x1a244  1067  ?Get3dFaceBrush@CPNDrawHelper@@SAAAVCPNBrush@@XZ */
  return &m_3dFaceBrush;
}


