/* Module: encn3260.dll
   Function: FUN_664819f0
   Address: 664819f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664819f0(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)param_1[0xf];
  *param_1 = &PTR_FUN_664dc490;
  param_1[1] = &PTR_LAB_664dc480;
  param_1[2] = &PTR_LAB_664dc468;
  param_1[3] = &PTR_LAB_664dc458;
  param_1[4] = &PTR_LAB_664dc448;
  param_1[5] = &PTR_LAB_664dc3e0;
  param_1[6] = &PTR_LAB_664dc3d0;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    param_1[0xf] = 0;
  }
  piVar2 = (int *)param_1[0x10];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    param_1[0x10] = 0;
  }
  piVar2 = (int *)param_1[9];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x14))(piVar2);
    (**(code **)(*(int *)param_1[9] + 8))((int *)param_1[9]);
    param_1[9] = 0;
  }
  piVar2 = (int *)param_1[10];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    param_1[10] = 0;
  }
  piVar2 = (int *)param_1[0xb];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    param_1[0xb] = 0;
  }
  piVar2 = *(int **)((int)param_1 + 0x6a);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    *(undefined4 *)((int)param_1 + 0x6a) = 0;
  }
  if (param_1[0xe] != 0) {
    while( true ) {
      piVar2 = (int *)param_1[0xe];
      if (piVar2 == (int *)0x0) {
        iVar1 = 0;
      }
      else {
        iVar1 = piVar2[4];
      }
      if (iVar1 < 1) break;
      piVar2 = (int *)FUN_664ba9f0(piVar2);
      (**(code **)(*piVar2 + 8))(piVar2);
    }
    if ((undefined4 *)param_1[0xe] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0xe])(1);
    }
    param_1[0xe] = 0;
  }
  piVar2 = *(int **)((int)param_1 + 0x5e);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    *(undefined4 *)((int)param_1 + 0x5e) = 0;
  }
  piVar2 = (int *)param_1[0xc];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    param_1[0xc] = 0;
  }
  if (*(int *)((int)param_1 + 0x7a) != 0) {
    (**(code **)(*(int *)param_1[0xd] + 0x14))((int *)param_1[0xd],*(int *)((int)param_1 + 0x7a));
    *(undefined4 *)((int)param_1 + 0x7a) = 0;
  }
  if (*(int *)((int)param_1 + 0x7e) != 0) {
    (**(code **)(*(int *)param_1[0xd] + 0x14))((int *)param_1[0xd],*(int *)((int)param_1 + 0x7e));
    *(undefined4 *)((int)param_1 + 0x7e) = 0;
  }
  piVar2 = *(int **)((int)param_1 + 0x82);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    *(undefined4 *)((int)param_1 + 0x82) = 0;
  }
  piVar2 = (int *)param_1[0xd];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    param_1[0xd] = 0;
  }
  piVar2 = *(int **)((int)param_1 + 0x72);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    *(undefined4 *)((int)param_1 + 0x72) = 0;
  }
  operator_delete((void *)param_1[0x11]);
  if ((void *)param_1[0x15] != (void *)0x0) {
    operator_delete((void *)param_1[0x15]);
    param_1[0x15] = 0;
  }
  piVar2 = (int *)param_1[8];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x10))(piVar2);
    (**(code **)(*(int *)param_1[8] + 8))((int *)param_1[8]);
    param_1[8] = 0;
  }
  return;
}


