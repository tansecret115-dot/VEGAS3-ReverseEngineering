/* Module: encn3260.dll
   Function: FUN_664a7af0
   Address: 664a7af0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664a7af0(int param_1)

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
      FUN_664b0720(*(undefined4 **)(param_1 + 0x70));
      pvVar1 = *(void **)(param_1 + 0x70);
      if (pvVar1 != (void *)0x0) {
        FUN_664b0200((int)pvVar1);
        operator_delete(pvVar1);
        *(undefined4 *)(param_1 + 0x70) = 0;
      }
    }
    SetWindowLongA(*(HWND *)(param_1 + 0x13c),-4,*(LONG *)(param_1 + 0x220));
    FUN_664c3fe0(&DAT_664f0778,*(int **)(param_1 + 0x13c));
    DAT_664f07d0 = DAT_664f07d0 + -1;
    if (DAT_664f07d0 == 0) {
      UnhookWindowsHookEx(DAT_664f07d4);
      UnhookWindowsHookEx(DAT_664f07d8);
      DAT_664f07d4 = (HHOOK)0x0;
      DAT_664f07d8 = (HHOOK)0x0;
    }
    pvVar1 = (void *)(param_1 + -8);
    FUN_664aab10(pvVar1);
    *(undefined4 *)(param_1 + 0x13c) = 0;
    *(undefined4 *)(param_1 + 0x220) = 0;
    FUN_664a8490((int)pvVar1);
    piVar2 = *(int **)(param_1 + 0x138);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
      *(undefined4 *)(param_1 + 0x138) = 0;
    }
    if (*(void **)(param_1 + 100) != (void *)0x0) {
      FUN_664ab800(*(void **)(param_1 + 100),(int)pvVar1);
    }
    FUN_664aa9b0(pvVar1,(int *)0x0);
    FUN_664aa8f0(pvVar1,(undefined4 *)0x0);
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


