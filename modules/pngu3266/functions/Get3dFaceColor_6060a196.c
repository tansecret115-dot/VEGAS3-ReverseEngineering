/* Module: pngu3266.dll
   Function: Get3dFaceColor
   Address: 6060a196
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static class CPNColor & __cdecl CPNDrawHelper::Get3dFaceColor(void) */

CPNColor * __cdecl CPNDrawHelper::Get3dFaceColor(void)

{
                    /* 0x1a196  1068  ?Get3dFaceColor@CPNDrawHelper@@SAAAVCPNColor@@XZ */
  return &m_3dFaceColor;
}


