/* Module: vegas30.exe
   Function: FUN_00522a00
   Address: 00522a00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00522a00(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_2 < 0) {
    param_2 = *(int *)(param_1 + 0x9c);
  }
  piVar1 = *(int **)(param_1 + 0xa4);
  if (piVar1 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *piVar1;
  }
  if ((param_2 < iVar2) &&
     (puVar3 = (undefined4 *)(piVar1[1] * param_2 + piVar1[2]), puVar3 != (undefined4 *)0x0)) {
    return *puVar3;
  }
  return 0;
}


