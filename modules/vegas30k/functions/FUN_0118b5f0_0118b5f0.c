/* Module: vegas30k.dll
   Function: FUN_0118b5f0
   Address: 0118b5f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0118b5f0(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
    return -0x7fff0001;
  }
  if (param_3 == 1) {
    if (param_2 == 0) {
      if ((*(uint *)(param_1 + 0x54) & 0x200000) != 0) {
        FUN_0118f2c0();
      }
      *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) & 0xffdfffff;
      iVar1 = FUN_0118f180();
      if (-1 < iVar1) {
        *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) & 0xffefffff;
      }
    }
    else {
      uVar2 = FUN_01177b20();
      iVar1 = FUN_0118eed0(uVar2);
      if ((-1 < iVar1) &&
         (*(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) | 0x100000,
         (*(uint *)(param_1 + 0x50) & 0x22) != 0)) {
        uVar2 = FUN_01177b20();
        iVar1 = FUN_0118f1f0(uVar2);
        if (-1 < iVar1) {
          *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) | 0x200000;
          return iVar1;
        }
        FUN_0118f180();
        *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) & 0xffefffff;
        return iVar1;
      }
    }
  }
  else {
    if (param_3 != 2) {
      return -0x7fffbfff;
    }
    if (param_2 == 0) {
      if ((*(uint *)(param_1 + 0x54) & 0x800000) != 0) {
        FUN_0118e250();
      }
      *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) & 0xff7fffff;
      iVar1 = FUN_0118e130();
      if (-1 < iVar1) {
        *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) & 0xffbfffff;
        return iVar1;
      }
    }
    else {
      uVar2 = FUN_01177b20();
      iVar1 = FUN_0118e070(uVar2);
      if ((-1 < iVar1) &&
         (*(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) | 0x400000,
         (*(byte *)(param_1 + 0x5c) & 2) != 0)) {
        uVar3 = 1;
        uVar2 = FUN_01177b20(1);
        iVar1 = FUN_0118e160(uVar2,uVar3);
        if (-1 < iVar1) {
          *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) | 0x800000;
          return iVar1;
        }
        FUN_0118f180();
        *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) & 0xffbfffff;
        return iVar1;
      }
    }
  }
  return iVar1;
}


