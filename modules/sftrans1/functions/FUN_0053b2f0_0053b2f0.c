/* Module: sftrans1.dll
   Function: FUN_0053b2f0
   Address: 0053b2f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0053b2f0(undefined4 *param_1)

{
  LPCVOID pvVar1;
  HGLOBAL pvVar2;
  
  FUN_0053b350(param_1);
  pvVar1 = (LPCVOID)*param_1;
  if (pvVar1 != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle(pvVar1);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(pvVar1);
    GlobalFree(pvVar2);
  }
  pvVar1 = (LPCVOID)param_1[1];
  if (pvVar1 != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle(pvVar1);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(pvVar1);
    GlobalFree(pvVar2);
  }
  pvVar2 = GlobalHandle(param_1);
  GlobalUnlock(pvVar2);
  pvVar2 = GlobalHandle(param_1);
  GlobalFree(pvVar2);
  return;
}


