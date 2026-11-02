/* Module: pncrt.dll
   Function: _telli64
   Address: 7801f490
   Source: Ghidra pseudocode (Stage 10 batch) */


longlong __cdecl _telli64(int _FileHandle)

{
  longlong lVar1;
  int unaff_retaddr;
  
                    /* 0x1f490  474  _telli64 */
  lVar1 = _lseeki64(_FileHandle,0x100000000,unaff_retaddr);
  return lVar1;
}


