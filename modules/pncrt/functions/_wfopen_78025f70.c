/* Module: pncrt.dll
   Function: _wfopen
   Address: 78025f70
   Source: Ghidra pseudocode (Stage 10 batch) */


FILE * __cdecl _wfopen(wchar_t *_Filename,wchar_t *_Mode)

{
  FILE *pFVar1;
  
                    /* 0x25f70  525  _wfopen */
  pFVar1 = _wfsopen(_Filename,_Mode,0x40);
  return pFVar1;
}


