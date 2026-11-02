/* Module: sftrans1.dll
   Function: FUN_0054ff50
   Address: 0054ff50
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_0054ff50(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 local_68 [26];
  
  puVar6 = *(undefined4 **)
            (*(int *)(*(int *)(*(int *)(param_1 + 0x150) + *(int *)(param_1 + 0x14c) * 8) + 8) +
            param_2 * 4);
  puVar7 = local_68;
  for (iVar3 = 0x1a; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  iVar3 = param_2;
  if (param_2 < param_3) {
    do {
      iVar3 = iVar3 + 1;
      iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x150) + *(int *)(param_1 + 0x14c) * 8) + 8);
      puVar6 = *(undefined4 **)(iVar1 + iVar3 * 4);
      puVar7 = *(undefined4 **)(iVar1 + -4 + iVar3 * 4);
      for (iVar4 = 0x1a; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
    } while (iVar3 < param_3);
    puVar6 = local_68;
    puVar7 = *(undefined4 **)
              (*(int *)(*(int *)(*(int *)(param_1 + 0x150) + *(int *)(param_1 + 0x14c) * 8) + 8) +
              param_3 * 4);
    for (iVar3 = 0x1a; iVar1 = param_2, iVar4 = param_3, iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  else {
    while (param_3 < iVar3) {
      iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x150) + *(int *)(param_1 + 0x14c) * 8) + 8);
      iVar4 = iVar3 * 4;
      iVar1 = iVar3 * 4;
      iVar3 = iVar3 + -1;
      puVar6 = *(undefined4 **)(iVar2 + -4 + iVar4);
      puVar7 = *(undefined4 **)(iVar2 + iVar1);
      for (iVar5 = 0x1a; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
    }
    puVar6 = local_68;
    puVar7 = *(undefined4 **)
              (*(int *)(*(int *)(*(int *)(param_1 + 0x150) + *(int *)(param_1 + 0x14c) * 8) + 8) +
              param_3 * 4);
    for (iVar3 = 0x1a; iVar1 = param_3, iVar4 = param_2, iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  for (; iVar1 <= iVar4; iVar1 = iVar1 + 1) {
    FUN_0054da10(iVar1);
  }
  return;
}


