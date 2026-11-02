/* Module: pncrt.dll
   Function: _msize
   Address: 7801d200
   Source: Ghidra pseudocode (Stage 10 batch) */


size_t __cdecl _msize(void *_Memory)

{
  byte bVar1;
  byte *pbVar2;
  size_t sVar3;
  SIZE_T SVar4;
  uint local_8;
  undefined4 local_4;
  
                    /* 0x1d200  398  _msize */
  _lock(9);
  pbVar2 = (byte *)FUN_7800b2f0(_Memory,&local_4,&local_8);
  if (pbVar2 != (byte *)0x0) {
    bVar1 = *pbVar2;
    _unlock(9);
    return (uint)bVar1 << 4;
  }
  _unlock(9);
  if (DAT_780421e8 != (code *)0x0) {
    sVar3 = (*DAT_780421e8)();
    return sVar3;
  }
  SVar4 = HeapSize(DAT_78042734,0,_Memory);
  return SVar4;
}


