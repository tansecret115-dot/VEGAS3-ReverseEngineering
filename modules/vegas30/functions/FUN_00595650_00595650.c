/* Module: vegas30.exe
   Function: FUN_00595650
   Address: 00595650
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00595650(undefined4 *param_1)

{
  int *pMem;
  HGLOBAL pvVar1;
  int iVar2;
  undefined4 *puVar3;
  DWORD local_24;
  undefined4 local_20 [8];
  
  pMem = (int *)*param_1;
  if (*pMem != 0) {
    if (pMem[0x15] != 0) {
      FUN_00595d10(pMem);
    }
    puVar3 = local_20;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    local_20[2] = 3;
    _SfQueueInsert_8(pMem + 3,local_20);
    WaitForSingleObject((HANDLE)*pMem,20000);
    GetExitCodeThread((HANDLE)*pMem,&local_24);
    if (local_24 == 0x103) {
      TerminateThread((HANDLE)*pMem,0);
      WaitForSingleObject((HANDLE)*pMem,0xffffffff);
    }
    CloseHandle((HANDLE)*pMem);
    *pMem = 0;
  }
  _SfQueueDelete_4(pMem + 3);
  _SfQueueDelete_4(pMem + 0xc);
  CloseHandle((HANDLE)pMem[0x27]);
  FUN_00595a50(pMem);
  FUN_00595830(pMem);
  if ((LPCVOID)pMem[0x29] != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle((LPCVOID)pMem[0x29]);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle((LPCVOID)pMem[0x29]);
    GlobalFree(pvVar1);
  }
  pvVar1 = GlobalHandle(pMem);
  GlobalUnlock(pvVar1);
  pvVar1 = GlobalHandle(pMem);
  GlobalFree(pvVar1);
  *param_1 = 0;
  return;
}


