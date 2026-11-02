/* Module: vegas30.exe
   Function: FUN_00551a10
   Address: 00551a10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00551a10(uint param_1)

{
  int *piVar1;
  LPCVOID pvVar2;
  LPCVOID pMem;
  int iVar3;
  HGLOBAL pvVar4;
  
  iVar3 = param_1;
  FUN_00551ad0(param_1);
  if ((*(char *)(param_1 + 0xa4) != '\0') && (*(int *)(param_1 + 0xb0) != 0)) {
    piVar1 = (int *)(param_1 + 0xac);
    param_1 = 0;
    if (*piVar1 != 0) {
      do {
        pMem = *(LPCVOID *)(*(int *)(iVar3 + 0xb0) + param_1 * 4);
        while (pMem != (LPCVOID)0x0) {
          pvVar2 = *(LPCVOID *)((int)pMem + 8);
          pvVar4 = GlobalHandle(pMem);
          GlobalUnlock(pvVar4);
          pvVar4 = GlobalHandle(pMem);
          GlobalFree(pvVar4);
          pMem = pvVar2;
        }
        param_1 = param_1 + 1;
      } while (param_1 < *(uint *)(iVar3 + 0xac));
    }
    pvVar4 = GlobalHandle(*(LPCVOID *)(iVar3 + 0xb0));
    GlobalUnlock(pvVar4);
    pvVar4 = GlobalHandle(*(LPCVOID *)(iVar3 + 0xb0));
    GlobalFree(pvVar4);
  }
  *(undefined4 *)(iVar3 + 0xb0) = 0;
  *(undefined4 *)(iVar3 + 0xa8) = 0;
  *(undefined4 *)(iVar3 + 0xac) = 0;
  *(undefined1 *)(iVar3 + 0xa4) = 0;
  return;
}


