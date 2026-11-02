/* Module: vidpcore.dll
   Function: FUN_5de82590
   Address: 5de82590
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5de82590(undefined4 *param_1,int param_2,int param_3)

{
  double dVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *local_7c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  double local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  uVar6 = 0;
  local_7c = (uint *)*param_1;
  local_2c = 0x3f800000;
  local_20 = 0;
  local_1c = 0x3ff00000;
  local_18 = 0;
  local_14 = 0x3fe00000;
  local_10 = 0;
  local_c = 0x3ff00000;
  if (param_1[1] != 0) {
    do {
      dVar1 = (((double)uVar6 + (double)(uint)param_1[2]) -
              (double)((int)(param_2 + (param_2 >> 0x1f & 3U)) >> 2)) / (double)param_2;
      iVar2 = FUN_5de824f0((dVar1 + dVar1) - _DAT_5df18830,
                           ((double)(uint)param_1[3] / (double)param_3 +
                           (double)(uint)param_1[3] / (double)param_3) - _DAT_5df18830,0x40);
      local_28 = (double)iVar2 * _DAT_5df291f8;
      FUN_5ded22b0(&local_38,&local_28);
      if (local_28 == _DAT_5df18830) {
        local_30 = 0;
        local_34 = 0;
        local_38 = 0;
      }
      uVar3 = ftol();
      uVar4 = ftol();
      uVar5 = ftol();
      uVar6 = uVar6 + 1;
      *local_7c = ((uVar3 | 0xffffff00) << 8 | uVar4) << 8 | uVar5;
      local_7c = local_7c + 1;
    } while (uVar6 < (uint)param_1[1]);
  }
  return 1;
}


