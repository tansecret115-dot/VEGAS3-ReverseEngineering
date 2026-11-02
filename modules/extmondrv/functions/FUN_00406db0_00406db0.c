/* Module: extmondrv.dll
   Function: FUN_00406db0
   Address: 00406db0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00406db0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *unaff_ESI;
  undefined4 *local_4;
  
  *param_1 = &PTR_FUN_0044e2cc;
  param_1[2] = &PTR_LAB_0044e2c0;
  param_1[4] = &PTR_LAB_0044e274;
  param_1[5] = &PTR_LAB_0044e238;
  local_4 = param_1;
  FUN_00407640((int)(param_1 + 4));
  piVar1 = (int *)param_1[0x26];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x26] = 0;
  }
  puVar2 = (undefined4 *)param_1[0x16];
  local_4 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)*puVar2)(puVar2,&DAT_00455dfc,&local_4);
    (**(code **)(*(int *)param_1[0x16] + 8))((int *)param_1[0x16]);
    piVar1 = (int *)param_1[0x15];
    param_1[0x16] = 0;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      param_1[0x15] = 0;
    }
  }
  piVar1 = (int *)param_1[0x11];
  if (piVar1 != (int *)0x0) {
    if (local_4 != (undefined4 *)0x0) {
      (**(code **)(*piVar1 + 0x10))(piVar1,local_4);
      (**(code **)(*unaff_ESI + 8))(unaff_ESI);
      local_4 = (undefined4 *)0x0;
    }
    (**(code **)(*(int *)param_1[0x11] + 8))((int *)param_1[0x11]);
    piVar1 = (int *)param_1[0x12];
    param_1[0x11] = 0;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      param_1[0x12] = 0;
    }
  }
  FUN_00408530((int)(param_1 + 5));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  InterlockedDecrement((LONG *)&DAT_0045b00c);
  FUN_00401540(param_1);
  return;
}


