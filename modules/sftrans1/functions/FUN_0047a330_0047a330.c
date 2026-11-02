/* Module: sftrans1.dll
   Function: FUN_0047a330
   Address: 0047a330
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0047a330(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  
  iVar4 = param_1[3];
  puVar5 = (undefined4 *)*param_1;
  uVar2 = *param_2;
  iVar6 = param_1[4] - param_1[2];
  iVar1 = param_1[6];
  if (iVar4 < (int)param_1[5]) {
    do {
      iVar3 = iVar6;
      puVar7 = puVar5;
      if (0 < iVar6) {
        for (; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar7 = uVar2;
          puVar7 = puVar7 + 1;
        }
      }
      puVar5 = puVar5 + iVar1 + iVar6;
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)param_1[5]);
  }
  return;
}


