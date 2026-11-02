/* Module: mp3plug.dll
   Function: FUN_5f687ad0
   Address: 5f687ad0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f687ad0(int param_1)

{
  void *this;
  void *this_00;
  int iVar1;
  uint uVar2;
  int iVar3;
  int local_10 [2];
  int local_8;
  DWORD local_4;
  
  this_00 = DAT_5f74d2fc;
  this = DAT_5f74d2f8;
  if (param_1 == 1) {
    return DAT_5f74d308;
  }
  if (DAT_5f74d32c == 0) {
    DAT_5f74d308 = 0;
    return 0;
  }
  if (DAT_5f74d2fc == (void *)0x0) {
    DAT_5f74d308 = 0;
    DAT_5f74d334 = 0;
    return 0;
  }
  iVar1 = FUN_5f7212c0(DAT_5f74d2fc,local_10,&param_1,1);
  if (DAT_5f74d30c == 0) {
    if (iVar1 == -0x7ffb1ecb) {
      iVar1 = 0x4e130;
    }
    else if (iVar1 < 0) {
      DAT_5f74d334 = 0;
      DAT_5f74d33c = 0;
      DAT_5f74d308 = 0;
      DAT_5f74d338 = 0xffffff3c;
      DAT_5f74d340 = 0xfffffed8;
      return 0;
    }
  }
  else {
    iVar1 = 0;
  }
  if (((DAT_5f74d320 != 0) || (iVar1 == 0x4e12f)) || (this == (void *)0x0)) {
    iVar1 = -0x7fffbffb;
    DAT_5f74d33c = 0;
    DAT_5f74d340 = (-(uint)(DAT_5f74d310 != 0) & 5) - 0x12a;
  }
  iVar3 = -0x7fffbffb;
  if (((iVar1 < 0) || (DAT_5f74d320 != 0)) && ((DAT_5f74d314 == 0 && (DAT_5f74d318 == 0)))) {
LAB_5f687cb0:
    if (-1 < iVar1) {
      DAT_5f74d308 = 0xffffffff;
      DAT_5f74d334 = 1;
      DAT_5f74d338 = 200;
      return -1;
    }
  }
  else {
    if (this == (void *)0x0) {
      iVar1 = -0x7fffbffb;
    }
    else {
      iVar1 = FUN_5f7212c0(this,local_10,&param_1,1);
    }
    iVar3 = iVar1;
    if (DAT_5f74d31c == 0) {
      if ((iVar1 == 0x4e12e) || (iVar1 == 0x4e137)) goto LAB_5f687c34;
    }
    else if (iVar1 == 0x4e132) {
LAB_5f687c34:
      if (param_1 == 1) {
        DAT_5f74d33c = 0;
        DAT_5f74d340 = -0x127;
        goto LAB_5f687cb0;
      }
    }
    if ((DAT_5f74d324 == 0) && (DAT_5f74d328 == 0)) {
      if (DAT_5f74d33c == 0) goto LAB_5f687cb8;
    }
    else {
      DAT_5f74d33c = 1;
    }
    if ((iVar1 == -0x7ffb1ecb) || (iVar1 == 0x4e130)) {
      DAT_5f74d340 = 0x12d;
    }
    else {
      DAT_5f74d340 = (-(uint)(DAT_5f74d324 != 0) & 0xfffffffe) + 0x12e;
    }
  }
LAB_5f687cb8:
  local_10[1] = 4;
  uVar2 = FUN_5f722c30(this_00,(char *)0x0,"3",&local_4,(byte *)&local_8,(LPDWORD)(local_10 + 1));
  if ((((-1 < (int)uVar2) && (local_8 != 0)) && (DAT_5f74d314 == 0)) && (DAT_5f74d318 == 0)) {
    DAT_5f74d334 = 1;
    DAT_5f74d308 = local_8;
    DAT_5f74d338 = 0xc9;
    return local_8;
  }
  iVar1 = 0;
  DAT_5f74d308 = 0;
  DAT_5f74d334 = 0;
  if ((DAT_5f74d324 == 0) && (DAT_5f74d328 == 0)) {
    if (DAT_5f74d340 == -0x124) {
      DAT_5f74d338 = 0xffffff3e;
      return iVar1;
    }
    DAT_5f74d338 = (-(uint)(DAT_5f74d340 != -0x123) & 0xfffffffb) - 0xc1;
    return iVar1;
  }
  DAT_5f74d338 = 0xffffff3b;
  if (((DAT_5f74d324 != 0) || (DAT_5f74d328 != 0)) && (DAT_5f74d2f8 != (void *)0x0)) {
    if (iVar3 == -0x7ffb1ed3) {
      DAT_5f74d33c = 1;
      DAT_5f74d340 = (-(uint)(DAT_5f74d324 != 0) & 0xfffffffe) + 0x12e;
      return iVar1;
    }
    if ((iVar3 == -0x7ffb1ecb) || (iVar3 == 0x4e130)) {
      DAT_5f74d33c = 1;
      DAT_5f74d340 = 0x12d;
      return iVar1;
    }
  }
  return iVar1;
}


