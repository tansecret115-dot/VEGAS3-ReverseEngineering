/* Module: pncrt.dll
   Function: _getcwd
   Address: 78018f50
   Source: Ghidra pseudocode (Stage 10 batch) */


char * __cdecl _getcwd(char *_DstBuf,int _SizeInBytes)

{
  char *pcVar1;
  
                    /* 0x18f50  259  _getcwd */
  _lock(0xc);
  pcVar1 = FUN_78018fc0(0,_DstBuf,_SizeInBytes);
  _unlock(0xc);
  return pcVar1;
}


