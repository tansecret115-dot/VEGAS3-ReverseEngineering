/* Module: encn3260.dll
   Function: FUN_664a5ab0
   Address: 664a5ab0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664a5ab0(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvVar3;
  int iVar4;
  int local_14;
  int *local_10;
  int local_c;
  int *local_8;
  
  *param_1 = (int)&PTR_FUN_664df118;
  param_1[1] = (int)&PTR_LAB_664df0e0;
  param_1[2] = (int)&PTR_LAB_664df0c0;
  param_1[3] = (int)&PTR_LAB_664df0a8;
  param_1[4] = (int)&PTR_LAB_664df098;
  param_1[5] = (int)&PTR_LAB_664df088;
  param_1[6] = (int)&PTR_LAB_664df068;
  param_1[7] = (int)&PTR_LAB_664df030;
  param_1[8] = (int)&PTR_LAB_664df020;
  param_1[9] = (int)&PTR_LAB_664df008;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2d));
  param_1[0x3a] = 1;
  if (*(int **)(param_1[0x1b] + 0x70) == param_1) {
    *(undefined4 *)(param_1[0x1b] + 0x70) = 0;
  }
  if ((HWND)param_1[0x7c] != (HWND)0x0) {
    DestroyWindow((HWND)param_1[0x7c]);
    FUN_664c3fe0(&DAT_664f0798,(int *)param_1[0x7c]);
    param_1[0x7c] = 0;
  }
  if ((HWND)param_1[0x7d] != (HWND)0x0) {
    DestroyWindow((HWND)param_1[0x7d]);
    FUN_664c3fe0(&DAT_664f0798,(int *)param_1[0x7d]);
    param_1[0x7d] = 0;
  }
  pvVar3 = DAT_664f07dc;
  DAT_664f07e0 = DAT_664f07e0 + -1;
  if ((DAT_664f07e0 == 0) && (DAT_664f07dc != (void *)0x0)) {
    FUN_664b09b0((int)DAT_664f07dc);
    operator_delete(pvVar3);
    DAT_664f07dc = (void *)0x0;
  }
  if (*(int **)(param_1[0x1b] + 0x168) == param_1) {
    *(undefined4 *)(param_1[0x1b] + 0x168) = 0;
  }
  if (param_1[0x5b] != 0) {
    (**(code **)(*(int *)param_1[0x5c] + 0x14))((int *)param_1[0x5c],param_1[0x5b]);
    param_1[0x5b] = 0;
  }
  piVar1 = (int *)param_1[0x20];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x20] = 0;
  }
  if (param_1[0xf] != 0) {
    piVar1 = param_1 + 0xc;
    do {
      local_14 = -(uint)(param_1[0xf] != 0);
      local_c = 0;
      local_8 = (int *)0x0;
      local_10 = piVar1;
      if (local_14 != 0) {
        FUN_664c4010(piVar1,&local_14,(int *)&local_8,&local_c);
      }
      FUN_664a6420((int)param_1,local_8);
    } while (param_1[0xf] != 0);
  }
  while( true ) {
    if (param_1 + 0x13 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = param_1[0x17];
    }
    if (iVar4 == 0) break;
    piVar1 = *(int **)(param_1[0x14] + 8);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    FUN_664ba9f0(param_1 + 0x13);
  }
  if ((void *)param_1[0x1b] != (void *)0x0) {
    FUN_664ab800((void *)param_1[0x1b],(int)param_1);
  }
  piVar1 = (int *)param_1[0x23];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x23] = 0;
  }
  piVar1 = (int *)param_1[0x5c];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x5c] = 0;
  }
  piVar1 = (int *)param_1[0x25];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x25] = 0;
  }
  piVar1 = (int *)param_1[0xb];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0xb] = 0;
  }
  piVar1 = (int *)param_1[0x1d];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x1d] = 0;
  }
  piVar1 = (int *)param_1[0x50];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x50] = 0;
  }
  puVar2 = (undefined4 *)param_1[0x22];
  if (puVar2 != (undefined4 *)0x0) {
    thunk_FUN_664ac7d0(puVar2);
    operator_delete(puVar2);
    param_1[0x22] = 0;
  }
  piVar1 = (int *)param_1[0x1b];
  if ((piVar1 != param_1) && (piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x1b] = 0;
  }
  if ((HGDIOBJ)param_1[0x4d] != (HGDIOBJ)0x0) {
    DeleteObject((HGDIOBJ)param_1[0x4d]);
    param_1[0x4d] = 0;
  }
  if ((HGDIOBJ)param_1[0x4e] != (HGDIOBJ)0x0) {
    DeleteObject((HGDIOBJ)param_1[0x4e]);
    param_1[0x4e] = 0;
  }
  FUN_664ba950(param_1 + 0x26);
  FUN_664ba950(param_1 + 0x13);
  FUN_664c3d50(param_1 + 0xc);
  return;
}


