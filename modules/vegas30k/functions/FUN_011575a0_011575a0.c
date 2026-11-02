/* Module: vegas30k.dll
   Function: FUN_011575a0
   Address: 011575a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_011575a0(int param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x60);
  if ((uVar1 & 1) == 0) {
    FUN_01155f80(param_1,"Missing IHDR before hIST");
  }
  else {
    if ((uVar1 & 4) != 0) {
      FUN_01155fb0(param_1,"Invalid hIST after IDAT");
      FUN_011561f0(param_1,param_3);
      return;
    }
    if ((uVar1 & 2) == 0) {
      FUN_01155fb0(param_1,"Missing PLTE before hIST");
      FUN_011561f0(param_1,param_3);
      return;
    }
    if ((param_2 != 0) && ((*(byte *)(param_2 + 8) & 0x40) != 0)) {
      FUN_01155fb0(param_1,"Duplicate hIST chunk");
      FUN_011561f0(param_1,param_3);
      return;
    }
  }
  iVar4 = param_3;
  if (param_3 != (uint)*(ushort *)(param_1 + 0x110) * 2) {
    FUN_01155fb0(param_1,"Incorrect hIST chunk length");
    FUN_011561f0(param_1,iVar4);
    return;
  }
  iVar5 = param_3 / 2;
  uVar3 = FUN_01155eb0(param_1,iVar5 * 2);
  iVar4 = 0;
  *(undefined4 *)(param_1 + 0x1e1) = uVar3;
  *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) | 0x4000;
  if (0 < iVar5) {
    do {
      FUN_011561c0(param_1,&param_3,2);
      uVar2 = FUN_011561a0(&param_3);
      iVar4 = iVar4 + 1;
      *(undefined2 *)(*(int *)(param_1 + 0x1e1) + -2 + iVar4 * 2) = uVar2;
    } while (iVar4 < iVar5);
  }
  iVar4 = FUN_011561f0(param_1,0);
  if (iVar4 == 0) {
    FUN_01128010(param_1,param_2,*(undefined4 *)(param_1 + 0x1e1));
  }
  return;
}


