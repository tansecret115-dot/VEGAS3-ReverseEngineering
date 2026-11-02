/* Module: mp3plug.dll
   Function: FUN_5f6c8cf0
   Address: 5f6c8cf0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f6c8cf0(undefined4 *param_1)

{
  int *piVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  
  if ((param_1 == (undefined4 *)0x0) || (piVar1 = (int *)param_1[7], piVar1 == (int *)0x0)) {
    return 0xfffffffe;
  }
  if (*piVar1 != 0xd) {
    *piVar1 = 0xd;
    *(undefined4 *)(param_1[7] + 4) = 0;
  }
  iVar7 = param_1[1];
  if (iVar7 == 0) {
    return 0xfffffffb;
  }
  pcVar2 = (char *)*param_1;
  uVar5 = *(uint *)(param_1[7] + 4);
  pcVar6 = pcVar2;
  do {
    if (3 < uVar5) break;
    if (*pcVar6 == (&DAT_5f736308)[uVar5]) {
      uVar5 = uVar5 + 1;
    }
    else if (*pcVar6 == '\0') {
      uVar5 = 4 - uVar5;
    }
    else {
      uVar5 = 0;
    }
    pcVar6 = pcVar6 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  *param_1 = pcVar6;
  param_1[1] = iVar7;
  param_1[2] = pcVar6 + (param_1[2] - (int)pcVar2);
  *(uint *)(param_1[7] + 4) = uVar5;
  if (uVar5 != 4) {
    return 0xfffffffd;
  }
  uVar3 = param_1[2];
  uVar4 = param_1[5];
  FUN_5f6c8660((int)param_1);
  param_1[2] = uVar3;
  param_1[5] = uVar4;
  *(undefined4 *)param_1[7] = 7;
  return 0;
}


