/* Module: wmfplug2.dll
   Function: FUN_0041e8e0
   Address: 0041e8e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0041e8e0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *pMem;
  HGLOBAL pvVar2;
  
  piVar1 = (int *)param_1[0x85];
  *param_1 = &PTR_LAB_0047cff8;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  param_1[0x85] = 0;
  if (param_1[0x89] != 0) {
    FUN_004068f0(param_1[0x89]);
    pMem = (undefined4 *)param_1[0x89];
    if (pMem != (undefined4 *)0x0) {
      FUN_00406850(pMem);
      pvVar2 = GlobalHandle(pMem);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(pMem);
      GlobalFree(pvVar2);
    }
  }
  piVar1 = (int *)param_1[0x85];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  param_1[0x85] = 0;
  return;
}


