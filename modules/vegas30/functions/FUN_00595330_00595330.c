/* Module: vegas30.exe
   Function: FUN_00595330
   Address: 00595330
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00595330(undefined4 *param_1)

{
  undefined4 *pMem;
  DWORD DVar1;
  HGLOBAL pvVar2;
  undefined4 *puVar3;
  int iVar4;
  
  pMem = (undefined4 *)*param_1;
  iVar4 = 0x3a;
  puVar3 = pMem;
  do {
    DVar1 = GetCurrentThreadId();
    _SfList_SetThreadOwner_8(*puVar3,DVar1);
    _SfList_Destroy_4(*puVar3);
    puVar3 = puVar3 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  pvVar2 = GlobalHandle(pMem);
  GlobalUnlock(pvVar2);
  pvVar2 = GlobalHandle(pMem);
  GlobalFree(pvVar2);
  *param_1 = 0;
  return;
}


