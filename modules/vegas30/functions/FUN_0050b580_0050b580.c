/* Module: vegas30.exe
   Function: FUN_0050b580
   Address: 0050b580
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0050b5c2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0050b580(undefined4 param_1,double param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int local_8;
  int local_4;
  
  if (_DAT_00610fd8 != param_2) {
    local_4 = 1;
    piVar3 = (int *)FUN_00522a00(0);
    while (piVar3 != (int *)0x0) {
      iVar5 = *piVar3 + -1;
      local_8 = -1;
      iVar4 = -1;
      if (param_2 < _DAT_006106d0) {
        iVar5 = 0;
        local_8 = 1;
        iVar4 = *piVar3;
      }
      for (; iVar5 != iVar4; iVar5 = iVar5 + local_8) {
        iVar1 = piVar3[1];
        iVar2 = piVar3[2];
        uVar9 = 0;
        uVar8 = 0;
        uVar7 = 1;
        uVar6 = ftol(1,0,0);
        FUN_0050b2e0(param_1,0,0,iVar1 * iVar5 + iVar2,piVar3,iVar5,uVar6,uVar7,uVar8,uVar9);
      }
      piVar3 = (int *)FUN_00522a00(local_4);
      local_4 = local_4 + 1;
    }
    FUN_00453250(DAT_00647630,0);
    return 0;
  }
  return 0x80070057;
}


