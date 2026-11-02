/* Module: pngu3266.dll
   Function: Get3dShadowColor
   Address: 6060a19c
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static class CPNColor & __cdecl CPNDrawHelper::Get3dShadowColor(void) */

CPNColor * __cdecl CPNDrawHelper::Get3dShadowColor(void)

{
                    /* 0x1a19c  1075  ?Get3dShadowColor@CPNDrawHelper@@SAAAVCPNColor@@XZ */
  return &m_3dShadowColor;
}


