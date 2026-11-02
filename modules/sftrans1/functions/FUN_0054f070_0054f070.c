/* Module: sftrans1.dll
   Function: FUN_0054f070
   Address: 0054f070
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0054f070(int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  iVar1 = 0;
  if (param_3 < 1) {
    return 1;
  }
  do {
    iVar1 = iVar1 + 1;
    puVar3 = *(undefined4 **)
              (*(int *)(*(int *)(*(int *)(param_1 + 0x150) + *(int *)(param_1 + 0x14c) * 8) + 8) +
               -4 + iVar1 * 4);
    puVar4 = param_2;
    for (iVar2 = 0x1a; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    param_2 = param_2 + 0x1a;
  } while (iVar1 < param_3);
  return 1;
}


