/* Module: pngu3266.dll
   Function: Get3dLightColor
   Address: 6060a184
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static class CPNColor & __cdecl CPNDrawHelper::Get3dLightColor(void) */

CPNColor * __cdecl CPNDrawHelper::Get3dLightColor(void)

{
                    /* 0x1a184  1073  ?Get3dLightColor@CPNDrawHelper@@SAAAVCPNColor@@XZ */
  return &m_3dLightColor;
}


