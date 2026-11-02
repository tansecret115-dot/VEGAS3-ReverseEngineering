/* Module: gifplug.dll
   Function: FUN_5f6c2710
   Address: 5f6c2710
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5f6c2710(uint param_1,int param_2)

{
  LPCVOID pMem;
  HGLOBAL pvVar1;
  HANDLE pvVar2;
  uint uVar3;
  
  pMem = *(LPCVOID *)(param_1 + 0x10);
  if (pMem != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(pMem);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(pMem);
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*(HANDLE *)(param_1 + 0x68) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 0x68));
  }
  pvVar2 = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,(LPCSTR)0x0);
  *(HANDLE *)(param_1 + 0x68) = pvVar2;
  if (param_2 != 0) {
    *(int *)(param_1 + 0xc) = param_2;
    uVar3 = FUN_5f6c2900(param_1,(uint *)(param_1 + 0xcc));
    return uVar3 & (-1 < (int)uVar3) - 1;
  }
  return 0x80070057;
}


