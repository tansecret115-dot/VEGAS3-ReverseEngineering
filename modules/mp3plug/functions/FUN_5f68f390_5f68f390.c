/* Module: mp3plug.dll
   Function: FUN_5f68f390
   Address: 5f68f390
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f68f390(void *param_1)

{
  int *piVar1;
  HGLOBAL pvVar2;
  
  if (*(int **)((int)param_1 + 0x11c) != (int *)0x0) {
    FUN_5f68f340(param_1,*(int **)((int)param_1 + 0x11c));
  }
  piVar1 = *(int **)((int)param_1 + 0x128);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)((int)param_1 + 0x128) = 0;
  }
  if (*(LPCVOID *)((int)param_1 + 0x120) != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle(*(LPCVOID *)((int)param_1 + 0x120));
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(*(LPCVOID *)((int)param_1 + 0x120));
    GlobalFree(pvVar2);
    *(undefined4 *)((int)param_1 + 0x120) = 0;
    *(undefined4 *)((int)param_1 + 0x124) = 0;
    *(undefined4 *)((int)param_1 + 0x110) = 0;
    return 0;
  }
  *(undefined4 *)((int)param_1 + 0x110) = 0;
  return 0;
}


