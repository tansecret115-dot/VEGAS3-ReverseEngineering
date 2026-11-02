/* Module: pncrt.dll
   Function: wcstoul
   Address: 78010cc0
   Source: Ghidra pseudocode (Stage 10 batch) */


ulong __cdecl wcstoul(wchar_t *_Str,wchar_t **_EndPtr,int _Radix)

{
  uint uVar1;
  
                    /* 0x10cc0  764  wcstoul */
  uVar1 = FUN_78010ae0((wint_t *)_Str,_EndPtr,_Radix,1);
  return uVar1;
}


