/* Module: vegas30.exe
   Function: FUN_0050bce0
   Address: 0050bce0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0050bce0(int *param_1,uint param_2,int param_3)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  
  if (param_1 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *param_1;
  }
  iVar1 = 0;
  if (0 < iVar3) {
    puVar2 = (uint *)(param_1[2] + 4);
    do {
      if (param_3 < (int)puVar2[1]) {
        return iVar1;
      }
      if ((param_3 <= (int)puVar2[1]) && (param_2 < *puVar2)) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      puVar2 = (uint *)((int)puVar2 + param_1[1]);
    } while (iVar1 < iVar3);
  }
  return -1;
}


