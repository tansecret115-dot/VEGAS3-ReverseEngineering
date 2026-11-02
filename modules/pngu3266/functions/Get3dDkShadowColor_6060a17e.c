/* Module: pngu3266.dll
   Function: Get3dDkShadowColor
   Address: 6060a17e
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static class CPNColor & __cdecl CPNDrawHelper::Get3dDkShadowColor(void) */

CPNColor * __cdecl CPNDrawHelper::Get3dDkShadowColor(void)

{
                    /* 0x1a17e  1065  ?Get3dDkShadowColor@CPNDrawHelper@@SAAAVCPNColor@@XZ */
  return &m_3dDkShadowColor;
}


