/* Module: pncrt.dll
   Function: _heapchk
   Address: 7801cf30
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _heapchk(void)

{
  int iVar1;
  BOOL BVar2;
  DWORD DVar3;
  ulong *puVar4;
  int *piVar5;
  int iVar6;
  
                    /* 0x1cf30  273  _heapchk */
  iVar6 = -2;
  _lock(9);
  iVar1 = FUN_7800b840();
  if (iVar1 < 0) {
    iVar6 = -4;
  }
  _unlock(9);
  BVar2 = HeapValidate(DAT_78042734,0,(LPCVOID)0x0);
  if (BVar2 == 0) {
    DVar3 = GetLastError();
    if (DVar3 == 0x78) {
      puVar4 = __doserrno();
      *puVar4 = 0x78;
      piVar5 = _errno();
      *piVar5 = 0x28;
      return iVar6;
    }
    iVar6 = -4;
  }
  return iVar6;
}


