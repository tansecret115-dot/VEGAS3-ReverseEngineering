/* Module: pngu3266.dll
   Function: GetBtnTextPen
   Address: 6060a1cc
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static class CPNPen & __cdecl CPNDrawHelper::GetBtnTextPen(void) */

CPNPen * __cdecl CPNDrawHelper::GetBtnTextPen(void)

{
                    /* 0x1a1cc  1115  ?GetBtnTextPen@CPNDrawHelper@@SAAAVCPNPen@@XZ */
  return &m_btnTextPen;
}


