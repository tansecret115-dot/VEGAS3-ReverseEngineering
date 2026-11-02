/* Module: sfppack2.dll
   Function: FUN_5cd037a0
   Address: 5cd037a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_5cd037a0(void *this,undefined4 param_1,int *param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  if (((*param_2 == 0) && (*(int *)((int)this + 0x120) == 0)) && (*(int *)((int)this + 0x124) == 0))
  {
    *param_4 = 0;
    return 1;
  }
  do {
    if (*(int *)((int)this + 0x120) == 1) {
      (**(code **)((int)this + 0x13c))(param_3,param_4);
      if (*(int *)((int)this + 300) != *(int *)((int)this + 0x8c)) goto LAB_5cd03a03;
      *(undefined4 *)((int)this + 0x110) = 0;
      *(undefined4 *)((int)this + 0x108) = 0;
      *(undefined4 *)((int)this + 300) = 0;
      *(undefined4 *)((int)this + 0x124) = 0;
      *(undefined4 *)((int)this + 0x120) = 0;
      *(undefined4 *)((int)this + 0x114) = 0;
      *(undefined4 *)((int)this + 0x10c) = 0;
      if (*(int *)((int)this + 0x54) != 0) {
        *param_4 = *(undefined4 *)((int)this + 0x130);
        *(undefined4 *)((int)this + 0x8c) = *(undefined4 *)((int)this + 0xf4);
        return 1;
      }
    }
    (**(code **)((int)this + 0x138))(param_1,param_2);
    iVar1 = *(int *)((int)this + 0x124);
    if (iVar1 != *(int *)((int)this + 0x8c)) {
      if (*(int *)((int)this + 0x54) == 0) {
LAB_5cd03a03:
        *param_2 = *(int *)((int)this + 0x128);
        *param_4 = *(undefined4 *)((int)this + 0x130);
        return 0;
      }
      *(int *)((int)this + 0xf4) = *(int *)((int)this + 0x8c);
      *(int *)((int)this + 0x8c) = iVar1;
    }
    if ((1 < *(ushort *)(*(int *)((int)this + 0x44) + 2)) &&
       (*(double *)((int)this + 0x108) < *(double *)((int)this + 0x110))) {
      *(undefined4 *)((int)this + 0x108) = *(undefined4 *)((int)this + 0x110);
      *(undefined4 *)((int)this + 0x10c) = *(undefined4 *)((int)this + 0x114);
    }
    switch(*(undefined4 *)((int)this + 0x88)) {
    case 0:
      if (*(double *)((int)this + 0x78) <= *(double *)((int)this + 0x108)) {
        *(undefined4 *)((int)this + 0x88) = 2;
        *(int *)((int)this + 0x118) = iVar1;
      }
      break;
    case 2:
      iVar2 = *(int *)((int)this + 0x118) + iVar1;
      *(int *)((int)this + 0x118) = iVar2;
      if (*(double *)((int)this + 0x108) <= *(double *)((int)this + 0x80)) {
LAB_5cd03971:
        *(undefined4 *)((int)this + 0x88) = 0;
      }
      else if (*(int *)((int)this + 0x6c) <= iVar2) {
        *(undefined4 *)((int)this + 0x88) = 3;
      }
      break;
    case 3:
      if (*(double *)((int)this + 0x108) <= *(double *)((int)this + 0x80)) {
        *(undefined4 *)((int)this + 0x88) = 4;
        *(int *)((int)this + 0x11c) = iVar1;
      }
      break;
    case 4:
      iVar2 = *(int *)((int)this + 0x11c) + iVar1;
      *(int *)((int)this + 0x11c) = iVar2;
      if (*(double *)((int)this + 0x108) < *(double *)((int)this + 0x78)) {
        if (*(int *)((int)this + 0x68) <= iVar2) goto LAB_5cd03971;
      }
      else {
        *(undefined4 *)((int)this + 0x88) = 3;
      }
    }
    (**(code **)((int)this + 0x140))
              (*(undefined4 *)((int)this + 0xf8),*(undefined4 *)((int)this + 0x100),iVar1,
               *(undefined4 *)((int)this + 0x108),*(undefined4 *)((int)this + 0x10c));
    if (*(short *)(*(int *)((int)this + 0x44) + 2) == 2) {
      (**(code **)((int)this + 0x140))
                (*(undefined4 *)((int)this + 0xfc),*(undefined4 *)((int)this + 0x104),
                 *(undefined4 *)((int)this + 0x124),*(undefined4 *)((int)this + 0x108),
                 *(undefined4 *)((int)this + 0x10c));
    }
    *(undefined4 *)((int)this + 0x120) = 1;
  } while( true );
}


