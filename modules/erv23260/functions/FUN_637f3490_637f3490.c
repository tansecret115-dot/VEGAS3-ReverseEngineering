/* Module: erv23260.dll
   Function: FUN_637f3490
   Address: 637f3490
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_637f3490(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  void *local_8;
  
  puVar4 = param_1;
  uVar2 = 3;
  local_8 = this;
  switch(*param_1) {
  case 0x11:
    iVar1 = param_1[1];
    if (iVar1 == 2) {
      param_1[2] = *(undefined4 *)((int)this + 0x6c);
      return 0;
    }
    if (iVar1 == 0) {
      if (*(int *)((int)this + 0x2d8) == 0) {
        *(undefined4 *)((int)this + 0x6c) = 0;
        return 0;
      }
    }
    else {
      if (iVar1 != 1) {
        return 3;
      }
      if (*(int *)((int)this + 0x2d8) == 0) {
        *(undefined4 *)((int)this + 0x6c) = 1;
        return 0;
      }
    }
    break;
  case 0x12:
    iVar1 = param_1[1];
    if (iVar1 == 2) {
      param_1[2] = *(undefined4 *)((int)this + 0x70);
      return 0;
    }
    if (iVar1 == 0) {
      if (*(int *)((int)this + 0x2d0) == 0) {
        *(undefined4 *)((int)this + 0x70) = 0;
        return 0;
      }
    }
    else {
      if (iVar1 != 1) {
        return 3;
      }
      if (*(int *)((int)this + 0x2d0) == 0) {
        *(undefined4 *)((int)this + 0x70) = 1;
        return 0;
      }
    }
    break;
  default:
    if (*(int *)((int)this + 0x2c0) == 0) {
      return 3;
    }
    uVar2 = FUN_637f22d0();
    return uVar2;
  case 0x15:
    iVar1 = param_1[1];
    if (iVar1 == 2) {
      param_1[2] = *(undefined4 *)((int)this + 0x80);
      return 0;
    }
    if (iVar1 == 0) {
      if (*(int *)((int)this + 0x2cc) == 0) {
        *(undefined4 *)((int)this + 0x80) = 0;
        return 0;
      }
    }
    else {
      if (iVar1 != 1) {
        return 3;
      }
      if (*(int *)((int)this + 0x2cc) == 0) {
        *(undefined4 *)((int)this + 0x80) = 1;
        return 0;
      }
    }
    break;
  case 0x17:
    iVar1 = param_1[1];
    if (iVar1 == 2) {
      param_1[2] = *(undefined4 *)((int)this + 0x88);
      return 0;
    }
    if (iVar1 == 0) {
      if (*(int *)((int)this + 0x2ec) == 0) {
        *(undefined4 *)((int)this + 0x88) = 0;
        return 0;
      }
    }
    else {
      if (iVar1 != 1) {
        return 3;
      }
      if (*(int *)((int)this + 0x2ec) == 0) {
        *(undefined4 *)((int)this + 0x88) = 1;
        return 0;
      }
    }
    break;
  case 0x1a:
    uVar3 = param_1[1];
    *(undefined4 *)((int)this + 0x164) = 1;
    *(uint *)((int)this + 0xf4) = uVar3 & 1;
    *(uint *)((int)this + 0xfc) = (uint)param_1[1] >> 2 & 1;
    *(uint *)((int)this + 0x110) = (uint)param_1[1] >> 3 & 1;
    *(uint *)((int)this + 0x114) = (uint)param_1[1] >> 4 & 1;
    uVar3 = (uint)param_1[1] >> 5 & 1;
    *(uint *)((int)this + 0x118) = uVar3;
    if ((uVar3 != 0) && ((*(byte *)(param_1 + 1) & 0xc0) != 0)) {
      return 3;
    }
    *(undefined1 *)((int)this + 0x168) = 0;
    *(uint *)((int)this + 0x11c) = (uint)param_1[1] >> 8 & 1;
    *(uint *)((int)this + 0x120) = (uint)param_1[1] >> 9 & 1;
    *(uint *)((int)this + 0x124) = (uint)param_1[1] >> 10 & 1;
    *(uint *)((int)this + 0x128) = (uint)param_1[1] >> 0xb & 1;
    FUN_637f6ab0(*(void **)((int)this + 0x2c4),(uint)param_1[1] >> 0xd & 7);
    return 0;
  case 0x1c:
    if (param_1[2] != 0) {
      (**(code **)(*(int *)this + 0x44))(param_1[1] + 1,param_1[2]);
      return 0;
    }
    return 6;
  case 0x1e:
    if (param_1[1] == 2) {
      if (*(int *)((int)this + 0x2f0) == 0) {
        return 3;
      }
      param_1[2] = *(undefined4 *)(*(int *)((int)this + 0x2f0) + 0x1b00);
      return 0;
    }
    if (param_1[1] != 3) {
      return 3;
    }
    if (*(void **)((int)this + 0x2f0) == (void *)0x0) {
      return 3;
    }
    if (*(int *)((int)this + 0x2dc) != 0) {
      return 3;
    }
    uVar2 = FUN_637f6b40(*(void **)((int)this + 0x2f0),param_1[2]);
    return uVar2;
  case 0x20:
    if (param_1[1] == 2) {
      if (*(int *)((int)this + 0x2f0) != 0) {
        uVar2 = 0;
        param_1[2] = *(undefined4 *)(*(int *)((int)this + 0x2f0) + 0x1b04);
      }
      if (*(int *)((int)this + 0x2c4) == 0) {
        return uVar2;
      }
      param_1[2] = *(undefined4 *)(*(int *)((int)this + 0x2c4) + 0x1b04);
      return 0;
    }
    if (param_1[1] != 3) {
      return 3;
    }
    if ((*(void **)((int)this + 0x2f0) != (void *)0x0) && (*(int *)((int)this + 0x2d4) == 0)) {
      uVar2 = FUN_637f6ab0(*(void **)((int)this + 0x2f0),param_1[2]);
    }
    if (*(void **)((int)this + 0x2c4) == (void *)0x0) {
      return uVar2;
    }
    if (*(int *)((int)this + 0x2d4) != 0) {
      return uVar2;
    }
    uVar2 = FUN_637f6ab0(*(void **)((int)this + 0x2c4),puVar4[2]);
    return uVar2;
  case 0x24:
    if (8 < (uint)param_1[1]) {
      return 1;
    }
    *(undefined4 *)((int)this + 0x8c) = param_1[1];
    uVar3 = 0;
    if ((param_1[1] & 0x7fffffff) != 0) {
      puVar4 = (undefined4 *)((int)this + 0x90);
      do {
        uVar3 = uVar3 + 1;
        *puVar4 = *(undefined4 *)(param_1[2] + -4 + uVar3 * 4);
        puVar4 = puVar4 + 1;
      } while (uVar3 < (uint)(param_1[1] << 1));
      return 0;
    }
    break;
  case 0x25:
    uVar2 = FUN_637f8470(*(void **)((int)this + 0x2c0),(int)this + 0x1c8,0,&param_1,&local_8);
    puVar4[1] = param_1;
    puVar4[2] = local_8;
    return uVar2;
  case 100:
    return 3;
  case 0x65:
    param_1[1] = *(undefined4 *)((int)this + 700);
    return 0;
  case 0x69:
    if (*(int *)((int)this + 0x340) == 0) {
      return 6;
    }
    if (*(int *)((int)this + 0x338) != 0) {
      return 1;
    }
    param_1[1] = *(undefined4 *)(*(int *)((int)this + 0x340) + 0x110);
    param_1[2] = *(undefined4 *)(*(int *)((int)this + 0x340) + 0x118);
    return 0;
  case 0x6a:
    if (*(int *)((int)this + 0x348) == 0) {
      return 6;
    }
    if (*(int *)((int)this + 0x344) == 0) {
      return 6;
    }
    if (*(int *)((int)this + 0x338) == 0) {
      return 1;
    }
    param_1[1] = *(undefined4 *)(*(int *)((int)this + 0x348) + 0x110);
    param_1[2] = *(undefined4 *)(*(int *)((int)this + 0x348) + 0x114);
    param_1[4] = *(undefined4 *)(*(int *)((int)this + 0x348) + 0x118);
    param_1[3] = *(undefined4 *)(*(int *)((int)this + 0x344) + 0x110);
    param_1[5] = *(undefined4 *)(*(int *)((int)this + 0x344) + 0x118);
    break;
  case 0x6b:
    uVar2 = FUN_637f8e30(*(void **)((int)this + 0x2c0),&param_1,&local_8);
    puVar4[1] = param_1;
    puVar4[2] = local_8;
    return uVar2;
  }
  return 0;
}


