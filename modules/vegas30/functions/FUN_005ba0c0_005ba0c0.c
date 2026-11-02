/* Module: vegas30.exe
   Function: FUN_005ba0c0
   Address: 005ba0c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005ba0c0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  piVar1 = *(int **)(param_1 + 0xc34);
  if (piVar1 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *piVar1;
  }
  if ((param_2 < 0) || (iVar3 + -1 < param_2)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(piVar1[2] + param_2 * 4);
  }
  FUN_005ba030(param_1,uVar2,param_3,param_4);
  return;
}


