/* Module: vegas30.exe
   Function: FUN_00580f90
   Address: 00580f90
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00580f90(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar1 = (undefined4 *)*param_1;
  if (((int)puVar1[-3] < 2) && (param_2 <= (int)puVar1[-1])) {
    return *param_1;
  }
  iVar2 = puVar1[-2];
  if (param_2 < iVar2) {
    param_2 = iVar2;
  }
  FUN_00580920(param_2);
  puVar5 = (undefined4 *)*param_1;
  puVar4 = puVar1;
  for (uVar3 = iVar2 + 1U >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar5 = *puVar4;
    puVar5 = puVar5 + 1;
    puVar4 = puVar4 + 1;
  }
  for (uVar3 = iVar2 + 1U & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  *(int *)(*param_1 + -8) = iVar2;
  FUN_005809c0(puVar1 + -3);
  return *param_1;
}


