/* Module: pncrt.dll
   Function: iswctype
   Address: 78010ce0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl iswctype(wint_t _C,wctype_t _Type)

{
  BOOL BVar1;
  undefined2 in_stack_00000006;
  undefined2 in_stack_0000000a;
  uint local_4;
  
                    /* 0x10ce0  649  iswctype */
  if (_C == 0xffff) {
    return 0;
  }
  if (_C < 0x100) {
    local_4 = (uint)*(ushort *)(_pwctype + (uint)_C * 2);
  }
  else {
    if (DAT_78042438 == 0) {
      return 0;
    }
    BVar1 = FUN_7800d970(1,(LPCWSTR)&_C,1,(LPWORD)&local_4,0,0);
    if (BVar1 == 0) {
      return 0;
    }
  }
  return local_4 & 0xffff & __Type & 0xffff;
}


