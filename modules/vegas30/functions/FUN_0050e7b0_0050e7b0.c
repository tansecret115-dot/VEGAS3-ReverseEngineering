/* Module: vegas30.exe
   Function: FUN_0050e7b0
   Address: 0050e7b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0050e7b0(int *param_1,uint param_2,int param_3)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = *param_1;
  if (0 < iVar1) {
    puVar2 = (uint *)(param_1[2] + 4);
    do {
      if ((param_3 < (int)puVar2[1]) || ((param_3 <= (int)puVar2[1] && (param_2 < *puVar2)))) break;
      iVar3 = iVar3 + 1;
      puVar2 = (uint *)((int)puVar2 + param_1[1]);
    } while (iVar3 < iVar1);
  }
  iVar3 = iVar3 + -1;
  if (iVar3 < 0) {
    return 0;
  }
  if (iVar1 + -1 < iVar3) {
    iVar3 = iVar1 + -1;
  }
  return iVar3;
}


