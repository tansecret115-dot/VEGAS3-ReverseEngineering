/* Module: aviplug.dll
   Function: FUN_5f937330
   Address: 5f937330
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f937330(int *param_1)

{
  int *piVar1;
  HGLOBAL pvVar2;
  
  FUN_5f937210(param_1);
  piVar1 = (int *)param_1[0x60];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x60] = 0;
  }
  if ((LPCVOID)param_1[0x5e] != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle((LPCVOID)param_1[0x5e]);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle((LPCVOID)param_1[0x5e]);
    GlobalFree(pvVar2);
    param_1[0x5e] = 0;
    param_1[0x5f] = 0;
  }
  param_1[0x45] = 0;
  param_1[0x50] = -1;
  param_1[0x55] = 0;
  param_1[0x51] = -1;
  return 0;
}


