/* Module: rmto3260.dll
   Function: FUN_662d95a0
   Address: 662d95a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_662d95a0(void *this,uint *param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  double dVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  int local_8;
  
  local_8 = 0;
  if (*(short *)((int)this + 0x6c) == 1) {
    if (*param_1 < *(uint *)((int)this + 0x56)) {
      return 0;
    }
    if (*(uint *)((int)this + 0x92) < *param_1) {
      return 0;
    }
    if (*(int *)((int)this + 0xba) != 0) {
      FUN_66301f30(0,s_Id___lu_Codec___s_Flavor___u_Fra_6630b0a8);
      *(undefined4 *)((int)this + 0xba) = 0;
      *(uint *)((int)this + 0x8a) = *param_1;
      *(double *)((int)this + 0x4a) = (double)*param_1;
      *(short *)((int)this + 0x76) = (short)param_1[1];
    }
    *(uint *)((int)this + 0x96) = *param_1;
    FUN_662ed8a0(*(void **)((int)this + 0xaa),*(int *)((int)this + 0x9a) + *param_1);
    uVar7 = *param_1;
    uVar5 = *(uint *)((int)this + 0x92);
    if (uVar5 < uVar7 || uVar5 == uVar7) {
      if (uVar5 != uVar7) {
        local_8 = -0x7ffbfff7;
      }
      ceil((double)uVar7 + *(double *)((int)this + 0x2a));
      uVar3 = ftol();
      *(undefined4 *)((int)this + 0x52) = uVar3;
      ftol();
      FUN_66301f30(0,s_Id___lu_Desired_start_time___lum_6630b068);
      FUN_66301f30(0,s_Id___lu_Desired_end_time___lums_A_6630b02c);
    }
    puVar4 = operator_new(param_3);
    if (puVar4 == (undefined4 *)0x0) {
      local_8 = -0x7ff8fff2;
    }
    if (local_8 < 0) {
      return local_8;
    }
    puVar8 = puVar4;
    for (uVar7 = param_3 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar8 = *param_2;
      param_2 = param_2 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar7 = param_3 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar8 = *(undefined1 *)param_2;
      param_2 = (undefined4 *)((int)param_2 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    FUN_662ed8a0(*(void **)((int)this + 8),puVar4);
    return local_8;
  }
  uVar7 = param_1[2];
  if (*(short *)((int)this + 0x72) == 0) {
    if ((uVar7 & 2) == 0) {
LAB_662d973f:
      local_8 = -0x7ff8ffa9;
    }
  }
  else if ((uVar7 & 2) != 0) goto LAB_662d973f;
  if (((uVar7 & 2) == 0) || (*(int *)((int)this + 0x7e) != 0)) goto LAB_662d9a59;
  uVar7 = *(uint *)((int)this + 0x9e);
  if (uVar7 != 0) {
    uVar5 = *(uint *)((int)this + 0xa2);
    if (uVar7 < uVar5) {
      *(undefined4 *)((int)this + 0x9e) = 0;
      *(uint *)((int)this + 0x9a) = *(int *)((int)this + 0x9a) - uVar7;
    }
    else {
      *(uint *)((int)this + 0x9a) = *(int *)((int)this + 0x9a) - uVar5;
      *(uint *)((int)this + 0x9e) = uVar7 - uVar5;
    }
  }
  *(uint *)((int)this + 0x96) = *param_1;
  FUN_662ed8a0(*(void **)((int)this + 0xaa),*(int *)((int)this + 0x9a) + *param_1);
  *(short *)((int)this + 0x76) = (short)param_1[1];
  *(uint *)((int)this + 0x82) = (uint)*(ushort *)((int)this + 0x6c);
  *(undefined4 *)((int)this + 0x86) = 0;
  *(undefined4 *)((int)this + 0x7a) = 0;
  if (*(int *)((int)this + 0xba) != 0) {
    uVar7 = *(uint *)((int)this + 0x56);
    if (*param_1 < uVar7) {
      ceil(((double)*param_1 + *(double *)((int)this + 0x3a)) - *(double *)((int)this + 0x2a));
      uVar5 = ftol();
      if (uVar5 <= uVar7) goto LAB_662d98db;
    }
    if (*param_1 < uVar7) {
      ceil((double)(uVar7 - *param_1) / *(double *)((int)this + 0x2a));
      uVar7 = ftol();
      *(undefined4 *)((int)this + 0x7a) = 1;
    }
    else {
      uVar7 = 0;
    }
    if (*(uint *)((int)this + 0x86) < (uint)*(ushort *)((int)this + 0x6c)) {
      *(undefined4 *)((int)this + 0xba) = 0;
      *(uint *)((int)this + 0x86) = uVar7;
      FUN_66301f30(0,s_Id___lu_Codec___s_Flavor___u_Fra_6630b0a8);
      *(uint *)((int)this + 0x8a) = *param_1;
      *(double *)((int)this + 0x4a) =
           (double)*param_1 + (double)uVar7 * *(double *)((int)this + 0x2a);
    }
  }
LAB_662d98db:
  uVar7 = *param_1;
  uVar5 = *(uint *)((int)this + 0x92);
  if (uVar5 < uVar7 || uVar5 == uVar7) {
    if (uVar5 != uVar7) {
      local_8 = -0x7ffbfff7;
    }
    *(undefined4 *)((int)this + 0xa2) = *(undefined4 *)((int)this + 0x9e);
    *(undefined4 *)((int)this + 0x7a) = 1;
    iVar1 = *(int *)((int)this + 0x86);
    iVar6 = ftol();
    iVar6 = iVar6 - iVar1;
    *(int *)((int)this + 0x82) = iVar6;
    if (iVar6 == 0) {
      local_8 = -0x7ffbfc2b;
    }
    ceil((double)*param_1 + (double)(uint)(iVar6 + iVar1) * *(double *)((int)this + 0x2a));
    uVar3 = ftol();
    *(undefined4 *)((int)this + 0x52) = uVar3;
    ftol();
    FUN_66301f30(0,s_Id___lu_Desired_start_time___lum_6630b068);
    FUN_66301f30(0,s_Id___lu_Desired_end_time___lums_A_6630b02c);
    uVar7 = *(uint *)((int)this + 0x52);
    uVar5 = *(uint *)((int)this + 0x5a);
    if (((uVar5 < uVar7) && (*(double *)((int)this + 0x2a) < (double)(uVar7 - uVar5))) ||
       ((uVar7 < uVar5 && (*(double *)((int)this + 0x2a) < (double)(uVar5 - uVar7))))) {
      FUN_66301f30(0,s_Id___lu_Error__Desired_end_time_i_6630afd8);
    }
    dVar2 = (double)*(uint *)((int)this + 0x56);
    if (((dVar2 < *(double *)((int)this + 0x4a)) &&
        (*(double *)((int)this + 0x2a) < *(double *)((int)this + 0x4a) - dVar2)) ||
       ((*(double *)((int)this + 0x4a) < dVar2 &&
        (*(double *)((int)this + 0x2a) < dVar2 - *(double *)((int)this + 0x4a))))) {
      FUN_66301f30(0,s_Id___lu_Error__Desired_start_tim_6630af80);
    }
  }
LAB_662d9a59:
  if (-1 < local_8) {
    puVar4 = (undefined4 *)
             ((uint)*(ushort *)((int)this + 0x46) * (uint)*(ushort *)((int)this + 0x72) +
             *(int *)((int)this + 0x10));
    for (uVar7 = param_3 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar4 = *param_2;
      param_2 = param_2 + 1;
      puVar4 = puVar4 + 1;
    }
    for (uVar7 = param_3 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)param_2;
      param_2 = (undefined4 *)((int)param_2 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    *(short *)((int)this + 0x72) = *(short *)((int)this + 0x72) + 1;
    if (*(short *)((int)this + 0x72) == *(short *)((int)this + 0x6a)) {
      local_8 = FUN_662d92e0((int)this);
    }
  }
  return local_8;
}


