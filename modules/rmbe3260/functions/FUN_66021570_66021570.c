/* Module: rmbe3260.dll
   Function: FUN_66021570
   Address: 66021570
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_66021570(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    iVar2 = FUN_6603c0d0(*(void **)(param_1 + 0x18),(int)param_2);
    iVar2 = FUN_660157a0(iVar2);
  }
  if ((*(void **)(param_1 + 0x1c) != (void *)0x0) && (-1 < iVar2)) {
    iVar2 = FUN_6603c0d0(*(void **)(param_1 + 0x1c),(int)param_2);
    iVar2 = FUN_660157a0(iVar2);
  }
  if ((*(void **)(param_1 + 0x20) != (void *)0x0) && (-1 < iVar2)) {
    iVar2 = FUN_6603c0d0(*(void **)(param_1 + 0x20),(int)param_2);
    iVar2 = FUN_660157a0(iVar2);
  }
  piVar1 = *(int **)(param_1 + 0x172);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x172) = 0;
  }
  *(int **)(param_1 + 0x172) = param_2;
  (**(code **)(*param_2 + 4))(param_2);
  return iVar2;
}


