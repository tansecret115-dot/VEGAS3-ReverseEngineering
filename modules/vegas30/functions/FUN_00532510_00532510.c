/* Module: vegas30.exe
   Function: FUN_00532510
   Address: 00532510
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00532510(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  iVar2 = *(int *)(param_1 + 0x8bc);
  *(undefined4 *)(param_1 + 8) = 0;
  while (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0x8bc) = *(undefined4 *)(iVar2 + 0x144);
    *(undefined4 *)(iVar2 + 0x144) = 0;
    FUN_00532560(iVar2);
    iVar2 = *(int *)(param_1 + 0x8bc);
  }
  return;
}


