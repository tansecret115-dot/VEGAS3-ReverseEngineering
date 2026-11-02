/* Module: sfpublish.dll
   Function: FUN_0040b6b0
   Address: 0040b6b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0040b6b0(undefined4 *param_1)

{
  int *piVar1;
  LPCVOID pMem;
  HGLOBAL pvVar2;
  
  piVar1 = (int *)param_1[0x14];
  *param_1 = &PTR_LAB_00435d80;
  param_1[7] = &PTR_LAB_00435d60;
  param_1[0x12] = &PTR_LAB_00435d58;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x14] = 0;
  }
  pMem = (LPCVOID)param_1[0x16];
  if (pMem != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle(pMem);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(pMem);
    GlobalFree(pvVar2);
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    return;
  }
  param_1[0x17] = 0;
  return;
}


