/* Module: sfmarket2.dll
   Function: FUN_0047f7a0
   Address: 0047f7a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0047f7a0(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  ushort uVar2;
  undefined2 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 local_8;
  byte local_4 [4];
  
  uVar4 = param_1[0x18];
  if ((uVar4 & 1) == 0) {
    FUN_0047e340(param_1,"Missing IHDR before bKGD");
  }
  else {
    if ((uVar4 & 4) != 0) {
      FUN_0047e370((int)param_1,"Invalid bKGD after IDAT");
      FUN_0047e5b0(param_1,param_3);
      return;
    }
    if ((*(char *)((int)param_1 + 0x11e) == '\x03') && ((uVar4 & 2) == 0)) {
      FUN_0047e370((int)param_1,"Missing PLTE before bKGD");
      FUN_0047e5b0(param_1,param_3);
      return;
    }
    if ((param_2 != 0) && ((*(byte *)(param_2 + 8) & 0x20) != 0)) {
      FUN_0047e370((int)param_1,"Duplicate bKGD chunk");
      FUN_0047e5b0(param_1,param_3);
      return;
    }
  }
  if (*(byte *)((int)param_1 + 0x11e) == 3) {
    uVar4 = 1;
  }
  else {
    uVar4 = (uint)(*(byte *)((int)param_1 + 0x11e) & 2 | 1) << 1;
  }
  if (param_3 != uVar4) {
    FUN_0047e370((int)param_1,"Incorrect bKGD chunk length");
    FUN_0047e5b0(param_1,param_3);
    return;
  }
  FUN_0047e580(param_1,(byte *)&local_8,uVar4);
  iVar5 = FUN_0047e5b0(param_1,0);
  if (iVar5 != 0) {
    return;
  }
  if (*(byte *)((int)param_1 + 0x11e) == 3) {
    *(char *)(param_1 + 0x4b) = (char)local_8;
    iVar1 = (local_8 & 0xff) * 3;
    iVar5 = iVar1 + param_1[0x43];
    *(ushort *)((int)param_1 + 0x12d) = (ushort)*(byte *)(iVar1 + param_1[0x43]);
    *(ushort *)((int)param_1 + 0x12f) = (ushort)*(byte *)(iVar5 + 1);
    uVar2 = (ushort)*(byte *)(iVar5 + 2);
  }
  else {
    if ((*(byte *)((int)param_1 + 0x11e) & 2) == 0) {
      iVar5 = FUN_0047e560((byte *)&local_8);
      uVar3 = (undefined2)iVar5;
      *(undefined2 *)((int)param_1 + 0x133) = uVar3;
      *(undefined2 *)((int)param_1 + 0x131) = uVar3;
      *(undefined2 *)((int)param_1 + 0x12f) = uVar3;
      *(undefined2 *)((int)param_1 + 0x12d) = uVar3;
      goto LAB_0047f93e;
    }
    iVar5 = FUN_0047e560((byte *)&local_8);
    *(short *)((int)param_1 + 0x12d) = (short)iVar5;
    iVar5 = FUN_0047e560((byte *)((int)&local_8 + 2));
    *(short *)((int)param_1 + 0x12f) = (short)iVar5;
    iVar5 = FUN_0047e560(local_4);
    uVar2 = (ushort)iVar5;
  }
  *(ushort *)((int)param_1 + 0x131) = uVar2;
LAB_0047f93e:
  FUN_00455d50((int)param_1,param_2,param_1 + 0x4b);
  return;
}


