/* Module: pncrt.dll
   Function: strftime
   Address: 78014f90
   Source: Ghidra pseudocode (Stage 10 batch) */


size_t __cdecl strftime(char *_Buf,size_t _SizeInBytes,char *_Format,tm *_Tm)

{
  size_t sVar1;
  
                    /* 0x14f90  711  strftime */
  sVar1 = _Strftime(_Buf,_SizeInBytes,_Format,_Tm,(void *)0x0);
  return sVar1;
}


