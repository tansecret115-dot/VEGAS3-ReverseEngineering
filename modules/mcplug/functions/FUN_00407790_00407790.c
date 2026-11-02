/* Module: mcplug.dll
   Function: FUN_00407790
   Address: 00407790
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00407790(void *param_1)

{
  int *piVar1;
  HGLOBAL pvVar2;
  
  if (*(int **)((int)param_1 + 0x118) != (int *)0x0) {
    FUN_00407740(param_1,*(int **)((int)param_1 + 0x118));
  }
  piVar1 = *(int **)((int)param_1 + 0x124);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)((int)param_1 + 0x124) = 0;
  }
  if (*(LPCVOID *)((int)param_1 + 0x11c) != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle(*(LPCVOID *)((int)param_1 + 0x11c));
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(*(LPCVOID *)((int)param_1 + 0x11c));
    GlobalFree(pvVar2);
    *(undefined4 *)((int)param_1 + 0x11c) = 0;
    *(undefined4 *)((int)param_1 + 0x120) = 0;
    *(undefined4 *)((int)param_1 + 0x10c) = 0;
    return 0;
  }
  *(undefined4 *)((int)param_1 + 0x10c) = 0;
  return 0;
}


