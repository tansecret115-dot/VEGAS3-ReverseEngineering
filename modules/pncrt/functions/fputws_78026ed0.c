/* Module: pncrt.dll
   Function: fputws
   Address: 78026ed0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl fputws(wchar_t *_Str,FILE *_File)

{
  wchar_t wVar1;
  size_t sVar2;
  size_t sVar3;
  int iVar4;
  
                    /* 0x26ed0  614  fputws */
  iVar4 = 0;
  sVar2 = wcslen(_Str);
  FUN_780094a0((uint)_File);
  sVar3 = sVar2;
  if (sVar2 != 0) {
    while( true ) {
      sVar3 = sVar3 - 1;
      wVar1 = *_Str;
      _Str = _Str + 1;
      sVar2 = FUN_78026d40(CONCAT22((short)(sVar2 >> 0x10),wVar1),_File);
      if ((short)sVar2 == -1) break;
      if (sVar3 == 0) {
        FUN_78009510((uint)_File);
        return 0;
      }
    }
    iVar4 = -1;
  }
  FUN_78009510((uint)_File);
  return iVar4;
}


