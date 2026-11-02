/* Module: pngu3266.dll
   Function: GetGrayTextColor
   Address: 6060a166
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static class CPNColor & __cdecl CPNDrawHelper::GetGrayTextColor(void) */

CPNColor * __cdecl CPNDrawHelper::GetGrayTextColor(void)

{
                    /* 0x1a166  1203  ?GetGrayTextColor@CPNDrawHelper@@SAAAVCPNColor@@XZ */
  return &m_grayTextColor;
}


