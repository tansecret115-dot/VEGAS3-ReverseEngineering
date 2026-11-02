/* Module: pncrt.dll
   Function: free
   Address: 7800ac40
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl free(void *_Memory)

{
  void *lpMem;
  byte *pbVar1;
  int local_4;
  
                    /* 0xac40  616  free */
  lpMem = _Memory;
  if (_Memory != (void *)0x0) {
    if (DAT_780421d4 != (code *)0x0) {
      (*DAT_780421d4)(_Memory);
      return;
    }
    _lock(9);
    pbVar1 = (byte *)FUN_7800b2f0(lpMem,&local_4,(uint *)&_Memory);
    if (pbVar1 != (byte *)0x0) {
      FUN_7800b350(local_4,(int)_Memory,pbVar1);
      _unlock(9);
      return;
    }
    _unlock(9);
    HeapFree(DAT_78042734,0,lpMem);
  }
  return;
}


