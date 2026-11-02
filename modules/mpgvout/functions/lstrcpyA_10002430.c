/* Module: mpgvout.dll
   Function: lstrcpyA
   Address: 10002430
   Source: Ghidra pseudocode (Stage 10 batch) */


LPSTR lstrcpyA(LPSTR lpString1,LPCSTR lpString2)

{
  LPSTR pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10002430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = lstrcpyA(lpString1,lpString2);
  return pCVar1;
}


