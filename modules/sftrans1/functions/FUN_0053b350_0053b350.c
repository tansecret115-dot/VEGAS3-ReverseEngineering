/* Module: sftrans1.dll
   Function: FUN_0053b350
   Address: 0053b350
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0053b350(int *param_1)

{
  LPCVOID pvVar1;
  undefined4 *puVar2;
  HGLOBAL pvVar3;
  
  if (((undefined4 *)*param_1 != (undefined4 *)0x0) &&
     (pvVar1 = *(LPCVOID *)*param_1, pvVar1 != (LPCVOID)0x0)) {
    pvVar3 = GlobalHandle(pvVar1);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(pvVar1);
    GlobalFree(pvVar3);
    *(undefined4 *)*param_1 = 0;
  }
  puVar2 = (undefined4 *)param_1[1];
  if (puVar2 != (undefined4 *)0x0) {
    pvVar1 = (LPCVOID)*puVar2;
    if (pvVar1 != (LPCVOID)0x0) {
      pvVar3 = GlobalHandle(pvVar1);
      GlobalUnlock(pvVar3);
      pvVar3 = GlobalHandle(pvVar1);
      GlobalFree(pvVar3);
      *(undefined4 *)param_1[1] = 0;
      return;
    }
    pvVar1 = (LPCVOID)puVar2[1];
    if (pvVar1 != (LPCVOID)0x0) {
      pvVar3 = GlobalHandle(pvVar1);
      GlobalUnlock(pvVar3);
      pvVar3 = GlobalHandle(pvVar1);
      GlobalFree(pvVar3);
      *(undefined4 *)(param_1[1] + 4) = 0;
    }
  }
  return;
}


