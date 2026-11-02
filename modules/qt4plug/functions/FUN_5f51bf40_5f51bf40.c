/* Module: qt4plug.dll
   Function: FUN_5f51bf40
   Address: 5f51bf40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5f51bf40(int param_1)

{
  LPSTR pCVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  int local_50;
  int local_38 [2];
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined4 uStack_2c;
  int aiStack_1c [2];
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined4 uStack_10;
  
  puVar6 = (undefined4 *)(param_1 + 0x50);
  for (iVar5 = 0x56; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  piVar3 = local_38;
  for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar3 = 0;
    piVar3 = piVar3 + 1;
  }
  FUN_5f576650();
  uVar2 = FUN_5f5765b0();
  *(undefined4 *)(param_1 + 0x84) = uVar2;
  if (local_50 != 0x736f756e) {
    return 0x80070057;
  }
  piVar3 = (int *)FUN_5f57af10();
  if (piVar3 == (int *)0x0) {
    return 0x8007000e;
  }
  FUN_5f576730();
  FUN_5f51c480(piVar3,(undefined2 *)(param_1 + 0x58));
  pCVar1 = (LPSTR)(param_1 + 0xa0);
  FUN_5f51c1e0(pCVar1,0x104,piVar3);
  if (*pCVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x94) = 0;
    FUN_5f5275c0(DAT_5f5a4158,0x1ae,pCVar1,0x104);
  }
  else {
    *(undefined4 *)(param_1 + 0x94) = 1;
    *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(*piVar3 + 0x24);
    *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(*piVar3 + 0x28);
  }
  iVar5 = *piVar3;
  local_38[1] = *(int *)(iVar5 + 4);
  uStack_30 = *(undefined2 *)(iVar5 + 0x18);
  uStack_2e = *(undefined2 *)(iVar5 + 0x1a);
  uStack_2c = *(undefined4 *)(iVar5 + 0x20);
  piVar3 = local_38;
  piVar7 = aiStack_1c;
  for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar7 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar7 = piVar7 + 1;
  }
  switch(uStack_2e) {
  case 8:
    iVar5 = 0x72617720;
    break;
  default:
    FUN_5f57b390();
    return 0x80004001;
  case 0x10:
    iVar5 = 0x736f7774;
    break;
  case 0x18:
    iVar5 = 0x696e3234;
    break;
  case 0x20:
    iVar5 = 0x696e3332;
  }
  if (local_38[1] != iVar5) {
    FUN_5f580580();
    iVar4 = FUN_5f5805e0();
    *(int *)(param_1 + 0x88) = iVar4;
    if (iVar4 != 0) {
      piVar3 = (int *)FUN_5f57af10();
      FUN_5f57b0b0();
      *(undefined4 *)*piVar3 = 0x24;
      *(undefined2 *)(*piVar3 + 0x18) = uStack_14;
      *(undefined2 *)(*piVar3 + 0x1a) = uStack_12;
      *(undefined4 *)(*piVar3 + 0x20) = uStack_10;
      *(int *)(*piVar3 + 4) = iVar5;
      *(undefined2 *)(*piVar3 + 0xe) = 1;
      iVar5 = FUN_5f58d4b0();
      FUN_5f57b0d0();
      FUN_5f57b390();
      if (iVar5 == 0) {
        uVar2 = FUN_5f575fb0();
        *(undefined4 *)(param_1 + 0x90) = uVar2;
        goto LAB_5f51c13c;
      }
    }
    FUN_5f57b390();
    return 0x8004e01e;
  }
LAB_5f51c13c:
  FUN_5f57b390();
  return 0;
}


