/* Module: wmfplug2.dll
   Function: FUN_0040cc70
   Address: 0040cc70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040cc70(void *param_1)

{
  int *piVar1;
  HGLOBAL pvVar2;
  
  if (*(int **)((int)param_1 + 0x228) != (int *)0x0) {
    FUN_0040cc20(param_1,*(int **)((int)param_1 + 0x228));
  }
  piVar1 = *(int **)((int)param_1 + 0x238);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)((int)param_1 + 0x238) = 0;
  }
  if (*(LPCVOID *)((int)param_1 + 0x230) != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle(*(LPCVOID *)((int)param_1 + 0x230));
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(*(LPCVOID *)((int)param_1 + 0x230));
    GlobalFree(pvVar2);
    *(undefined4 *)((int)param_1 + 0x230) = 0;
    *(undefined4 *)((int)param_1 + 0x234) = 0;
    *(undefined4 *)((int)param_1 + 0x218) = 0;
    return 0;
  }
  *(undefined4 *)((int)param_1 + 0x218) = 0;
  return 0;
}


