/* Module: pngu3266.dll
   Function: GetBtnFacePen
   Address: 6060a1fc
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static class CPNPen & __cdecl CPNDrawHelper::GetBtnFacePen(void) */

CPNPen * __cdecl CPNDrawHelper::GetBtnFacePen(void)

{
                    /* 0x1a1fc  1108  ?GetBtnFacePen@CPNDrawHelper@@SAAAVCPNPen@@XZ */
  return &m_btnFacePen;
}


