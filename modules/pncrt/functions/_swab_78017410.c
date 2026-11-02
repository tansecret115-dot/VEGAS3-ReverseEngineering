/* Module: pncrt.dll
   Function: _swab
   Address: 78017410
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl _swab(char *_Buf1,char *_Buf2,int _SizeInBytes)

{
  char cVar1;
  uint uVar2;
  
                    /* 0x17410  470  _swab */
  if (1 < _SizeInBytes) {
    uVar2 = (uint)_SizeInBytes >> 1;
    do {
      cVar1 = *_Buf1;
      *_Buf2 = _Buf1[1];
      _Buf1 = _Buf1 + 2;
      _Buf2[1] = cVar1;
      _Buf2 = _Buf2 + 2;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}


