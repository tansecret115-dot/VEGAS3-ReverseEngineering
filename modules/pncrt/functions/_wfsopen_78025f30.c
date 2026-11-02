/* Module: pncrt.dll
   Function: _wfsopen
   Address: 78025f30
   Source: Ghidra pseudocode (Stage 10 batch) */


FILE * __cdecl _wfsopen(wchar_t *_Filename,wchar_t *_Mode,int _ShFlag)

{
  undefined4 *puVar1;
  FILE *pFVar2;
  
                    /* 0x25f30  527  _wfsopen */
  puVar1 = FUN_780282f0();
  if (puVar1 == (undefined4 *)0x0) {
    return (FILE *)0x0;
  }
  pFVar2 = (FILE *)FUN_78028fb0(_Filename,_Mode,_ShFlag,puVar1);
  FUN_78009510((uint)puVar1);
  return pFVar2;
}


