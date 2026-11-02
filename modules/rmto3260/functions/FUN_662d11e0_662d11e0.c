/* Module: rmto3260.dll
   Function: FUN_662d11e0
   Address: 662d11e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_662d11e0(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  *param_1 = &PTR_FUN_66307168;
  param_1[4] = &PTR_LAB_66307118;
  iVar1 = *(int *)((int)param_1 + 0x7e);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    piVar2 = *(int **)(*(int *)((int)param_1 + 0x7a) + iVar1 * 4);
    FUN_662ed6b0((void *)((int)param_1 + 0x7a),iVar1,1);
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  if ((void *)param_1[0x10] != (void *)0x0) {
    operator_delete((void *)param_1[0x10]);
    param_1[0x10] = 0;
    param_1[0x12] = 0;
  }
  if ((void *)param_1[0x11] != (void *)0x0) {
    operator_delete((void *)param_1[0x11]);
    param_1[0x11] = 0;
    param_1[0x13] = 0;
  }
  if ((undefined4 *)param_1[10] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[10])(1);
    param_1[10] = 0;
  }
  if ((undefined4 *)param_1[0xb] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xb])(1);
    param_1[0xb] = 0;
  }
  if ((undefined4 *)param_1[0xc] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xc])(1);
    param_1[0xc] = 0;
  }
  if ((undefined4 *)param_1[0xd] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xd])(1);
    param_1[0xd] = 0;
  }
  if ((void *)param_1[0x15] != (void *)0x0) {
    operator_delete((void *)param_1[0x15]);
    param_1[0x15] = 0;
    param_1[0x17] = 0;
  }
  if ((void *)param_1[0x14] != (void *)0x0) {
    operator_delete((void *)param_1[0x14]);
    param_1[0x14] = 0;
    param_1[0x16] = 0;
  }
  if (*(void **)((int)param_1 + 0x76) != (void *)0x0) {
    operator_delete(*(void **)((int)param_1 + 0x76));
    *(undefined4 *)((int)param_1 + 0x76) = 0;
  }
  FUN_662cbf90((int)param_1);
  piVar2 = *(int **)((int)param_1 + 0x72);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    *(undefined4 *)((int)param_1 + 0x72) = 0;
  }
  FUN_662ed460((undefined4 *)((int)param_1 + 0x7a));
  *param_1 = &PTR_FUN_66306400;
  return;
}


