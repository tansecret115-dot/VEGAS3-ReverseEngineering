/* Module: vegas30.exe
   Function: FUN_005a07c0
   Address: 005a07c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005a07c0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int unaff_EBX;
  int iVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  float10 fVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  int in_stack_00000020;
  int *in_stack_00000024;
  uint uStack_6c;
  int iStack_68;
  uint local_64;
  int local_60;
  undefined8 local_50;
  int iStack_48;
  undefined8 uStack_24;
  undefined1 auStack_1c [12];
  undefined8 local_10;
  
  fVar8 = (float10)FUN_005b8c00(param_2,param_3);
  local_50 = (double)fVar8;
  lVar9 = ftol();
  iVar4 = (int)((ulonglong)lVar9 >> 0x20);
  lVar10 = ftol();
  iVar2 = (int)((ulonglong)lVar10 >> 0x20);
  local_64 = 1;
  if (in_stack_00000020 == 0) {
    auStack_1c._4_8_ = ftol();
    local_10 = ftol();
    _SfList_InsertList_16(param_1,0xffffffff,auStack_1c + 4,1);
    return 1;
  }
  (**(code **)(*in_stack_00000024 + 0x14))(in_stack_00000024,lVar10 - lVar9);
  uVar1 = CONCAT44(auStack_1c._4_4_,auStack_1c._0_4_);
  uVar11 = CONCAT44(uStack_24._4_4_,(undefined4)uStack_24);
  uStack_24 = CONCAT44(uStack_24._4_4_,(undefined4)uStack_24);
  auStack_1c._0_8_ = CONCAT44(auStack_1c._4_4_,auStack_1c._0_4_);
  if ((iVar4 <= iVar2) &&
     ((uVar6 = uStack_6c, uStack_24 = uVar11, auStack_1c._0_8_ = uVar1, iVar4 < iVar2 ||
      (local_50._4_4_ = (uint)((ulonglong)local_50 >> 0x20), bVar7 = uStack_6c < local_50._4_4_,
      bVar7)))) {
    while( true ) {
      iVar4 = (int)((ulonglong)lVar9 >> 0x20);
      local_60 = (int)lVar9;
      unaff_EBX = FUN_0059f400(uVar6,iVar4,0,0,param_3,0,0,0,0,0,0,0,2,in_stack_00000020,1,1);
      if (unaff_EBX < 0) goto LAB_005a0a9b;
      if (unaff_EBX == 0) {
        if ((local_64 != 0xffffffff) || (local_60 != -1)) {
          uVar11 = ftol();
          local_50 = (double)((ulonglong)local_50 & 0xffffffff00000000);
          uStack_24 = uVar11;
          uVar11 = ftol();
          auStack_1c._0_8_ = uVar11;
          _SfList_InsertList_16(param_1,0xffffffff,&uStack_24,1);
        }
        local_64 = 0xffffffff;
        local_60 = -1;
      }
      else if ((local_64 == 0xffffffff) && (local_60 == -1)) {
        local_64 = uVar6;
        local_60 = iVar4;
      }
      iVar2 = (**(code **)(*in_stack_00000024 + 0x18))
                        (in_stack_00000024,uVar6 - uStack_6c,
                         (iVar4 - iStack_68) - (uint)(uVar6 < uStack_6c));
      if (iVar2 != 0) break;
      bVar7 = 0xfffffffe < uVar6;
      uVar6 = uVar6 + 1;
      iVar4 = iVar4 + (uint)bVar7;
      lVar9 = CONCAT44(iVar4,local_60);
      if ((iStack_48 <= iVar4) &&
         ((iStack_48 < iVar4 || (lVar9 = CONCAT44(iVar4,local_60), local_50._4_4_ <= uVar6))))
      goto LAB_005a0a20;
    }
    _SfList_DeleteList_16(param_1,0,0xffffffff,0);
    unaff_EBX = iVar2;
LAB_005a0a20:
    if ((-1 < unaff_EBX) && ((local_64 != 0xffffffff || (local_60 != -1)))) {
      uVar11 = ftol();
      uStack_24 = uVar11;
      uVar11 = ftol();
      auStack_1c._0_8_ = uVar11;
      _SfList_InsertList_16(param_1,0xffffffff,&uStack_24,1);
    }
  }
LAB_005a0a9b:
  uVar6 = DAT_0064a8d0;
  if (DAT_0064a8d0 != 0) {
    iVar2 = 0;
    iVar4 = *param_1;
    if (0 < iVar4) {
      do {
        ftol();
        lVar9 = ftol();
        if ((-1 < lVar9) && ((0xffffffff < lVar9 || (uVar6 < (uint)lVar9)))) {
          _SfList_DeleteList_16(param_1,iVar2,1,0);
          iVar4 = iVar4 + -1;
          iVar3 = __alldiv(lVar9,uVar6,0);
          local_64 = __allrem(lVar9,uVar6,0);
          iVar5 = 0;
          if (0 < iVar3) {
            iVar4 = iVar4 + iVar3;
            do {
              __allmul(iVar5,iVar5 >> 0x1f,uVar6,0);
              uVar11 = ftol();
              uStack_24 = uVar11;
              if ((iVar5 == iVar3 + -1) && ((int)local_64 < 10)) {
                uVar11 = ftol();
                local_64 = 0;
              }
              else {
                uVar11 = ftol();
              }
              auStack_1c._0_8_ = uVar11;
              _SfList_InsertList_16(param_1,iVar2,&uStack_24,1);
              iVar2 = iVar2 + 1;
              iVar5 = iVar5 + 1;
            } while (iVar5 < iVar3);
          }
          if (local_64 != 0) {
            __allmul(iVar3,iVar3 >> 0x1f,uVar6,0);
            uVar11 = ftol();
            uStack_24 = uVar11;
            uVar11 = ftol();
            auStack_1c._0_8_ = uVar11;
            _SfList_InsertList_16(param_1,iVar2,&uStack_24,1);
            iVar2 = iVar2 + 1;
            iVar4 = iVar4 + 1;
          }
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar4);
    }
  }
  return unaff_EBX;
}


