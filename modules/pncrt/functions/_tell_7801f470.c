/* Module: pncrt.dll
   Function: _tell
   Address: 7801f470
   Source: Ghidra pseudocode (Stage 10 batch) */


long __cdecl _tell(int _FileHandle)

{
  long lVar1;
  
                    /* 0x1f470  473  _tell */
  lVar1 = _lseek(_FileHandle,0,1);
  return lVar1;
}


