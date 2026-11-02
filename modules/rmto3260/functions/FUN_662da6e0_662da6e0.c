/* Module: rmto3260.dll
   Function: FUN_662da6e0
   Address: 662da6e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_662da6e0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  *param_1 = &PTR_FUN_663073f8;
  iVar3 = *(int *)((int)param_1 + 0x36) + -1;
  if (-1 < iVar3) {
    do {
      piVar1 = *(int **)(*(int *)((int)param_1 + 0x32) + iVar3 * 4);
      FUN_662ed6b0((int *)((int)param_1 + 0x32),iVar3,1);
      (**(code **)(*piVar1 + 8))(piVar1);
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  if ((void *)param_1[9] != (void *)0x0) {
    operator_delete((void *)param_1[9]);
    param_1[9] = 0;
    param_1[10] = 0;
  }
  if ((undefined4 *)param_1[4] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[4])(1);
    param_1[4] = 0;
  }
  puVar2 = (undefined4 *)param_1[3];
  if (puVar2 != (undefined4 *)0x0) {
    FUN_662d8540(puVar2);
    operator_delete(puVar2);
    param_1[3] = 0;
  }
  FUN_662da770((int)param_1);
  FUN_662ed460((undefined4 *)((int)param_1 + 0x32));
  return;
}


