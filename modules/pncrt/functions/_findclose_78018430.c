/* Module: pncrt.dll
   Function: _findclose
   Address: 78018430
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _findclose(intptr_t _FindHandle)

{
  BOOL BVar1;
  int *piVar2;
  
                    /* 0x18430  233  _findclose */
  BVar1 = FindClose((HANDLE)_FindHandle);
  if (BVar1 == 0) {
    piVar2 = _errno();
    *piVar2 = 0x16;
    return -1;
  }
  return 0;
}


