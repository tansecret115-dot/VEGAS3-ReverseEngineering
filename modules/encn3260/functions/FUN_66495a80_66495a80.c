/* Module: encn3260.dll
   Function: FUN_66495a80
   Address: 66495a80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_66495a80(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,
            undefined4 *param_4,undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,
            int *param_8,int *param_9)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int local_24 [2];
  undefined8 local_1c;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if (*(int *)((int)this + 0x26) == 0) {
    return 0x40042;
  }
  *param_1 = *(undefined4 *)((int)this + 0x7a);
  *param_2 = *(undefined4 *)((int)this + 0x7e);
  *param_3 = *(undefined4 *)((int)this + 0x82);
  *param_4 = *(undefined4 *)((int)this + 0x17a);
  *param_5 = *(undefined4 *)((int)this + 0x17e);
  *param_9 = *(int *)((int)this + 0x19a);
  *param_8 = *(int *)((int)this + 0x19e);
  *param_6 = *(undefined4 *)((int)this + 0x192);
  *param_7 = *(undefined4 *)((int)this + 0x196);
  if (*(int *)((int)this + 0x36) == 0) {
    if (*(int *)((int)this + 0x4e) == 0) {
      if (*(int *)((int)this + 0x52) == 0) {
        *(undefined4 *)((int)this + (*(uint *)((int)this + 0x86) % 0x1e) * 4 + 0x102) =
             *(undefined4 *)((int)this + 0x7e);
        *(int *)((int)this + (*(uint *)((int)this + 0x86) % 0x1e) * 4 + 0x8a) =
             *(int *)((int)this + 0x17e) + *(int *)((int)this + 0x82) + *(int *)((int)this + 0x7e) +
             *(int *)((int)this + 0x7a);
        *param_9 = *(int *)((int)this + (*(uint *)((int)this + 0x86) % 0x1e) * 4 + 0x102) -
                   *(int *)((int)this + ((*(uint *)((int)this + 0x86) + 1) % 0x1e) * 4 + 0x102);
        *param_8 = *(int *)((int)this + (*(uint *)((int)this + 0x86) % 0x1e) * 4 + 0x8a) -
                   *(int *)((int)this + ((*(uint *)((int)this + 0x86) + 1) % 0x1e) * 4 + 0x8a);
        *(int *)((int)this + 0x19a) = *param_9;
        *(int *)((int)this + 0x19e) = *param_8;
        *(int *)((int)this + 0x86) = *(int *)((int)this + 0x86) + 1;
        (**(code **)(**(int **)this + 0x18))(*(int **)this,&local_1c);
        iVar6 = local_1c._4_4_;
        iVar5 = (int)local_1c;
        if (999999 < local_1c._4_4_) {
          iVar5 = local_1c._4_4_ / 1000000 + (int)local_1c;
          iVar6 = local_1c._4_4_ % 1000000;
        }
        piVar2 = (int *)FUN_66495f80(&local_14,(int *)((int)this + 0x1a6));
        local_c = iVar5 - *piVar2;
        for (local_8 = iVar6 - piVar2[1]; local_8 < 0; local_8 = local_8 + 1000000) {
          local_c = local_c + -1;
        }
        piVar2 = (int *)FUN_66495fc0(local_24,(int)this + 0x1a6);
        iVar5 = iVar5 - *piVar2;
        for (iVar6 = iVar6 - piVar2[1]; iVar6 < 0; iVar6 = iVar6 + 1000000) {
          iVar5 = iVar5 + -1;
        }
        local_14 = iVar5;
        local_10 = iVar6;
        FUN_66495e80(this,(int)this + 0x1a6);
        if (((-1 < local_c) && (((local_c != 0 || (0 < local_8)) && (-1 < iVar5)))) &&
           ((iVar5 != 0 || (0 < iVar6)))) {
          iVar5 = *(int *)((int)this + 0x186);
          uVar1 = *(uint *)((int)this + 0x182);
          local_1c = __allmul(uVar1,iVar5,8,0);
          uVar3 = ftol();
          *(undefined4 *)((int)this + 0x192) = uVar3;
          local_1c = __allmul(uVar1 - *(uint *)((int)this + 0x18a),
                              (iVar5 - *(int *)((int)this + 0x18e)) -
                              (uint)(uVar1 < *(uint *)((int)this + 0x18a)),8,0);
          uVar4 = ftol();
          *(undefined4 *)((int)this + 0x196) = uVar4;
          *param_6 = uVar3;
          *param_7 = *(undefined4 *)((int)this + 0x196);
          *(undefined4 *)((int)this + 0x18a) = *(undefined4 *)((int)this + 0x182);
          *(undefined4 *)((int)this + 0x18e) = *(undefined4 *)((int)this + 0x186);
          return 0;
        }
        return 0x80040009;
      }
      if (*(int *)((int)this + 0x52) != 0) {
        *(undefined4 *)((int)this + 0x52) = 0;
      }
    }
    return 0;
  }
  *(undefined4 *)((int)this + 0x192) = 0;
  *param_6 = 0;
  *(undefined4 *)((int)this + 0x196) = 0;
  *param_7 = 0;
  return 0;
}


