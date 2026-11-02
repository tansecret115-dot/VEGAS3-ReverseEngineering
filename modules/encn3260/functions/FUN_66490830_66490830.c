/* Module: encn3260.dll
   Function: FUN_66490830
   Address: 66490830
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66490830(int param_1)

{
  int *piVar1;
  int iVar2;
  
  FUN_66490af0(param_1);
  piVar1 = *(int **)(param_1 + 0x92);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x92) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x96);
  if (((iVar2 != 0) && (*(int *)(iVar2 + 0xc) != 0)) && (*(int *)(param_1 + 0x10) != 0)) {
    *(undefined4 *)(iVar2 + 0xc) = 0;
    (**(code **)(**(int **)(param_1 + 0x10) + 0x14))
              (*(int **)(param_1 + 0x10),*(undefined4 *)(*(int *)(param_1 + 0x96) + 0x10));
  }
  piVar1 = *(int **)(param_1 + 0x96);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x96) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x9e);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x9e) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x74);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  if (*(void **)(param_1 + 0x8a) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x8a));
    *(undefined4 *)(param_1 + 0x8a) = 0;
  }
  piVar1 = *(int **)(param_1 + 0xb6);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0xb6) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x78);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  piVar1 = *(int **)(param_1 + 0xca);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0xca) = 0;
  }
  return;
}


