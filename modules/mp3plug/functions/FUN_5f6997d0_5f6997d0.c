/* Module: mp3plug.dll
   Function: FUN_5f6997d0
   Address: 5f6997d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f6997d0(void *param_1,int *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = FUN_5f698160(param_1,param_3);
  if (-1 < iVar2) {
    piVar1 = *(int **)(*(int *)((int)param_1 + 0x1bc) + 0x1c + param_3 * 0x20);
    *param_2 = (int)piVar1;
    if (piVar1 == (int *)0x0) {
      return -0x7fffbffe;
    }
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  return iVar2;
}


