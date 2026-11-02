/* Module: pncrt.dll
   Function: _getdcwd
   Address: 78018f80
   Source: Ghidra pseudocode (Stage 10 batch) */


char * __cdecl _getdcwd(int _Drive,char *_DstBuf,int _SizeInBytes)

{
  char *pcVar1;
  
                    /* 0x18f80  260  _getdcwd */
  _lock(0xc);
  pcVar1 = FUN_78018fc0(_Drive,_DstBuf,_SizeInBytes);
  _unlock(0xc);
  return pcVar1;
}


