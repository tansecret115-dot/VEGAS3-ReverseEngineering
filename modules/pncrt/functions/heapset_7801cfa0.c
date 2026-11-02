/* Module: pncrt.dll
   Function: heapset
   Address: 7801cfa0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* heapset */

undefined4 __cdecl heapset(void)

{
  int iVar1;
  BOOL BVar2;
  DWORD DVar3;
  ulong *puVar4;
  int *piVar5;
  undefined4 uVar6;
  
  uVar6 = 0xfffffffe;
  _lock(9);
  iVar1 = FUN_7800b840();
  if (iVar1 < 0) {
    uVar6 = 0xfffffffc;
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
      return uVar6;
    }
    uVar6 = 0xfffffffc;
  }
  return uVar6;
}


