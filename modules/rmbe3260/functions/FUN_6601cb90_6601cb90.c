/* Module: rmbe3260.dll
   Function: FUN_6601cb90
   Address: 6601cb90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_6601cb90(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *local_c;
  int *local_8;
  
  piVar1 = *(int **)(param_1 + 0x80);
  if (piVar1 == (int *)0x0) {
    return 0x80040007;
  }
  (**(code **)(*piVar1 + 0x18))(piVar1,*(undefined4 *)(param_1 + 0x1da));
  (**(code **)(**(int **)(param_1 + 0x80) + 0x1c))
            (*(int **)(param_1 + 0x80),*(undefined4 *)(param_1 + 0xc0));
  (**(code **)(**(int **)(param_1 + 0x80) + 0x10))
            (*(int **)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x7c));
  (**(code **)(**(int **)(param_1 + 0x80) + 0x24))
            (*(int **)(param_1 + 0x80),*(undefined4 *)(param_1 + 0xa8));
  (**(code **)(**(int **)(param_1 + 0x80) + 0x2c))
            (*(int **)(param_1 + 0x80),*(undefined4 *)(param_1 + 0xac));
  local_8 = (int *)0x0;
  if (*(int *)(param_1 + 0xac) != 0) {
    local_c = (int *)0x0;
    iVar2 = (**(code **)(**(int **)(param_1 + 0x88) + 0x10))(*(int **)(param_1 + 0x88),&local_c);
    if (-1 < iVar2) {
      (**(code **)*local_c)(local_c,&DAT_66065a68,&local_8);
      if (local_c != (int *)0x0) {
        (**(code **)(*local_c + 8))(local_c);
      }
    }
  }
  (**(code **)(**(int **)(param_1 + 0x80) + 0x14))(*(int **)(param_1 + 0x80),local_8);
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
    local_8 = (int *)0x0;
  }
  uVar3 = (**(code **)(**(int **)(param_1 + 0x80) + 0x30))(*(int **)(param_1 + 0x80));
  return uVar3;
}


