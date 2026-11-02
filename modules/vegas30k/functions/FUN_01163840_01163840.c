/* Module: vegas30k.dll
   Function: FUN_01163840
   Address: 01163840
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_01163840(undefined4 *param_1)

{
  LPCVOID pMem;
  int *piVar1;
  void *_Memory;
  HGLOBAL pvVar2;
  uint uVar3;
  
  uVar3 = 0;
  *param_1 = &PTR_LAB_011e907c;
  if (param_1[0xc] != 0) {
    do {
      _Memory = (void *)FUN_01163ac0();
      free(_Memory);
      pMem = *(LPCVOID *)(param_1[10] + uVar3 * 4);
      if (pMem != (LPCVOID)0x0) {
        FUN_01163840();
        pvVar2 = GlobalHandle(pMem);
        GlobalUnlock(pvVar2);
        pvVar2 = GlobalHandle(pMem);
        GlobalFree(pvVar2);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)param_1[0xc]);
  }
  if ((void *)param_1[10] != (void *)0x0) {
    free((void *)param_1[10]);
  }
  if ((void *)param_1[0xb] != (void *)0x0) {
    free((void *)param_1[0xb]);
  }
  piVar1 = (int *)param_1[2];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  param_1[2] = 0;
  return;
}


