/* Module: vegas30k.dll
   Function: FUN_0103caa0
   Address: 0103caa0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0103caa0(undefined4 *param_1)

{
  int *piVar1;
  LPCVOID pMem;
  int iVar2;
  void *_Memory;
  HGLOBAL pvVar3;
  
  *param_1 = &PTR_LAB_011dcfbc;
  FUN_0103e6d0(param_1);
  FUN_0103fb40(param_1);
  piVar1 = (int *)param_1[0xe2];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)param_1[0xe4];
  param_1[0xe2] = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)param_1[0xe1];
  param_1[0xe4] = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  pMem = (LPCVOID)param_1[0xe0];
  param_1[0xe1] = 0;
  if (pMem != (LPCVOID)0x0) {
    FUN_01135b60();
    pvVar3 = GlobalHandle(pMem);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(pMem);
    GlobalFree(pvVar3);
  }
  iVar2 = param_1[0xdb];
  param_1[0xe0] = 0;
  if ((iVar2 != 0) && (iVar2 != param_1[0xda])) {
    FUN_01040210(iVar2);
  }
  param_1[0xdb] = 0;
  if (param_1[0xda] != 0) {
    FUN_01040210(param_1[0xda]);
  }
  _Memory = (void *)param_1[0xf1];
  param_1[0xda] = 0;
  while (_Memory != (void *)0x0) {
    param_1[0xf1] = *(undefined4 *)((int)_Memory + 0x20c);
    free(_Memory);
    _Memory = (void *)param_1[0xf1];
  }
  if ((void *)param_1[0xf2] != (void *)0x0) {
    free((void *)param_1[0xf2]);
  }
  piVar1 = (int *)param_1[0xf3];
  param_1[0xf2] = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  param_1[0xf3] = 0;
  CloseHandle((HANDLE)param_1[0x50]);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x51));
  return;
}


