/* Module: sfcd.cdd
   Function: FUN_0041c580
   Address: 0041c580
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041c580(HSFCD__ *param_1,byte param_2,int param_3,int param_4)

{
  char cVar1;
  HSFCD__ *pHVar2;
  uint uVar3;
  int iVar4;
  undefined1 uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 local_38;
  undefined1 local_34;
  undefined1 local_30;
  undefined2 local_2a [9];
  byte local_18;
  undefined4 local_17;
  undefined4 local_13;
  undefined4 local_f;
  
  pHVar2 = param_1;
  iVar4 = *(int *)(param_1 + 0x160);
  cVar1 = *(char *)(iVar4 + 0x290);
  if (cVar1 == '\0') {
    uVar5 = 0;
    param_1 = (HSFCD__ *)0x0;
  }
  else if (cVar1 == '\x01') {
    uVar5 = 8;
    param_1 = (HSFCD__ *)0x0;
  }
  else if (cVar1 == '\x03') {
    param_1 = (HSFCD__ *)0x20;
    uVar5 = 0xd;
  }
  else {
    uVar5 = param_1._0_1_;
  }
  iVar7 = 1;
  uVar3 = cdr_GetSpeed(pHVar2,1);
  iVar7 = FUN_0041c420(pHVar2,uVar3,iVar7);
  if (iVar7 == 0) {
    puVar6 = &local_38;
    for (iVar7 = 0xe; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    local_30 = param_1._0_1_;
    local_38._2_1_ = local_38._2_1_ ^ (local_38._2_1_ ^ param_2) & 0xf;
    if (param_4 != 0) {
      local_38._3_1_ = (*(byte *)(param_4 + 0x38) & 1) << 4 | local_38._3_1_ & 0xef;
      if (*(int *)(param_4 + 0x1c) != 0) {
        local_18 = local_18 | 0x80;
        local_17 = *(undefined4 *)(param_4 + 0x20);
        local_13 = *(undefined4 *)(param_4 + 0x24);
        local_f = *(undefined4 *)(param_4 + 0x28);
      }
      uVar3 = *(uint *)(param_4 + 8);
      if ((uVar3 & 1) != 0) {
        local_38._3_1_ = local_38._3_1_ | 1;
      }
      if ((uVar3 & 2) != 0) {
        local_38._3_1_ = local_38._3_1_ | 2;
      }
      if ((uVar3 & 4) != 0) {
        local_38._3_1_ = local_38._3_1_ | 4;
      }
      if ((uVar3 & 8) != 0) {
        local_38._3_1_ = local_38._3_1_ | 8;
      }
    }
    if (param_3 == 2) {
      local_38._3_1_ = local_38._3_1_ & 0x3f | 0x40;
    }
    else if (param_3 == 3) {
      local_38._3_1_ = local_38._3_1_ | 0xc0;
    }
    else {
      local_38._3_1_ = local_38._3_1_ & 0x3f;
    }
    local_34 = uVar5;
    if (*(int *)(iVar4 + 0x1cc) == 0) {
      local_2a[0] = 0x96;
      FUN_0041f970((undefined1 *)local_2a,1);
    }
    iVar4 = cdr_GetTestMode(pHVar2);
    if (iVar4 != 0) {
      local_38._2_1_ = local_38._2_1_ | 0x10;
    }
    iVar4 = cdr_GetBurnProofMode(pHVar2);
    if (iVar4 != 0) {
      local_38._2_1_ = local_38._2_1_ | 0x40;
    }
    FUN_0041c260(pHVar2,&local_38);
  }
  return;
}


