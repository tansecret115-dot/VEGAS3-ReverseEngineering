/* Module: pncrt.dll
   Function: atoi
   Address: 78016350
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl atoi(char *_Str)

{
  long lVar1;
  
                    /* 0x16350  583  atoi */
  lVar1 = atol(_Str);
  return lVar1;
}


