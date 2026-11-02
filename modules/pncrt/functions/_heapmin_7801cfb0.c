/* Module: pncrt.dll
   Function: _heapmin
   Address: 7801cfb0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _heapmin(void)

{
  SIZE_T SVar1;
  DWORD DVar2;
  ulong *puVar3;
  int *piVar4;
  
                    /* 0x1cfb0  274  _heapmin */
  _lock(9);
  FUN_7800b220(0x20);
  _unlock(9);
  SVar1 = HeapCompact(DAT_78042734,0);
  if (SVar1 == 0) {
    DVar2 = GetLastError();
    if (DVar2 == 0x78) {
      puVar3 = __doserrno();
      *puVar3 = 0x78;
      piVar4 = _errno();
      *piVar4 = 0x28;
    }
    return -1;
  }
  return 0;
}


