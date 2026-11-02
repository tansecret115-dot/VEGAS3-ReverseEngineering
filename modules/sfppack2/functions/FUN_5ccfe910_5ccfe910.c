/* Module: sfppack2.dll
   Function: FUN_5ccfe910
   Address: 5ccfe910
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_5ccfe910(void *this,undefined4 param_1,int *param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  
  *(undefined4 *)((int)this + 0x150) = 0;
  *(undefined4 *)((int)this + 0x158) = 0;
  if (((*param_2 == 0) && (*(int *)((int)this + 0x148) == 0)) && (*(int *)((int)this + 0x14c) == 0))
  {
    *param_4 = 0;
    return 1;
  }
  do {
    if (*(int *)((int)this + 0x148) == 1) {
      (**(code **)((int)this + 0x164))(param_3,param_4);
      if (*(int *)((int)this + 0x154) != *(int *)((int)this + 0x14c)) {
LAB_5ccfeb5e:
        *param_2 = *(int *)((int)this + 0x150);
        *param_4 = *(undefined4 *)((int)this + 0x158);
        return 0;
      }
      *(undefined4 *)((int)this + 0x154) = 0;
      *(undefined4 *)((int)this + 0x14c) = 0;
      *(undefined4 *)((int)this + 0x148) = 0;
      if (*(int *)((int)this + 0xe8) != 0) {
        *param_4 = *(undefined4 *)((int)this + 0x158);
        return 1;
      }
    }
    iVar1 = (**(code **)((int)this + 0x160))(param_1,param_2);
    if ((iVar1 == 0) && (*(int *)((int)this + 0xe8) == 0)) goto LAB_5ccfeb5e;
    iVar1 = *(int *)((int)this + 0x130);
    if (*(short *)(*(int *)((int)this + 0xd8) + 2) == 1) {
      if (*(double *)((int)this + 0x100) < *(double *)(iVar1 + 0x10)) {
        if (*(double *)((int)this + 0x100) < *(double *)(iVar1 + 0x28)) {
          *(undefined4 *)((int)this + 0xf0) = 0;
        }
      }
      else {
        *(undefined4 *)((int)this + 0xf0) = 2;
      }
      iVar1 = 0;
LAB_5ccfea04:
      (**(code **)((int)this + 0x168))(*(undefined4 *)((int)this + 0x14c),(int)this + 0xf0,iVar1);
    }
    else {
      if (*(int *)(iVar1 + 0x4c) != 0) {
        if (*(double *)((int)this + 0x100) < *(double *)((int)this + 0x120)) {
          *(undefined4 *)((int)this + 0x100) = *(undefined4 *)((int)this + 0x120);
          *(undefined4 *)((int)this + 0x104) = *(undefined4 *)((int)this + 0x124);
        }
        if (*(double *)((int)this + 0x100) < *(double *)(iVar1 + 0x10)) {
          if (*(double *)((int)this + 0x100) < *(double *)(iVar1 + 0x28)) {
            *(undefined4 *)((int)this + 0xf0) = 0;
          }
          iVar1 = (int)this + 0x110;
        }
        else {
          iVar1 = (int)this + 0x110;
          *(undefined4 *)((int)this + 0xf0) = 2;
        }
        goto LAB_5ccfea04;
      }
      if (*(double *)((int)this + 0x100) < *(double *)(iVar1 + 0x10)) {
        if (*(double *)((int)this + 0x100) < *(double *)(iVar1 + 0x28)) {
          *(undefined4 *)((int)this + 0xf0) = 0;
        }
      }
      else {
        *(undefined4 *)((int)this + 0xf0) = 2;
      }
      (**(code **)((int)this + 0x168))(*(undefined4 *)((int)this + 0x14c),(int)this + 0xf0,0);
      if (*(double *)((int)this + 0x120) < *(double *)(*(int *)((int)this + 0x130) + 0x10)) {
        if (*(double *)((int)this + 0x120) < *(double *)(*(int *)((int)this + 0x130) + 0x28)) {
          *(undefined4 *)((int)this + 0x110) = 0;
        }
      }
      else {
        *(undefined4 *)((int)this + 0x110) = 2;
      }
      (**(code **)((int)this + 0x168))(*(undefined4 *)((int)this + 0x14c),(int)this + 0x110,0);
    }
    *(undefined4 *)((int)this + 0x120) = 0;
    *(undefined4 *)((int)this + 0x100) = 0;
    *(undefined4 *)((int)this + 0x124) = 0;
    *(undefined4 *)((int)this + 0x104) = 0;
    *(undefined4 *)((int)this + 0x148) = 1;
  } while( true );
}


