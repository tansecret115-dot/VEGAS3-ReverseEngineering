/* Module: rmme3260.dll
   Function: FUN_66244cd0
   Address: 66244cd0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_66244cd0(int *param_1,int param_2,int *param_3,int *param_4)

{
  LONG *lpAddend;
  int *this;
  bool bVar1;
  LONG LVar2;
  int iVar3;
  undefined3 extraout_var;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined2 local_3c;
  undefined2 local_3a;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  LONG *local_10;
  int local_c;
  int local_8;
  
  this = param_1;
  lpAddend = (LONG *)((int)param_1 + 0x92b);
  local_10 = lpAddend;
  LVar2 = InterlockedIncrement(lpAddend);
  if (1 < LVar2) {
    InterlockedDecrement(lpAddend);
    return 0;
  }
  local_c = FUN_662352f0(*(int *)((int)param_1 + 0x3b));
  if (local_c == 0) {
    InterlockedDecrement(lpAddend);
    return 0x80040009;
  }
  iVar6 = param_4[2] - *param_4;
  local_8 = param_4[3] - param_4[1];
  if ((iVar6 * 2 != param_3[2] - *param_3) ||
     (param_1 = (int *)0x1, local_8 * 2 != param_3[3] - param_3[1])) {
    param_1 = (int *)0x0;
  }
  if (((*(byte *)((int)this + 0x26) & 1) == 0) &&
     ((**(code **)(*this + 0x10))(this,local_c), (*(byte *)((int)this + 0x26) & 1) == 0)) {
    InterlockedDecrement(local_10);
    return 0x80040009;
  }
  (**(code **)(**(int **)((int)this + 0x933) + 8))();
  if ((*(byte *)((int)this + 0x26) & 2) == 2) {
    if (((*(int **)((int)this + 0x47b) != param_1) &&
        (uVar4 = *(uint *)((int)this + 0x487), (uVar4 & 2) != 0)) &&
       (((uVar4 & 8) == 0 || ((uVar4 & 0x10) == 0)))) {
      local_44 = *(undefined4 *)((int)this + 0x47);
      local_48 = *(undefined4 *)((int)this + 0x43);
      local_40 = *(undefined4 *)((int)this + 0x4b);
      local_3a = *(undefined2 *)((int)this + 0x51);
      local_3c = *(undefined2 *)((int)this + 0x4f);
      local_30 = *(undefined4 *)((int)this + 0x5b);
      local_38 = *(undefined4 *)((int)this + 0x53);
      local_34 = *(undefined4 *)((int)this + 0x57);
      local_24 = *(undefined4 *)((int)this + 0x67);
      local_2c = *(undefined4 *)((int)this + 0x5f);
      local_28 = *(undefined4 *)((int)this + 99);
      local_18 = *(undefined4 *)((int)this + 0x73);
      local_20 = *(undefined4 *)((int)this + 0x6b);
      local_1c = *(undefined4 *)((int)this + 0x6f);
      FUN_66244910((int)this);
      FUN_66244930(this,&local_48);
      goto LAB_66244e46;
    }
  }
  else {
LAB_66244e46:
    *(int **)((int)this + 0x47b) = param_1;
    FUN_66244b00((int)this);
  }
  if ((*(byte *)((int)this + 0x26) & 2) == 0) {
    InterlockedDecrement(local_10);
    (**(code **)(**(int **)((int)this + 0x933) + 4))();
    return 0x80004005;
  }
  iVar3 = FUN_66244c00();
  if (iVar3 != 0) {
    if (DAT_6627d080 != (void *)0x0) {
      FUN_66245e60(DAT_6627d080,this[4],this[5],this[6],this[7]);
    }
    *(int *)((int)this + 0x27) = this[4];
    *(int *)((int)this + 0x2b) = this[5];
    *(int *)((int)this + 0x2f) = this[6];
    *(int *)((int)this + 0x33) = this[7];
  }
  bVar1 = FUN_66244ca0();
  if (CONCAT31(extraout_var,bVar1) != 0) {
    if (DAT_6627d080 != (void *)0x0) {
      FUN_66245f20(DAT_6627d080,this[8],param_1);
    }
    *(int *)((int)this + 0x37) = this[8];
  }
  local_14 = 0;
  if (((DAT_6627d080 != (void *)0x0) &&
      ((float)_DAT_6626c808 < (float)this[8] - (float)_DAT_6626c800)) &&
     (*(int *)(local_c + 0x10) == 0x59555632)) {
    iVar3 = *(int *)(local_c + 4);
    pcVar7 = (char *)(iVar3 * param_4[1] + param_2 + *param_4);
    local_14 = 1;
    if (*pcVar7 == '\x01') {
      *pcVar7 = pcVar7[1];
    }
    else {
      uVar4 = FUN_66265ba0();
      if (uVar4 == 1) {
        if ((short)this[9] != 0) {
          local_10 = operator_new(iVar3 * 8 + 7);
          uVar5 = ftol();
          FUN_66246000(DAT_6627d080,pcVar7,pcVar7,iVar6,local_8,iVar3,local_10,uVar5);
          if (local_10 != (LONG *)0x0) {
            operator_delete(local_10);
          }
          goto LAB_66245002;
        }
      }
      else if ((short)this[9] != 0) {
        FUN_66245fd0(DAT_6627d080,pcVar7,local_8,iVar6,iVar3,this[8]);
        goto LAB_66245002;
      }
      FUN_66245fa0(DAT_6627d080,pcVar7,local_8,iVar6,iVar3,this[8]);
    }
  }
LAB_66245002:
  *(int *)((int)this + 0x903) = param_2;
  *(int *)((int)this + 0x90b) = param_4[1];
  *(int *)((int)this + 0x907) = *param_4;
  *(int *)((int)this + 0x90f) = param_4[2];
  *(int *)((int)this + 0x913) = param_4[3];
  *(int *)((int)this + 0x91b) = param_3[1];
  *(int *)((int)this + 0x917) = *param_3;
  *(int *)((int)this + 0x91f) = param_3[2];
  *(int *)((int)this + 0x923) = param_3[3];
  iVar6 = FUN_6624db70((undefined4 *)((int)this + 0x3f),(int *)((int)this + 0x903));
  if (local_14 != 0) {
    *(undefined1 *)(*(int *)(local_c + 4) * param_4[1] + param_2 + *param_4) = 1;
  }
  InterlockedDecrement((LONG *)((int)this + 0x92b));
  (**(code **)(**(int **)((int)this + 0x933) + 4))();
  return -(uint)(iVar6 != 0) & 0x80004005;
}


