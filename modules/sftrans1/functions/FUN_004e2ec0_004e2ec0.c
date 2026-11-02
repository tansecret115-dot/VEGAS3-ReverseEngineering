/* Module: sftrans1.dll
   Function: FUN_004e2ec0
   Address: 004e2ec0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004e2ec0(undefined4 *param_1)

{
  int iVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int local_c8;
  undefined1 local_c0 [4];
  uint local_bc [4];
  code *pcStack_ac;
  code *local_9c;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  int local_58;
  undefined4 local_54;
  undefined4 local_28;
  
  iVar8 = param_1[2];
  iVar1 = param_1[7];
  uVar4 = FUN_004ddb90(*param_1);
  FUN_004dde20(uVar4,local_c0);
  FUN_00525bc0(uVar4,uVar4,param_1[0xd],local_bc,0);
  local_28 = param_1[8];
  if ((local_bc[0] & 0x10) == 0) {
    uVar2 = ftol();
    local_80._0_3_ = CONCAT12(uVar2,(undefined2)local_80);
    uVar2 = ftol();
    local_80._0_2_ = CONCAT11(uVar2,(undefined1)local_80);
    uVar2 = ftol();
    local_80 = CONCAT31(local_80._1_3_,uVar2);
    uVar2 = ftol();
    local_80 = CONCAT13(uVar2,(undefined3)local_80);
  }
  else {
    uVar3 = ftol();
    local_7c = CONCAT22(local_7c._2_2_,uVar3);
    local_80._2_2_ = ftol();
    uVar3 = ftol();
    local_80 = CONCAT22(local_80._2_2_,uVar3);
    uVar3 = ftol();
    local_7c = CONCAT22(uVar3,(undefined2)local_7c);
    local_74 = local_7c;
    local_6c = local_7c;
    local_64 = local_7c;
  }
  uVar5 = param_1[5];
  iVar9 = (int)(uVar5 + ((int)uVar5 >> 0x1f & 3U)) >> 2;
  uVar5 = uVar5 & 0x80000003;
  if ((int)uVar5 < 0) {
    uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
  }
  local_c8 = param_1[6];
  local_78 = local_80;
  local_70 = local_80;
  local_68 = local_80;
  if (0 < local_c8) {
    do {
      local_54 = param_1[3];
      iVar6 = iVar9;
      local_58 = iVar8;
      if (0 < iVar9) {
        do {
          (*local_9c)(local_bc);
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      uVar7 = uVar5;
      if (0 < (int)uVar5) {
        do {
          (*pcStack_ac)(local_bc);
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      iVar8 = iVar8 + iVar1;
      local_c8 = local_c8 + -1;
    } while (local_c8 != 0);
  }
  return 0;
}


