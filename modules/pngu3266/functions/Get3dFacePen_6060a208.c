/* Module: pngu3266.dll
   Function: Get3dFacePen
   Address: 6060a208
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static class CPNPen & __cdecl CPNDrawHelper::Get3dFacePen(void) */

CPNPen * __cdecl CPNDrawHelper::Get3dFacePen(void)

{
                    /* 0x1a208  1069  ?Get3dFacePen@CPNDrawHelper@@SAAAVCPNPen@@XZ */
  return &m_3dFacePen;
}


