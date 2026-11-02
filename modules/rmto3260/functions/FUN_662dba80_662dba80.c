/* Module: rmto3260.dll
   Function: FUN_662dba80
   Address: 662dba80
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_662dba80(void *this,int param_1,int *param_2,uint param_3,uint param_4,uint param_5)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined1 local_48 [4];
  short sStack_44;
  undefined2 local_42;
  undefined2 uStack_40;
  short local_3e;
  undefined1 local_38 [4];
  short sStack_34;
  undefined2 local_32;
  undefined2 uStack_30;
  ushort local_2e;
  uint local_2c;
  undefined2 local_28;
  undefined2 local_26;
  ushort local_24;
  short local_20;
  uint local_1c;
  uint local_18 [2];
  int local_10;
  uint local_c;
  int local_8;
  
  if ((*(int *)((int)this + 0x20) == 0) && (param_3 == 0)) {
    if (*(int *)((int)this + 0x9c) != 0) {
      param_4 = 0xffffffff;
    }
  }
  else if (*(int *)((int)this + 0x9c) != 0) {
    return -0x7ff8ffa9;
  }
  iVar3 = *(int *)((int)this + 0x18);
  if ((iVar3 != 3) && (iVar3 != 4)) {
    *(undefined4 *)((int)this + 0x1c) = 1;
  }
  local_c = 0;
  uVar5 = param_3;
  if (iVar3 == 3) {
    uVar5 = 0;
  }
  iVar3 = (**(code **)(*param_2 + 0x6c))
                    (param_2,*(undefined2 *)(param_1 + 4),uVar5,&local_c,&local_1c);
  local_10 = 1;
  local_20 = *(short *)(param_1 + 4);
LAB_662dbb14:
  do {
    do {
      do {
        if (iVar3 < 0) {
          return iVar3;
        }
        FUN_662e2a70(&local_2c);
        uVar5 = 0;
        if (*(int *)(param_1 + 0x16) == 0) {
          iVar3 = (**(code **)(*param_2 + 0x2c))
                            (param_2,local_48,*(undefined4 *)((int)this + 4),
                             *(undefined4 *)((int)this + 8),&local_8);
          if (-1 < iVar3) {
            uVar5 = CONCAT22(uStack_40,local_42);
            sVar2 = sStack_44;
            goto LAB_662dbb6b;
          }
          break;
        }
        iVar3 = (**(code **)(*param_2 + 0x28))(param_2,local_38);
        if (iVar3 < 0) break;
        uVar5 = CONCAT22(uStack_30,local_32);
        sVar2 = sStack_34;
LAB_662dbb6b:
      } while ((-1 < iVar3) && (sVar2 != local_20));
      if ((iVar3 == -0x7ffbfc36) ||
         ((((-1 < iVar3 && (param_4 != 0)) && (param_4 < uVar5)) &&
          (*(int *)((int)this + 0x18) != 3)))) {
        return 0;
      }
      uVar4 = *(uint *)((int)this + 0x42);
      *(uint *)((int)this + 0x42) = uVar4 + 1;
      if (200 < uVar4) {
        if (iVar3 < 0) {
          return iVar3;
        }
        uVar4 = 0;
        *(undefined4 *)((int)this + 0x42) = 0;
        if (((local_c < param_4) && (local_c < uVar5)) && (param_4 != 0)) {
          uVar4 = (uVar5 * 100 + local_c * -100) / (param_4 - local_c);
        }
        if (100 < uVar4) {
          uVar4 = 100;
        }
        iVar6 = 0;
        if (0 < *(int *)((int)this + 0x36)) {
          do {
            if (iVar3 < 0) break;
            piVar1 = *(int **)(*(int *)((int)this + 0x32) + iVar6 * 4);
            iVar3 = (**(code **)(*piVar1 + 0xc))(piVar1,uVar4);
            iVar6 = iVar6 + 1;
          } while (iVar6 < *(int *)((int)this + 0x36));
        }
      }
      if (iVar3 < 0) {
        return iVar3;
      }
      if (*(int *)(param_1 + 0x16) == 0) {
        local_2c = CONCAT22(uStack_40,local_42);
        local_24 = (local_3e != *(short *)(param_1 + 0x14)) - 1 & 2;
      }
      else {
        local_2c = CONCAT22(uStack_30,local_32);
        local_24 = local_2e;
      }
      local_26 = 0;
      local_28 = 0;
    } while ((local_2c < param_3) && (*(int *)((int)this + 0x18) != 3));
    if ((local_10 != 0) && (local_24 != 0)) {
      local_10 = 0;
    }
  } while (local_10 != 0);
  local_2c = local_2c + (param_5 - param_3);
  if (*(int *)((int)this + 0x18) == 4) {
    local_18[0] = 0;
    iVar3 = FUN_662c61f0(param_3 - param_5,*(undefined1 **)((int)this + 4),local_8,local_18,
                         (short *)((int)this + 0x2c));
    if (iVar3 < 0) {
      return iVar3;
    }
    if (local_18[0] == 0) goto LAB_662dbb14;
    if (local_2c < *(uint *)((int)this + 0x2e)) {
      iVar3 = -0x7ffbfff7;
    }
    *(uint *)((int)this + 0x2e) = local_2c;
    if (iVar3 < 0) {
      return iVar3;
    }
    iVar3 = (**(code **)(**(int **)((int)this + 0x10) + 0x2c))
                      (&local_2c,*(undefined4 *)((int)this + 4),local_8);
  }
  else {
    if (*(int *)((int)this + 0x18) != 3) {
      iVar3 = (**(code **)(**(int **)((int)this + 0x10) + 0x2c))
                        (&local_2c,*(undefined4 *)((int)this + 4),local_8);
      goto LAB_662dbb14;
    }
    local_18[0] = 0;
    local_1c = 0;
    iVar3 = FUN_662c63b0(param_3,param_4,param_5,*(undefined1 **)((int)this + 4),&local_8,local_18,
                         &local_1c,(short *)((int)this + 0x2c));
    if ((iVar3 < 0) || (local_18[0] == 0)) goto LAB_662dbb14;
    local_2c = local_1c;
    if (local_1c < *(uint *)((int)this + 0x2e)) {
      iVar3 = -0x7ffbfff7;
    }
    *(uint *)((int)this + 0x2e) = local_1c;
    if (iVar3 < 0) {
      return iVar3;
    }
    iVar3 = (**(code **)(**(int **)((int)this + 0x10) + 0x2c))
                      (&local_2c,*(undefined4 *)((int)this + 4),local_8);
  }
  if (iVar3 < 0) {
    return iVar3;
  }
  *(undefined4 *)((int)this + 0x1c) = 1;
  goto LAB_662dbb14;
}


