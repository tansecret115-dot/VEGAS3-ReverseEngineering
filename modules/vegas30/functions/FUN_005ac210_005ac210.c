/* Module: vegas30.exe
   Function: FUN_005ac210
   Address: 005ac210
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_005ac210(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 local_7f0 [254];
  undefined4 local_3f8 [254];
  
  puVar5 = param_1;
  puVar6 = local_7f0;
  for (iVar2 = 0xfe; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  uVar3 = 0;
  puVar5 = param_1;
  puVar6 = local_3f8;
  for (iVar2 = 0xfe; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  iVar2 = 0;
  if (0 < param_3) {
    do {
      uVar4 = uVar3;
      iVar1 = FUN_005ac0a0(local_7f0 + (uVar4 ^ 1) * 0xfe,local_7f0 + uVar4 * 0xfe,param_2);
      if (iVar1 == 0) break;
      iVar2 = iVar2 + 1;
      param_2 = param_2 + 0x10;
      uVar3 = uVar4 ^ 1;
    } while (iVar2 < param_3);
    uVar3 = uVar4 ^ 1;
  }
  puVar5 = local_7f0 + uVar3 * 0xfe;
  puVar6 = param_1;
  for (iVar2 = 0xfe; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  return 2 < (int)param_1[0xfd];
}


