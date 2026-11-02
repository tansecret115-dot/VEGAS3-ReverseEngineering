/* Module: rmme3260.dll
   Function: FUN_6625d930
   Address: 6625d930
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6625d930(void *this,uint param_1)

{
  undefined4 *puVar1;
  int iVar2;
  ulonglong uVar3;
  ushort uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  undefined4 local_1c;
  void *local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  uint local_8;
  
  iVar9 = 0;
  (**(code **)(**(int **)((int)this + 0x44) + 4))();
  if (param_1 != 0) {
    *(undefined4 *)((int)this + 0xb8) = 0;
    *(undefined4 *)((int)this + 0xb4) = 0;
  }
  if (*(int *)((int)this + 0xa0) == 0) {
    if (*(short *)((int)this + 0x3a) == 1) {
      puVar1 = *(undefined4 **)((int)this + 0x84);
      iVar8 = puVar1[3];
      iVar2 = puVar1[2];
      local_c = CONCAT22(local_c._2_2_,*(undefined2 *)(puVar1 + 6));
      if (iVar8 - iVar2 < 0) {
        uVar5 = (uint)*(ushort *)(puVar1 + 5);
      }
      else {
        uVar5 = 0;
      }
      uVar4 = (**(code **)*puVar1)();
      uVar3 = (ulonglong)((local_c - ((iVar8 - iVar2) + uVar5)) - 1 & 0xffff) /
              (ulonglong)(longlong)(int)(uint)uVar4;
      param_1 = (uint)uVar3;
      if (((short)uVar3 != 0) && (uVar5 = FUN_66258800((int)this), uVar5 != 0)) {
        if (uVar5 < (param_1 & 0xffff)) {
          param_1 = uVar5;
        }
        if (*(int *)((int)this + 0xb8) == 0) {
          iVar9 = (**(code **)(**(int **)((int)this + 0x36) + 0x30))
                            (*(undefined4 *)((int)this + 0x88),&param_1);
          if ((*(int *)((int)this + 0xb4) == 0) || (iVar9 != -0x7ffbffb2)) {
            uVar6 = 0;
          }
          else {
            uVar6 = 1;
          }
          *(undefined4 *)((int)this + 0xb8) = uVar6;
          *(uint *)((int)this + 0xb4) = (uint)(iVar9 == -0x7ffbffb2);
        }
        else {
          iVar9 = -0x7ffbffb2;
        }
        if ((iVar9 == 0) && ((short)param_1 != 0)) {
          FUN_66258950(this,param_1 & 0xffff);
          (**(code **)(**(int **)((int)this + 0x84) + 0x10))
                    (*(undefined4 *)((int)this + 0x88),param_1);
        }
      }
      if (*(int *)((int)this + 0xa8) == 0) {
        puVar1 = *(undefined4 **)((int)this + 0x84);
        iVar8 = puVar1[3];
        iVar2 = puVar1[2];
        if (iVar8 - iVar2 < 0) {
          uVar5 = (uint)*(ushort *)(puVar1 + 5);
        }
        else {
          uVar5 = 0;
        }
        uVar4 = (**(code **)*puVar1)();
        if ((short)((ulonglong)((iVar8 - iVar2) + uVar5 & 0xffff) /
                   (ulonglong)(longlong)(int)(uint)uVar4) != 0) {
          local_14 = 0;
          local_10 = 0;
          *(undefined4 *)((int)this + 0xa8) = 1;
          local_1c = 0x467;
          local_18 = this;
          (**(code **)(**(int **)((int)this + 0x40) + 0x24))
                    (&local_1c,*(undefined4 *)((int)this + 0x98));
        }
      }
    }
    else {
      local_8 = 0;
      local_c = 0;
      while( true ) {
        param_1 = 0;
        if (*(int *)((int)this + 0xb8) == 0) {
          iVar9 = (**(code **)(**(int **)((int)this + 0x36) + 0x34))(&param_1,&local_8,&local_c);
          if ((*(int *)((int)this + 0xb4) == 0) || (iVar9 != -0x7ffbffb2)) {
            uVar6 = 0;
          }
          else {
            uVar6 = 1;
          }
          *(undefined4 *)((int)this + 0xb8) = uVar6;
          *(uint *)((int)this + 0xb4) = (uint)(iVar9 == -0x7ffbffb2);
        }
        else {
          iVar9 = -0x7ffbffb2;
        }
        if (iVar9 != 0) break;
        if (param_1 != 0) {
          puVar7 = operator_new(10);
          *puVar7 = param_1;
          puVar7[1] = local_8;
          *(undefined2 *)(puVar7 + 2) = (undefined2)local_c;
          FUN_66250b60((void *)((int)this + 0x58),puVar7);
        }
      }
      if (*(int *)((int)this + 0xa8) == 0) {
        if (this == (void *)0xffffffa8) {
          iVar8 = 0;
        }
        else {
          iVar8 = *(int *)((int)this + 0x68);
        }
        if (0 < iVar8) {
          *(undefined4 *)((int)this + 0xa8) = 1;
          local_1c = 0x467;
          local_14 = 0;
          local_10 = 0;
          local_18 = this;
          (**(code **)(**(int **)((int)this + 0x40) + 0x24))
                    (&local_1c,*(undefined4 *)((int)this + 0x98));
        }
      }
    }
    if ((*(int *)((int)this + 0xc) == 0) && (iVar9 != 0)) {
      iVar9 = FUN_6625dfb0(iVar9);
      *(int *)((int)this + 0xc) = iVar9;
    }
    if ((*(int *)((int)this + 0xa8) == 0) && (*(int *)((int)this + 0xc) != 0)) {
      *(undefined4 *)((int)this + 0xa8) = 1;
      local_1c = 0x467;
      local_14 = 0;
      local_10 = 0;
      local_18 = this;
      (**(code **)(**(int **)((int)this + 0x40) + 0x24))
                (&local_1c,*(undefined4 *)((int)this + 0x98));
    }
  }
  (**(code **)(**(int **)((int)this + 0x44) + 8))();
  return;
}


