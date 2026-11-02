/* Module: vidcap30.exe
   Function: FUN_00451780
   Address: 00451780
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00451780(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_8;
  undefined4 local_4;
  
  if ((*(byte *)(param_5 + 0x18) & 1) == 0) {
    FUN_00416b00(param_5,0);
    iVar1 = riff64_WriteFileID(param_1,DAT_0058bcc8,DAT_0058bccc,DAT_0058bcd0,DAT_0058bcd4,0,0);
    if (iVar1 < 0) {
      return iVar1;
    }
    iVar1 = riff64_PrepareChunk(param_1,DAT_0058bd58,DAT_0058bd5c,DAT_0058bd60,DAT_0058bd64,&local_8
                               );
    if (iVar1 < 0) {
      return iVar1;
    }
    iVar1 = FUN_004519c0(param_2,0);
    if (iVar1 < 0) {
      return iVar1;
    }
    iVar1 = riff64_CompleteChunk(param_1,local_8,local_4);
    if (iVar1 < 0) {
      return iVar1;
    }
    if (*(int *)(param_5 + 0x138) == 0) {
      if ((*(byte *)(param_5 + 0x18) & 1) != 0) {
        return -0x7ffb1ff4;
      }
      uVar2 = 0x14;
    }
    else {
      if ((*(byte *)(param_5 + 0x18) & 1) != 0) {
        return -0x7ffb1ff4;
      }
      uVar2 = 2;
    }
    FUN_00416b00(param_5,uVar2);
    iVar1 = FUN_00452000(param_1,param_2,param_3 + 0x1c0);
    if (iVar1 < 0) {
      return iVar1;
    }
    if (*(int *)(param_5 + 0x138) == 0) {
      if ((*(byte *)(param_5 + 0x18) & 1) != 0) {
        return -0x7ffb1ff4;
      }
      uVar2 = 0x28;
    }
    else {
      if ((*(byte *)(param_5 + 0x18) & 1) != 0) {
        return -0x7ffb1ff4;
      }
      uVar2 = 2;
    }
    FUN_00416b00(param_5,uVar2);
    iVar1 = FUN_00451c00(param_1,param_2,*(undefined4 *)(param_3 + 0x1cc),DAT_0058bcd8,DAT_0058bcdc,
                         DAT_0058bce0,DAT_0058bce4,param_5,0,0x40440000,0,0x404e0000);
    if (iVar1 < 0) {
      return iVar1;
    }
    if (*(int *)(param_5 + 0x138) == 0) {
      if ((*(byte *)(param_5 + 0x18) & 1) != 0) {
        return -0x7ffb1ff4;
      }
      uVar2 = 0x3c;
    }
    else {
      if ((*(byte *)(param_5 + 0x18) & 1) != 0) {
        return -0x7ffb1ff4;
      }
      uVar2 = 2;
    }
    FUN_00416b00(param_5,uVar2);
    iVar1 = FUN_00451b30(param_1,param_2,*(undefined4 *)(*(int *)(param_3 + 0x1d0) + 0x10),
                         DAT_0058bd18,DAT_0058bd1c,DAT_0058bd20,DAT_0058bd24);
    if (iVar1 < 0) {
      return iVar1;
    }
    if (*(int *)(param_5 + 0x138) == 0) {
      if ((*(byte *)(param_5 + 0x18) & 1) != 0) {
        return -0x7ffb1ff4;
      }
      uVar2 = 0x50;
    }
    else {
      if ((*(byte *)(param_5 + 0x18) & 1) != 0) {
        return -0x7ffb1ff4;
      }
      uVar2 = 2;
    }
    FUN_00416b00(param_5,uVar2);
    iVar1 = riff64_CompleteChunk(param_1,0,0);
    if (iVar1 < 0) {
      return iVar1;
    }
    if ((*(byte *)(param_5 + 0x18) & 1) == 0) {
      FUN_00416b00(param_5,100);
      return 0;
    }
  }
  return -0x7ffb1ff4;
}


