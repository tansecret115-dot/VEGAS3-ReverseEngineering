/* Module: vegas30.exe
   Function: FUN_005d15e0
   Address: 005d15e0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_005d15e0(int param_1,int param_2)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  
  piVar1 = *(int **)(param_1 + 0x234);
  if (piVar1 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *piVar1;
  }
  if ((param_2 < 0) || (iVar3 + -1 < param_2)) {
    puVar2 = (uint *)0x0;
  }
  else {
    puVar2 = *(uint **)(piVar1[2] + param_2 * 4);
  }
  if (puVar2 != (uint *)0x0) {
    return *puVar2 >> 1 & 1;
  }
  return 0;
}


