/* Module: vidcap30.exe
   Function: FUN_00414ac0
   Address: 00414ac0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00414ac0(int param_1,undefined4 *param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (((param_1 != 0) && (param_2 != (undefined4 *)0x0)) &&
     ((undefined4 *)*param_2 != (undefined4 *)0x0)) {
    sVar1 = *(short *)(param_1 + 0xe);
    if (sVar1 == 1) {
      iVar3 = 2;
    }
    else if (sVar1 == 4) {
      iVar3 = 0x10;
    }
    else if (sVar1 == 8) {
      iVar3 = 0x100;
    }
    else {
      iVar3 = 0;
    }
    iVar2 = *(int *)(param_1 + 0x20);
    if ((iVar2 != 0) && (iVar2 <= iVar3)) {
      iVar3 = iVar2;
    }
    puVar4 = (undefined4 *)*param_2;
    puVar5 = (undefined4 *)(param_1 + 0x28);
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    free((void *)*param_2);
    *param_2 = 0;
  }
  return;
}


