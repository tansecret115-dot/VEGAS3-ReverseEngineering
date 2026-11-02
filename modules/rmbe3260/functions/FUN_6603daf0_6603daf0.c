/* Module: rmbe3260.dll
   Function: FUN_6603daf0
   Address: 6603daf0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6603daf0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int local_14;
  uint local_10;
  void *local_c;
  int local_8;
  
  uVar4 = 0;
  *param_1 = &PTR_FUN_66067fb8;
  PostThreadMessageA(param_1[0x29],0x401,0,0);
  WaitForSingleObject((HANDLE)param_1[0x28],15000);
  CloseHandle((HANDLE)param_1[0x28]);
  FUN_6603e560(param_1,0,0);
  if ((int *)param_1[8] != (int *)0x0) {
    (**(code **)(*(int *)param_1[8] + 0x24))();
    if ((undefined4 *)param_1[8] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[8])(1);
    }
  }
  if ((int *)param_1[6] != (int *)0x0) {
    (**(code **)(*(int *)param_1[6] + 0x24))();
    if ((undefined4 *)param_1[6] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[6])(1);
    }
  }
  puVar1 = (undefined4 *)param_1[9];
  if (puVar1 != (undefined4 *)0x0) {
    FUN_660613c0(puVar1);
    operator_delete(puVar1);
    param_1[9] = 0;
  }
  puVar1 = (undefined4 *)param_1[7];
  if (puVar1 != (undefined4 *)0x0) {
    FUN_660613c0(puVar1);
    operator_delete(puVar1);
    param_1[7] = 0;
  }
  if ((void *)param_1[0xb] != (void *)0x0) {
    operator_delete((void *)param_1[0xb]);
  }
  local_8 = -(uint)(param_1[0x15] != 0);
  if (local_8 != 0) {
    do {
      FUN_6605eeb0(param_1 + 0x12,&local_8,&local_14,(int *)&local_c);
      operator_delete(local_c);
    } while (local_8 != 0);
  }
  uVar3 = param_1[0x1a];
  local_10 = uVar3;
  if (uVar3 != 0) {
    do {
      piVar2 = *(int **)(param_1[0x19] + uVar4 * 4);
      if (piVar2 != (int *)0x0) {
        FUN_6603d8b0(piVar2);
        operator_delete(piVar2);
        uVar3 = local_10;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  if ((undefined4 *)param_1[0x1f] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x1f])(1);
    param_1[0x1f] = 0;
  }
  piVar2 = (int *)param_1[0x20];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    param_1[0x20] = 0;
  }
  if ((undefined4 *)param_1[0x2a] != (undefined4 *)0x0) {
    FUN_6603c1b0((undefined4 *)param_1[0x2a]);
    param_1[0x2a] = 0;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x22));
  FUN_6605cdb0(param_1 + 0x19);
  FUN_6605ec50(param_1 + 0x12);
  FUN_6605cdb0(param_1 + 0xd);
  *param_1 = &PTR_FUN_66067fc8;
  FUN_6605c430(param_1 + 1);
  return;
}


