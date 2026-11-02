/* Module: vegas30.exe
   Function: FUN_0050bc90
   Address: 0050bc90
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0050bc90(int *param_1,uint param_2,int param_3)

{
  int iVar1;
  uint *puVar2;
  
  if (param_1 == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *param_1;
  }
  iVar1 = iVar1 + -1;
  if (-1 < iVar1) {
    puVar2 = (uint *)(param_1[1] * iVar1 + 4 + param_1[2]);
    do {
      if ((int)puVar2[1] < param_3) {
        return iVar1;
      }
      if (((int)puVar2[1] <= param_3) && (*puVar2 <= param_2)) {
        return iVar1;
      }
      iVar1 = iVar1 + -1;
      puVar2 = (uint *)((int)puVar2 - param_1[1]);
    } while (-1 < iVar1);
  }
  return -1;
}


