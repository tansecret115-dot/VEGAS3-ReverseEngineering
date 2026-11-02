/* Module: sfmarket2.dll
   Function: FUN_0047f960
   Address: 0047f960
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0047f960(int *param_1,int param_2,uint param_3)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = param_1[0x18];
  if ((uVar1 & 1) == 0) {
    FUN_0047e340(param_1,"Missing IHDR before hIST");
  }
  else {
    if ((uVar1 & 4) != 0) {
      FUN_0047e370((int)param_1,"Invalid hIST after IDAT");
      FUN_0047e5b0(param_1,param_3);
      return;
    }
    if ((uVar1 & 2) == 0) {
      FUN_0047e370((int)param_1,"Missing PLTE before hIST");
      FUN_0047e5b0(param_1,param_3);
      return;
    }
    if ((param_2 != 0) && ((*(byte *)(param_2 + 8) & 0x40) != 0)) {
      FUN_0047e370((int)param_1,"Duplicate hIST chunk");
      FUN_0047e5b0(param_1,param_3);
      return;
    }
  }
  uVar1 = param_3;
  if (param_3 != (uint)*(ushort *)(param_1 + 0x44) * 2) {
    FUN_0047e370((int)param_1,"Incorrect hIST chunk length");
    FUN_0047e5b0(param_1,uVar1);
    return;
  }
  iVar5 = (int)param_3 / 2;
  pvVar2 = FUN_0047e270(param_1,iVar5 * 2);
  iVar4 = 0;
  *(void **)((int)param_1 + 0x1e1) = pvVar2;
  param_1[0x19] = param_1[0x19] | 0x4000;
  if (0 < iVar5) {
    do {
      FUN_0047e580(param_1,(byte *)&param_3,2);
      iVar3 = FUN_0047e560((byte *)&param_3);
      iVar4 = iVar4 + 1;
      *(short *)(*(int *)((int)param_1 + 0x1e1) + -2 + iVar4 * 2) = (short)iVar3;
    } while (iVar4 < iVar5);
  }
  iVar4 = FUN_0047e5b0(param_1,0);
  if (iVar4 == 0) {
    FUN_00455e20((int)param_1,param_2,*(undefined4 *)((int)param_1 + 0x1e1));
  }
  return;
}


