/* Module: sfcd.cdd
   Function: FUN_00407440
   Address: 00407440
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00407440(HSFCD__ *param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 local_38;
  undefined1 local_34;
  undefined2 local_2a [9];
  byte local_18;
  undefined4 local_17;
  undefined4 local_13;
  undefined4 local_f;
  
  iVar3 = 1;
  uVar1 = cdr_GetSpeed(param_1,1);
  iVar3 = FUN_0041c420(param_1,uVar1,iVar3);
  if (iVar3 == 0) {
    puVar2 = &local_38;
    for (iVar3 = 0xe; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    local_38._2_1_ = local_38._2_1_ ^ (local_38._2_1_ ^ (byte)param_2) & 0xf;
    if (param_2 == 1) {
      if (param_3 == 0x800) {
        local_34 = 8;
      }
      else if (param_3 == 0x930) {
        local_34 = 0;
      }
    }
    else if (param_2 == 3) {
      local_34 = 1;
    }
    if ((param_5 != 0) &&
       (local_38._3_1_ = (*(byte *)(param_5 + 0x38) & 1) << 4 | local_38._3_1_ & 0xef,
       *(int *)(param_5 + 0x1c) != 0)) {
      local_18 = local_18 | 0x80;
      local_17 = *(undefined4 *)(param_5 + 0x20);
      local_13 = *(undefined4 *)(param_5 + 0x24);
      local_f = *(undefined4 *)(param_5 + 0x28);
    }
    if (param_4 == 2) {
      local_38._3_1_ = local_38._3_1_ & 0x3f | 0x40;
    }
    else if (param_4 == 3) {
      local_38._3_1_ = local_38._3_1_ | 0xc0;
    }
    else {
      local_38._3_1_ = local_38._3_1_ & 0x3f;
    }
    local_2a[0] = 0x96;
    FUN_0041f970((undefined1 *)local_2a,1);
    iVar3 = cdr_GetTestMode(param_1);
    if (iVar3 != 0) {
      local_38._2_1_ = local_38._2_1_ | 0x10;
    }
    FUN_0041c260(param_1,&local_38);
  }
  return;
}


