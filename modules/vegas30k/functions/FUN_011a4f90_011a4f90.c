/* Module: vegas30k.dll
   Function: FUN_011a4f90
   Address: 011a4f90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_011a4f90(int param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  iVar7 = 0;
  puVar2 = (undefined4 *)0x0;
  if (*(int *)(iVar1 + 0x118) == 0) {
    piVar4 = *(int **)(iVar1 + 0x120);
  }
  else {
    iVar7 = *(int *)(*(int *)(*(int *)(iVar1 + 0x118) + 8) + *(int *)(iVar1 + 0x11c) * 4);
    piVar4 = param_2;
    if (iVar7 != 0) {
      piVar4 = *(int **)(iVar7 + 0x118);
    }
  }
  if (piVar4 == (int *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *piVar4;
  }
  iVar3 = 0;
  if (0 < iVar6) {
    puVar5 = (undefined4 *)piVar4[2];
    while( true ) {
      puVar2 = (undefined4 *)*puVar5;
      if ((int *)*puVar2 == param_2) break;
      iVar3 = iVar3 + 1;
      puVar5 = puVar5 + 1;
      if (iVar6 <= iVar3) {
        return (undefined4 *)0x0;
      }
    }
    if (iVar7 != 0) {
      *(int *)(iVar7 + 0x11c) = iVar3;
      return puVar2;
    }
    *(int *)(iVar1 + 0x124) = iVar3;
  }
  return puVar2;
}


