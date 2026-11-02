/* Module: rmbe3260.dll
   Function: FUN_6604f340
   Address: 6604f340
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6604f340(int param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  
  if (param_2 == (int *)0x0) {
    return 0x80004003;
  }
  uVar1 = param_2[1];
  FUN_6605cdc0((int *)(param_1 + 0x14),uVar1,0xffffffff);
  iVar3 = 0;
  if (0 < (int)uVar1) {
    do {
      piVar2 = *(int **)(*param_2 + iVar3 * 4);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))(piVar2);
        *(int **)(*(int *)(param_1 + 0x14) + iVar3 * 4) = piVar2;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)uVar1);
  }
  return 0;
}


