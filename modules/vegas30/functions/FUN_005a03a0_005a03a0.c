/* Module: vegas30.exe
   Function: FUN_005a03a0
   Address: 005a03a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005a03a0(byte *param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x88);
  if (piVar1 != (int *)0x0) {
    if ((*param_1 & 2) != 0) {
      (**(code **)(*piVar1 + 0x30))(piVar1);
    }
    (**(code **)(**(int **)(param_1 + 0x88) + 0x14))(*(int **)(param_1 + 0x88),0,0);
    (**(code **)(**(int **)(param_1 + 0x88) + 8))(*(int **)(param_1 + 0x88));
    param_1[0x88] = 0;
    param_1[0x89] = 0;
    param_1[0x8a] = 0;
    param_1[0x8b] = 0;
  }
  piVar1 = *(int **)(param_1 + 0x90);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x90] = 0;
    param_1[0x91] = 0;
    param_1[0x92] = 0;
    param_1[0x93] = 0;
  }
  if (*(int *)(param_1 + 0x8c) != 0) {
    FUN_005ec620();
    FUN_005ed410(*(undefined4 *)(param_1 + 0x8c),0,0);
    param_1[0x8c] = 0;
    param_1[0x8d] = 0;
    param_1[0x8e] = 0;
    param_1[0x8f] = 0;
  }
  if (*(int *)(param_1 + 0x94) != 0) {
    FUN_00562540(&DAT_0064b538,*(int *)(param_1 + 0x94));
    param_1[0x94] = 0;
    param_1[0x95] = 0;
    param_1[0x96] = 0;
    param_1[0x97] = 0;
  }
  return;
}


