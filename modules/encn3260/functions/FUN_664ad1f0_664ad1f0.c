/* Module: encn3260.dll
   Function: FUN_664ad1f0
   Address: 664ad1f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664ad1f0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)param_1[5];
  *param_1 = &PTR_FUN_664df1e8;
  param_1[1] = &PTR_LAB_664df1d8;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[5] = 0;
  }
  piVar1 = (int *)param_1[4];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[4] = 0;
  }
  piVar1 = (int *)param_1[3];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[3] = 0;
  }
  piVar1 = (int *)param_1[6];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[6] = 0;
  }
  iVar2 = param_1[7];
  if (((iVar2 != 0) && (*(int *)(iVar2 + 0xc) != 0)) &&
     (piVar1 = (int *)param_1[8], piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 0x14))(piVar1,*(undefined4 *)(iVar2 + 8));
  }
  piVar1 = (int *)param_1[7];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[7] = 0;
  }
  piVar1 = (int *)param_1[8];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[8] = 0;
  }
  piVar1 = (int *)param_1[10];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[10] = 0;
  }
  if ((void *)param_1[0xb] != (void *)0x0) {
    operator_delete((void *)param_1[0xb]);
    param_1[0xb] = 0;
  }
  return;
}


