/* Module: sfxpfx2.dll
   Function: VerQueryValueA
   Address: 5c8a5b4c
   Source: Ghidra pseudocode (Stage 10 batch) */


BOOL VerQueryValueA(LPCVOID pBlock,LPCSTR lpSubBlock,LPVOID *lplpBuffer,PUINT puLen)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5c8a5b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = VerQueryValueA(pBlock,lpSubBlock,lplpBuffer,puLen);
  return BVar1;
}


