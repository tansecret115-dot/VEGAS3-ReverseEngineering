/* Module: vegas30.exe
   Function: FUN_00592130
   Address: 00592130
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00592130(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  iVar2 = *(int *)(param_3 + 0x34);
  iVar1 = *(int *)(param_1 + 0x6c);
  if (iVar2 == 0) {
    *(undefined4 *)(*(int *)(param_1 + 0xa0) + 8) = *(undefined4 *)(param_3 + 8);
    *(undefined4 *)(*(int *)(param_1 + 0xa0) + 0xc) = *(undefined4 *)(param_3 + 0xc);
    iVar2 = *(int *)(param_1 + 0xa0);
    *(undefined4 *)(iVar2 + 0x18) = *(undefined4 *)(param_3 + 0x18);
    *(undefined4 *)(iVar2 + 0x1c) = *(undefined4 *)(param_3 + 0x1c);
    iVar2 = *(int *)(param_1 + 0xa0);
    *(undefined4 *)(iVar2 + 0x20) = *(undefined4 *)(param_3 + 0x20);
    *(undefined4 *)(iVar2 + 0x24) = *(undefined4 *)(param_3 + 0x24);
    *(undefined4 *)(*(int *)(param_1 + 0xa0) + 0x28) = *(undefined4 *)(param_3 + 0x28);
    *(undefined4 *)(*(int *)(param_1 + 0xa0) + 0x2c) = *(undefined4 *)(param_3 + 0x28);
    *(uint *)(*(int *)(param_1 + 0xa0) + 0x30) =
         (uint)*(ushort *)(iVar1 + 0xc) * *(int *)(param_3 + 0x28);
    *(undefined4 *)(*(int *)(param_1 + 0xa0) + 0x34) = *(undefined4 *)(param_3 + 0x34);
    puVar5 = (undefined4 *)(*(int *)(param_1 + 0xa0) + 0x58);
    for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    *(undefined4 *)(*(int *)(param_1 + 0xa0) + 0x3c) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0xa0) + 0x44) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0xa0) + 0x40) = 0;
    puVar5 = (undefined4 *)(*(int *)(param_1 + 0xa0) + 0xa8);
    for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    *(undefined4 *)(*(int *)(param_1 + 0xa0) + 0x48) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0xa0) + 0x50) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0xa0) + 0x4c) = 0;
    iVar2 = *(int *)(param_1 + 0xa0);
    if (*(int *)(param_2 + 0x244) == 0) {
      iVar2 = FUN_00591890(param_2,*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(iVar2 + 0x100),
                           *(undefined4 *)(iVar2 + 0x2c),0,1);
      if (iVar2 == 0) {
        FUN_00595ba0(param_1,param_3);
        iVar2 = *(int *)(param_1 + 0xa0);
        FUN_00595450(param_1);
        return iVar2;
      }
      *(int *)(param_3 + 0x2c) = *(int *)(param_3 + 0x28);
      *(uint *)(param_3 + 0x30) = (uint)*(ushort *)(iVar1 + 0xc) * *(int *)(param_3 + 0x28);
      return param_3;
    }
    _SfAudio_FillSilence_12
              (*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(iVar2 + 0x100),
               *(undefined4 *)(iVar2 + 0x2c));
    FUN_00595ba0(param_1,param_3);
    iVar2 = *(int *)(param_1 + 0xa0);
    FUN_00595450(param_1);
    *(undefined4 *)(iVar2 + 0x38) = 1;
    return iVar2;
  }
  if (iVar2 == 1) {
    if (*(int *)(*(int *)(param_3 + 0x3c) + 0x18) != 0) {
      FUN_00591b40(param_1,param_2,param_3);
LAB_0059230e:
      if (*(int *)(param_2 + 0x244) == 0) {
        FUN_00591890(param_2,*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_3 + 0x100),
                     *(undefined4 *)(param_3 + 0x2c),0,0);
        return param_3;
      }
      *(undefined4 *)(param_3 + 0x38) = 1;
      return param_3;
    }
    puVar5 = *(undefined4 **)(param_3 + 0x100);
  }
  else {
    if (iVar2 != 2) {
      return param_3;
    }
    if ((*(int *)(*(int *)(param_3 + 0x3c) + 0x18) != 0) &&
       (*(int *)(*(int *)(param_3 + 0x48) + 0x18) != 0)) {
      FUN_00591d10(param_1,param_2,param_3);
      goto LAB_0059230e;
    }
    puVar5 = *(undefined4 **)(param_3 + 0x100);
  }
  if (puVar5 != (undefined4 *)0x0) {
    uVar4 = *(uint *)(param_3 + 0xf8);
    for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar5 = 0;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
  }
  return param_3;
}


