/* Module: pncrt.dll
   Function: fopen
   Address: 78025030
   Source: Ghidra pseudocode (Stage 10 batch) */


FILE * __cdecl fopen(char *_Filename,char *_Mode)

{
  FILE *pFVar1;
  
                    /* 0x25030  609  fopen */
  pFVar1 = _fsopen(_Filename,_Mode,0x40);
  return pFVar1;
}


