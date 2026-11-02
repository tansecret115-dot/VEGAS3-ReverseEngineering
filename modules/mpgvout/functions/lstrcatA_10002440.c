/* Module: mpgvout.dll
   Function: lstrcatA
   Address: 10002440
   Source: Ghidra pseudocode (Stage 10 batch) */


LPSTR lstrcatA(LPSTR lpString1,LPCSTR lpString2)

{
  LPSTR pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10002440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = lstrcatA(lpString1,lpString2);
  return pCVar1;
}


