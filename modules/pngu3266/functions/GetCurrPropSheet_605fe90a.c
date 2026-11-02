/* Module: pngu3266.dll
   Function: GetCurrPropSheet
   Address: 605fe90a
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static class CPNPropertySheet * __cdecl CPNPropertySheet::GetCurrPropSheet(void) */

CPNPropertySheet * __cdecl CPNPropertySheet::GetCurrPropSheet(void)

{
                    /* 0xe90a  1161  ?GetCurrPropSheet@CPNPropertySheet@@SAPAV1@XZ */
  return zm_pCurrPropSheet;
}


