/* Module: vegas30.exe
   Function: FUN_0043ee20
   Address: 0043ee20
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0043ee8c) */
/* WARNING: Removing unreachable block (ram,0x0043eef9) */

undefined8
FUN_0043ee20(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  int *piVar8;
  longlong lVar9;
  longlong lVar10;
  int *local_14;
  uint local_10;
  int local_8;
  int local_4;
  
  lVar9 = FUN_005b8d80(param_1);
  puVar6 = (uint *)FUN_005b89b0(param_1);
  if (puVar6 == (uint *)0x0) {
    param_1 = 0;
  }
  else {
    param_1 = *puVar6;
  }
  *param_4 = 0;
  *param_5 = 0;
  if (param_1 == 0) {
    return CONCAT44(param_3,param_2);
  }
  if (lVar9 + 20000000 < CONCAT44(param_3,param_2)) {
    return CONCAT44(param_3,param_2);
  }
  *param_4 = 1;
  local_8 = 0;
  local_4 = 0;
  local_10 = 0;
  iVar5 = 0;
  if (param_1 != 0) {
    local_14 = (int *)puVar6[2];
    do {
      puVar1 = (uint *)*local_14;
      if (((byte *)puVar1[10] == (byte *)0x0) || ((*(byte *)puVar1[10] & 1) == 0)) {
        uVar7 = puVar1[3];
        uVar2 = puVar1[2];
        uVar3 = *puVar1;
        uVar4 = puVar1[1];
        lVar9 = *(longlong *)puVar1;
        lVar10 = __alldiv(uVar2,uVar7,2,0);
        if (CONCAT44(param_3,param_2) <= lVar10 + lVar9) break;
        local_8 = uVar3 + uVar2;
        local_4 = uVar4 + uVar7 + (uint)CARRY4(uVar3,uVar2);
      }
      local_10 = local_10 + 1;
      local_14 = local_14 + 1;
    } while (local_10 < param_1);
    if ((local_8 != 0) || (iVar5 = local_8, local_4 != 0)) goto LAB_0043ef7e;
  }
  local_8 = iVar5;
  if (puVar6 == (uint *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *puVar6;
  }
  if ((int)(uVar7 - 1) < 0) {
    piVar8 = (int *)0x0;
  }
  else {
    piVar8 = *(int **)puVar6[2];
  }
  if (((piVar8 != (int *)0x0) && (*piVar8 == 0)) && (piVar8[1] == 0)) {
    *param_5 = 1;
  }
  *param_4 = 0;
LAB_0043ef7e:
  return CONCAT44(local_4,local_8);
}


