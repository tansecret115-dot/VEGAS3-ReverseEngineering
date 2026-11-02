/* Module: wmfplug2.dll
   Function: FUN_0040a140
   Address: 0040a140
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0040a140(void *param_1,int *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = FUN_00409530(param_1,param_3);
  if (-1 < iVar2) {
    piVar1 = *(int **)(*(int *)((int)param_1 + 0x5c) + 0x18 + param_3 * 0x20);
    *param_2 = (int)piVar1;
    if (piVar1 == (int *)0x0) {
      return -0x7fffbffe;
    }
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  return iVar2;
}


