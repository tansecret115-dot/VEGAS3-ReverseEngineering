/* Module: rmme3260.dll
   Function: FUN_6623d690
   Address: 6623d690
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6623d690(int param_1)

{
  void *pvVar1;
  int *piVar2;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if ((*(int *)(param_1 + 0x13c) != 0) && (*(int *)(param_1 + 0x220) != 0)) {
    EnterCriticalSection((LPCRITICAL_SECTION)(*(int *)(param_1 + 100) + 0xb4));
    if ((*(int *)(param_1 + 0x58) != 0) && (*(int *)(param_1 + 0x1d0) != 0)) {
      local_18 = *(undefined4 *)(param_1 + 0x13c);
      *(undefined4 *)(param_1 + 0x1d0) = 0;
      local_1c = 0x4002;
      local_14 = 0;
      local_10 = 0;
      local_c = 0;
      local_8 = 0;
      (**(code **)(**(int **)(param_1 + 0x58) + 0x14))(*(int **)(param_1 + 0x58),&local_1c);
    }
    if (*(undefined4 **)(param_1 + 0x70) != (undefined4 *)0x0) {
      FUN_66245b80(*(undefined4 **)(param_1 + 0x70));
      pvVar1 = *(void **)(param_1 + 0x70);
      if (pvVar1 != (void *)0x0) {
        FUN_66245670((int)pvVar1);
        operator_delete(pvVar1);
        *(undefined4 *)(param_1 + 0x70) = 0;
      }
    }
    SetWindowLongA(*(HWND *)(param_1 + 0x13c),-4,*(LONG *)(param_1 + 0x220));
    FUN_66251160(&DAT_6627cf80,*(int **)(param_1 + 0x13c));
    DAT_6627cfd8 = DAT_6627cfd8 + -1;
    if (DAT_6627cfd8 == 0) {
      UnhookWindowsHookEx(DAT_6627cfdc);
      UnhookWindowsHookEx(DAT_6627cfe0);
      DAT_6627cfdc = (HHOOK)0x0;
      DAT_6627cfe0 = (HHOOK)0x0;
    }
    pvVar1 = (void *)(param_1 + -8);
    FUN_66240780(pvVar1);
    *(undefined4 *)(param_1 + 0x13c) = 0;
    *(undefined4 *)(param_1 + 0x220) = 0;
    FUN_6623e030((int)pvVar1);
    piVar2 = *(int **)(param_1 + 0x138);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
      *(undefined4 *)(param_1 + 0x138) = 0;
    }
    if (*(void **)(param_1 + 100) != (void *)0x0) {
      FUN_66241470(*(void **)(param_1 + 100),(int)pvVar1);
    }
    FUN_66240620(pvVar1,(int *)0x0);
    FUN_66240560(pvVar1,(undefined4 *)0x0);
    if ((*(void **)(param_1 + 100) == pvVar1) && (*(int *)(param_1 + 0x164) != 0)) {
      (**(code **)(**(int **)(param_1 + 0x168) + 0x14))
                (*(int **)(param_1 + 0x168),*(int *)(param_1 + 0x164));
      *(undefined4 *)(param_1 + 0x164) = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)(param_1 + 100) + 0xb4));
    return 0;
  }
  return 0x80040009;
}


