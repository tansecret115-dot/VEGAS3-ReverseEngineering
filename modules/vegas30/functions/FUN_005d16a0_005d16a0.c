/* Module: vegas30.exe
   Function: FUN_005d16a0
   Address: 005d16a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005d16a0(int param_1,int param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  
  if (*(int *)(param_1 + 0x244) != 0) {
    FUN_005d0830(param_1,param_2,param_3);
  }
  piVar1 = *(int **)(param_1 + 0x234);
  if (piVar1 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *piVar1;
  }
  if ((param_2 < 0) || (iVar2 + -1 < param_2)) {
    puVar3 = (uint *)0x0;
  }
  else {
    puVar3 = *(uint **)(piVar1[2] + param_2 * 4);
  }
  if (puVar3 != (uint *)0x0) {
    *puVar3 = (param_3 & 1) << 1 | *puVar3 & 0xfffffffd;
  }
  return;
}


