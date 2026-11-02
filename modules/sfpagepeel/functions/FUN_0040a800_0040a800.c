/* Module: sfpagepeel.dll
   Function: FUN_0040a800
   Address: 0040a800
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0040a800(int *param_1)

{
  LPCVOID pMem;
  int *piVar1;
  HGLOBAL pvVar2;
  
  if (param_1[0x15] != 0) {
    (**(code **)(*(int *)*param_1 + 0x38))((int *)*param_1,param_1 + 0x17);
    pMem = (LPCVOID)param_1[0x14];
    pvVar2 = GlobalHandle(pMem);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(pMem);
    GlobalFree(pvVar2);
  }
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}


