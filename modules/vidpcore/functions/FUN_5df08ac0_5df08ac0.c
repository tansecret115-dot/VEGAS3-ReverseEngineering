/* Module: vidpcore.dll
   Function: FUN_5df08ac0
   Address: 5df08ac0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5df08ac0(int param_1)

{
  int *piVar1;
  
  if ((*(byte *)(param_1 + 0x548) & 1) != 0) {
    FUN_5deca630(*(undefined4 *)(param_1 + 0x568),0);
    *(undefined4 *)(param_1 + 0x568) = 0;
  }
  if ((*(byte *)(param_1 + 0x548) & 2) != 0) {
    (**(code **)(**(int **)(param_1 + 0x570) + 0x80))(*(int **)(param_1 + 0x570),0);
    (**(code **)(**(int **)(param_1 + 0x570) + 8))(*(int **)(param_1 + 0x570));
  }
  piVar1 = *(int **)(param_1 + 0x46c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(param_1 + 0x470);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(param_1 + 0x474);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(param_1 + 0x478);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined4 *)(param_1 + 0x47c) = 1;
  return;
}


