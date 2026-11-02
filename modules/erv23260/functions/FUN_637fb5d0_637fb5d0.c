/* Module: erv23260.dll
   Function: FUN_637fb5d0
   Address: 637fb5d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_637fb5d0(void *this,uint *param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  undefined3 extraout_var;
  uint uVar4;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  int iVar5;
  uint *puVar6;
  uint local_14;
  uint local_10;
  uint local_c;
  int local_8;
  
  local_8 = 0;
  if ((*(int *)((int)this + 0x5c) == 0x15) || (*(int *)((int)this + 0x5c) == 0x16)) {
    iVar5 = FUN_637fccc0(this);
    if ((iVar5 == 0) && (iVar5 = FUN_637fcb10(this), iVar5 != 1)) {
      return 1;
    }
    FUN_637fca20(this,(int)param_1);
    *(undefined4 *)((int)this + 0xa8) = 0xffffffff;
    iVar5 = FUN_637fc660(this,0,&local_14,&local_10,&local_c,(int)param_1);
    if (iVar5 != 0) {
      switch(*(undefined4 *)((int)this + 0x9c)) {
      case 0:
        param_1[5] = 0;
        *(undefined4 *)((int)this + 0x68) = 0;
        break;
      case 1:
        param_1[5] = 0;
        *(undefined4 *)((int)this + 0x68) = 1;
        break;
      case 2:
        param_1[5] = 1;
        break;
      case 3:
        param_1[5] = 3;
      }
      param_1[0x1d] = *(uint *)((int)this + 0xa0);
      param_1[0x1e] = *(uint *)((int)this + 0xa4);
      *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)((int)this + 0xb0);
      *param_1 = *(uint *)((int)this + 0xac);
      *(undefined1 *)((int)param_1 + 0x92) = *(undefined1 *)((int)this + 0xb1);
      *(undefined1 *)((int)param_1 + 0x93) = *(undefined1 *)((int)this + 0xb2);
      if (param_1[5] != 0) {
        if (param_1[0xd] != 0) {
          param_1[0xd] = 0;
          return local_8;
        }
        return local_8;
      }
      return local_8;
    }
  }
  else {
    puVar6 = param_1;
    for (iVar5 = 0x3b; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    bVar1 = FUN_637fba00(this);
    if (CONCAT31(extraout_var,bVar1) != 0) {
      uVar4 = FUN_637fba20(this);
      *param_1 = uVar4 & 0xff;
      local_8 = FUN_637fba30(this,param_1 + 2,param_1 + 3,param_1 + 4,param_1 + 1);
      if (local_8 == 8) {
        iVar5 = FUN_637fcb10(this);
        if (iVar5 == 1) {
          FUN_637fff40((void *)((int)this + 0x18),param_1);
          return 0;
        }
        return 8;
      }
      if (local_8 != 0) {
        return local_8;
      }
      if (param_1[1] != 7) {
        param_1[0xd] = 0;
        param_1[6] = 0;
        param_1[7] = 0;
        param_1[8] = 0;
        param_1[0xe] = 0;
        param_1[0xf] = 0;
        param_1[0x10] = 0;
        param_1[0x11] = 0;
        param_1[0x12] = 0;
        param_1[0x13] = 0;
        iVar5 = FUN_637fbad0(this,param_1 + 5,param_1 + 6,param_1 + 7,param_1 + 8,param_1 + 9);
        if (iVar5 == 0) {
          return 1;
        }
        return local_8;
      }
      uVar4 = FUN_637fd3d0(this,3);
      *(char *)(param_1 + 10) = (char)uVar4;
      if (((((char)uVar4 == '\0') ||
           (bVar1 = FUN_637fbb50(this,param_1 + 0xb,param_1 + 0xc,param_1 + 6,param_1 + 7,
                                 param_1 + 8,param_1 + 0xd,param_1 + 0xe,param_1 + 0xf,
                                 param_1 + 0x10,param_1 + 0x11,param_1 + 0x12,param_1 + 0x13),
           CONCAT31(extraout_var_00,bVar1) != 0)) &&
          (bVar1 = FUN_637fbc70(this,param_1 + 5,param_1 + 0x14,param_1 + 0x1c,param_1 + 0x1d),
          CONCAT31(extraout_var_01,bVar1) != 0)) &&
         (bVar2 = FUN_637fd5c0((int)this), CONCAT31(extraout_var_02,bVar2) == 0)) {
        if ((char)param_1[10] != '\0') {
          if (param_1[0xb] == 6) {
            FUN_637fbce0(this,(undefined1 *)(param_1 + 0x1f));
          }
          if ((char)param_1[10] != '\0') {
            if (param_1[6] != 0) {
              uVar4 = FUN_637fbd40((int)this);
              param_1[0x22] = uVar4;
            }
            if (((char)param_1[10] != '\0') && (param_1[0xf] != 0)) {
              cVar3 = FUN_637fbd60(this);
              *(char *)(param_1 + 0x23) = cVar3;
              if (cVar3 != '\0') {
                return 1;
              }
            }
          }
        }
        uVar4 = param_1[5];
        if (((uVar4 == 3) || (uVar4 == 4)) || (uVar4 == 5)) {
          uVar4 = FUN_637fd3d0(this,4);
          *(char *)((int)param_1 + 0x8d) = (char)uVar4 + -1;
        }
        else {
          *(undefined1 *)((int)param_1 + 0x8d) = 0;
        }
        if (((char)param_1[10] != '\0') &&
           (((uVar4 = param_1[5], uVar4 == 3 || (uVar4 == 4)) || (uVar4 == 5)))) {
          uVar4 = FUN_637fd3d0(this,4);
          *(char *)((int)param_1 + 0x8e) = (char)uVar4 + -1;
          return local_8;
        }
        *(undefined1 *)((int)param_1 + 0x8e) = 0;
        return local_8;
      }
    }
  }
  return 1;
}


