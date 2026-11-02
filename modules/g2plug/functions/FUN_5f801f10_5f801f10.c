/* Module: g2plug.dll
   Function: FUN_5f801f10
   Address: 5f801f10
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f801f10(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *pMem;
  HGLOBAL pvVar2;
  
  piVar1 = (int *)param_1[0x85];
  *param_1 = &PTR_LAB_5f86a958;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  param_1[0x85] = 0;
  if (param_1[0x89] != 0) {
    FUN_5f8025d0(param_1[0x89]);
    pMem = (undefined4 *)param_1[0x89];
    if (pMem != (undefined4 *)0x0) {
      FUN_5f802530(pMem);
      pvVar2 = GlobalHandle(pMem);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(pMem);
      GlobalFree(pvVar2);
    }
  }
  return;
}


