/* Module: rmto3260.dll
   Function: FUN_662dafd0
   Address: 662dafd0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_662dafd0(void *this,int param_1,int *param_2,uint param_3,uint param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined1 local_64 [4];
  undefined2 local_60;
  undefined2 uStack_5e;
  undefined2 uStack_5c;
  uint local_5a;
  undefined1 local_54 [4];
  undefined2 uStack_50;
  undefined2 local_4e;
  undefined2 uStack_4c;
  short local_4a;
  undefined4 local_44 [3];
  uint local_38;
  undefined2 local_34;
  int local_32;
  undefined4 local_2c;
  undefined4 uStack_28;
  uint local_24;
  short sStack_20;
  undefined2 uStack_1e;
  uint local_1c;
  int local_18;
  uint local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  if (*(void **)((int)this + 0xc) == (void *)0x0) {
    return -0x7ffbfff7;
  }
  local_2c = 0;
  uStack_28 = 0;
  local_1c = 0;
  iVar2 = FUN_662d9e80(*(void **)((int)this + 0xc),&local_2c,&local_1c);
  local_8 = 0;
  if (-1 < iVar2) {
    iVar2 = (**(code **)(*param_2 + 0x6c))(param_2,*(undefined2 *)(param_1 + 4),param_4,&local_8);
  }
  if (-1 < iVar2) {
    sStack_20 = 0;
    uStack_1e = 0;
    local_24 = local_8;
    ceil((double)local_8 + (double)CONCAT44(uStack_28,local_2c));
    uVar3 = ftol();
    if (param_4 < uVar3) {
      if (local_8 == 0) {
        iVar2 = -0x7ffbfc2b;
      }
      if (-1 < iVar2) {
        iVar2 = (**(code **)(*param_2 + 0x6c))
                          (param_2,CONCAT22((short)((uint)&local_8 >> 0x10),
                                            *(undefined2 *)(param_1 + 4)),local_8 - 1,&local_8);
      }
    }
  }
  local_10 = 0;
  if (-1 < iVar2) {
    iVar2 = (**(code **)(*param_2 + 0x6c))
                      (param_2,CONCAT22((short)((uint)&local_10 >> 0x10),
                                        *(undefined2 *)(param_1 + 4)),0,&local_10);
  }
  local_c = 0;
  if (-1 < iVar2) {
    iVar2 = FUN_662daa30(this,&local_c);
  }
  if (-1 < iVar2) {
    iVar2 = FUN_662d9eb0(*(void **)((int)this + 0xc),param_3,param_4,param_3,local_8,
                         param_5 - local_c,local_10);
  }
  local_14 = 0;
  if (-1 < iVar2) {
    param_4 = 0;
    iVar2 = (**(code **)(*param_2 + 0x6c))(param_2,*(undefined2 *)(param_1 + 4),param_3,&local_14);
  }
  local_1c = 0;
  sStack_20 = *(short *)(param_1 + 4);
  do {
    if (iVar2 < 0) {
      return iVar2;
    }
    FUN_662e2a70(&local_38);
    FUN_662e2a70(local_44);
    uVar3 = 0;
    param_4 = 0;
    local_18 = 1;
    if (*(int *)(param_1 + 0x16) == 0) {
      iVar2 = (**(code **)(*param_2 + 0x2c))
                        (param_2,local_54,*(undefined4 *)((int)this + 4),
                         *(undefined4 *)((int)this + 8));
      uVar4 = param_4;
      if (-1 < iVar2) {
        uVar4 = CONCAT22(uStack_4c,local_4e);
        param_5 = CONCAT22(local_4e,uStack_50);
        uVar3 = (uint)(local_4a == *(short *)(*(int *)((int)this + 0x14) + 0x14));
        param_4 = uVar4;
      }
    }
    else {
      iVar2 = (**(code **)(*param_2 + 0x28))
                        (param_2,local_64,*(undefined4 *)((int)this + 4),
                         *(undefined4 *)((int)this + 8));
      uVar4 = param_4;
      if (-1 < iVar2) {
        param_5 = CONCAT22(uStack_5e,local_60);
        uVar3 = local_5a & 2;
        uVar4 = CONCAT22(uStack_5c,uStack_5e);
      }
    }
    if ((iVar2 < 0) || ((short)param_5 == sStack_20)) {
      if ((iVar2 == -0x7ffbfc36) || (((-1 < iVar2 && (local_8 < uVar4)) && (uVar3 != 0)))) {
        iVar2 = 0;
        local_1c = 1;
        local_18 = 0;
      }
      uVar3 = *(uint *)((int)this + 0x42);
      *(uint *)((int)this + 0x42) = uVar3 + 1;
      if (200 < uVar3) {
        if (iVar2 < 0) goto LAB_662db367;
        *(undefined4 *)((int)this + 0x42) = 0;
        param_4 = 0;
        if ((local_14 < local_8) && (local_14 < uVar4)) {
          param_4 = (uVar4 * 100 + local_14 * -100) / (local_8 - local_14);
        }
        if (100 < param_4) {
          param_4 = 100;
        }
        iVar5 = 0;
        if (0 < *(int *)((int)this + 0x36)) {
          do {
            if (iVar2 < 0) break;
            piVar1 = *(int **)(*(int *)((int)this + 0x32) + iVar5 * 4);
            iVar2 = (**(code **)(*piVar1 + 0xc))(piVar1);
            iVar5 = iVar5 + 1;
          } while (iVar5 < *(int *)((int)this + 0x36));
        }
      }
      if (-1 < iVar2) {
        if (local_18 != 0) {
          if (*(int *)(param_1 + 0x16) == 0) {
            local_38 = CONCAT22(uStack_4c,local_4e);
            uVar3 = (ushort)((local_4a != *(short *)(param_1 + 0x14)) - 1) & 2;
          }
          else {
            local_38 = CONCAT22(uStack_5c,uStack_5e);
            uVar3 = local_5a & 0xffff;
          }
          local_32 = uVar3 << 0x10;
          local_34 = 0;
          iVar2 = FUN_662d95a0(*(void **)((int)this + 0xc),&local_38,*(undefined4 **)((int)this + 4)
                               ,param_3);
        }
        if (-1 < iVar2) {
          while (iVar2 = FUN_662d9ab0(*(void **)((int)this + 0xc),&local_38,
                                      *(undefined4 **)((int)this + 4),*(uint *)((int)this + 8),
                                      &param_3), -1 < iVar2) {
            if (local_38 < *(uint *)((int)this + 0x2e)) {
              iVar2 = -0x7ffbfff7;
            }
            *(uint *)((int)this + 0x2e) = local_38;
            FUN_66301f30(2,s_0fWrite_Packet__lu__Output_Time__6630b1ae + 2);
            if (((iVar2 < 0) ||
                (iVar2 = (**(code **)(**(int **)((int)this + 0x10) + 0x2c))
                                   (&local_38,*(undefined4 *)((int)this + 4)), iVar2 < 0)) ||
               (*(undefined4 *)((int)this + 0x1c) = 1, iVar2 < 0)) break;
          }
          if (iVar2 == -0x7ffbfc2c) {
            iVar2 = 0;
          }
        }
      }
    }
LAB_662db367:
    if (local_1c != 0) {
      return iVar2;
    }
  } while( true );
}


