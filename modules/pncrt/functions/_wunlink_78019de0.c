/* Module: pncrt.dll
   Function: _wunlink
   Address: 78019de0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _wunlink(wchar_t *_Filename)

{
  int iVar1;
  
                    /* 0x19de0  569  _wunlink */
  iVar1 = _wremove(_Filename);
  return iVar1;
}


