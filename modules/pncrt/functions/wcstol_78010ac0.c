/* Module: pncrt.dll
   Function: wcstol
   Address: 78010ac0
   Source: Ghidra pseudocode (Stage 10 batch) */


long __cdecl wcstol(wchar_t *_Str,wchar_t **_EndPtr,int _Radix)

{
  uint uVar1;
  
                    /* 0x10ac0  762  wcstol */
  uVar1 = FUN_78010ae0((wint_t *)_Str,_EndPtr,_Radix,0);
  return uVar1;
}


