/* Module: rmme3260.dll
   Function: FUN_66224510
   Address: 66224510
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_66224510(void *this,uint param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int local_8;
  
  local_8 = 0;
  if (*(int *)((int)this + 0x88) == 0) {
    local_8 = FUN_6620aff0(this);
  }
  if ((local_8 == 0) && (*(int *)((int)this + 0x88) != 0)) {
    iVar1 = *(int *)(*(int *)((int)this + 4) + 0x20);
    iVar2 = *(int *)(*(int *)((int)this + 4) + 0x14);
    iVar3 = *(int *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 4);
    *(undefined4 *)((int)this + 0x7c) = 0;
    *(uint *)((int)this + 0x80) = param_1;
    *param_2 = param_1;
    *(undefined2 *)((int)this + 0xf5) = 0;
    uVar4 = ftol();
    uVar8 = *(int *)((int)this + 0x111) - *(int *)((int)this + 0xdf);
    if (uVar8 < uVar4) {
      uVar4 = uVar8;
    }
    if ((*(char *)((int)this + 0x12d) == '\0') || (*(ushort *)((int)this + 0xd8) < 4)) {
      uVar8 = *(uint *)((int)this + 0x105);
    }
    else {
      uVar8 = *(uint *)((int)this + 0xe3);
    }
    uVar5 = ftol();
    *param_2 = uVar5;
    *(uint *)((int)this + 0xef) = uVar5;
    *(undefined2 *)((int)this + 0x134) = 0;
    iVar6 = (**(code **)(**(int **)((int)this + 4) + 8))
                      ((uVar4 / uVar8) * uVar8 + *(int *)((int)this + 0xdf),0);
    if (iVar6 == 0) {
      if ((*(int **)((int)this + 4))[0x10] == 0x40040) {
        *(undefined4 *)((int)this + 0x84) = 0;
        *(undefined4 *)((int)this + 0x7c) = 1;
        (**(code **)(**(int **)((int)this + 4) + 8))((iVar2 - iVar3) + iVar1,0);
        return 0;
      }
      local_8 = -1;
    }
    if (local_8 == 0) {
      uVar7 = (**(code **)(*(int *)this + 0x70))((int)this + 0x17c,(int)this + 0x18a);
      *(undefined4 *)((int)this + 0x186) = uVar7;
      if (*(int **)((int)this + 0x1aa) != (int *)0x0) {
        if (*(uint *)((int)this + 0x1c4) != *param_2) {
          if (*param_2 < *(uint *)((int)this + 0x1c4)) {
            (**(code **)(**(int **)((int)this + 0x1aa) + 8))(*(undefined4 *)((int)this + 0x1c0),0);
            uVar7 = (**(code **)(*(int *)this + 0x6c))((int)this + 0x1ae,(int)this + 0x1bc);
            *(undefined4 *)((int)this + 0x1b8) = uVar7;
          }
          if (*(uint *)((int)this + 0x1ae) < *param_2) {
            do {
              uVar7 = (**(code **)(*(int *)this + 0x6c))
                                ((uint *)((int)this + 0x1ae),(int)this + 0x1bc);
              *(undefined4 *)((int)this + 0x1b8) = uVar7;
            } while (*(uint *)((int)this + 0x1ae) < *param_2);
          }
        }
      }
    }
    return local_8;
  }
  *(undefined4 *)((int)this + 0x7c) = 1;
  *(uint *)((int)this + 0x80) = param_1;
  *param_2 = param_1;
  return 0;
}


