/* Module: erv23260.dll
   Function: FUN_6381aac0
   Address: 6381aac0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_6381aac0(int param_1,int param_2,int param_3,int param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 auStack_110 [64];
  
  iVar2 = 0x40;
  puVar3 = auStack_110;
  do {
    *puVar3 = DAT_638294f8;
    puVar3[1] = DAT_638294f8;
    *(undefined4 *)((int)puVar3 + iVar2) = 0;
    *(undefined4 *)((int)puVar3 + iVar2 + 4) = 0;
    *(undefined4 *)((int)puVar3 + iVar2 + 8) = 0;
    *(undefined4 *)((int)puVar3 + iVar2 + 0xc) = 0;
    *(undefined4 *)((int)puVar3 + iVar2 + 0x10) = 0;
    *(undefined4 *)((int)puVar3 + iVar2 + 0x14) = 0;
    puVar3 = puVar3 + 2;
    iVar2 = iVar2 + 0x10;
  } while (iVar2 < 0xc0);
  if ((param_5 & 1) == 0) {
    iVar2 = param_4;
    if (0x41 < param_2) {
      param_2 = param_2 + -0x41;
      iVar2 = param_3;
    }
    do {
      FUN_6381abe5((uint)*(byte *)(param_1 + -2 + param_2 * 4));
      param_2 = param_2 + -1;
    } while (param_2 != 0);
    if (iVar2 == param_4) {
      iVar2 = FUN_6381b310();
      return iVar2 + (int)puVar3;
    }
  }
  else {
    uVar1 = 0x3f;
    do {
      while (*(short *)(param_4 + uVar1 * 2) != 0) {
        FUN_6381abe5(uVar1);
        uVar1 = uVar1 - 1;
        if ((int)uVar1 < 0) goto LAB_6381abd5;
      }
      uVar1 = uVar1 - 1;
    } while (-1 < (int)uVar1);
  }
LAB_6381abd5:
  iVar2 = FUN_6381ad3a();
  return iVar2 + (int)puVar3;
}


