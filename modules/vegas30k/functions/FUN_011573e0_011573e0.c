/* Module: vegas30k.dll
   Function: FUN_011573e0
   Address: 011573e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_011573e0(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined2 uVar3;
  ushort uVar4;
  int iVar5;
  undefined4 local_8;
  undefined1 local_4 [4];
  
  uVar1 = *(uint *)(param_1 + 0x60);
  if ((uVar1 & 1) == 0) {
    FUN_01155f80(param_1,"Missing IHDR before bKGD");
  }
  else {
    if ((uVar1 & 4) != 0) {
      FUN_01155fb0(param_1,"Invalid bKGD after IDAT");
      FUN_011561f0(param_1,param_3);
      return;
    }
    if ((*(char *)(param_1 + 0x11e) == '\x03') && ((uVar1 & 2) == 0)) {
      FUN_01155fb0(param_1,"Missing PLTE before bKGD");
      FUN_011561f0(param_1,param_3);
      return;
    }
    if ((param_2 != 0) && ((*(byte *)(param_2 + 8) & 0x20) != 0)) {
      FUN_01155fb0(param_1,"Duplicate bKGD chunk");
      FUN_011561f0(param_1,param_3);
      return;
    }
  }
  if (*(byte *)(param_1 + 0x11e) == 3) {
    iVar5 = 1;
  }
  else {
    iVar5 = (uint)(*(byte *)(param_1 + 0x11e) & 2 | 1) << 1;
  }
  if (param_3 != iVar5) {
    FUN_01155fb0(param_1,"Incorrect bKGD chunk length");
    FUN_011561f0(param_1,param_3);
    return;
  }
  FUN_011561c0(param_1,&local_8,iVar5);
  iVar5 = FUN_011561f0(param_1,0);
  if (iVar5 != 0) {
    return;
  }
  if (*(byte *)(param_1 + 0x11e) == 3) {
    *(char *)(param_1 + 300) = (char)local_8;
    iVar2 = (local_8 & 0xff) * 3;
    iVar5 = iVar2 + *(int *)(param_1 + 0x10c);
    *(ushort *)(param_1 + 0x12d) = (ushort)*(byte *)(iVar2 + *(int *)(param_1 + 0x10c));
    *(ushort *)(param_1 + 0x12f) = (ushort)*(byte *)(iVar5 + 1);
    uVar4 = (ushort)*(byte *)(iVar5 + 2);
  }
  else {
    if ((*(byte *)(param_1 + 0x11e) & 2) == 0) {
      uVar3 = FUN_011561a0(&local_8);
      *(undefined2 *)(param_1 + 0x133) = uVar3;
      *(undefined2 *)(param_1 + 0x131) = uVar3;
      *(undefined2 *)(param_1 + 0x12f) = uVar3;
      *(undefined2 *)(param_1 + 0x12d) = uVar3;
      goto LAB_0115757e;
    }
    uVar3 = FUN_011561a0(&local_8);
    *(undefined2 *)(param_1 + 0x12d) = uVar3;
    uVar3 = FUN_011561a0((int)&local_8 + 2);
    *(undefined2 *)(param_1 + 0x12f) = uVar3;
    uVar4 = FUN_011561a0(local_4);
  }
  *(ushort *)(param_1 + 0x131) = uVar4;
LAB_0115757e:
  FUN_01127f40(param_1,param_2,param_1 + 300);
  return;
}


