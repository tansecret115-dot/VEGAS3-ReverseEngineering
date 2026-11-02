/* Module: sfpagepeel.dll
   Function: FUN_0040a5a0
   Address: 0040a5a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0040a5a0(int *param_1)

{
  LPCVOID pMem;
  int *piVar1;
  HGLOBAL pvVar2;
  
  if (param_1[0x15] != 0) {
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


