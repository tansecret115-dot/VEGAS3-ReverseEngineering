/* Module: vegas30k.dll
   Function: FUN_01156820
   Address: 01156820
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01156820(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 local_4;
  
  uVar1 = *(uint *)(param_1 + 0x60);
  local_4 = 0;
  if ((uVar1 & 1) == 0) {
    FUN_01155f80(param_1,"Missing IHDR before sBIT");
  }
  else {
    if ((uVar1 & 4) != 0) {
      FUN_01155fb0(param_1,"Invalid sBIT after IDAT");
      FUN_011561f0(param_1,param_3);
      return;
    }
    if ((uVar1 & 2) == 0) {
      if ((param_2 != 0) && ((*(byte *)(param_2 + 8) & 2) != 0)) {
        FUN_01155fb0(param_1,"Duplicate sBIT chunk");
        FUN_011561f0(param_1,param_3);
        return;
      }
    }
    else {
      FUN_01155fb0(param_1,"Out of place sBIT chunk");
    }
  }
  uVar1 = 3;
  if (*(char *)(param_1 + 0x11e) != '\x03') {
    uVar1 = (uint)*(byte *)(param_1 + 0x122);
  }
  if (param_3 != uVar1) {
    FUN_01155fb0(param_1,"Incorrect sBIT chunk length");
    FUN_011561f0(param_1,param_3);
    return;
  }
  FUN_011561c0(param_1,&local_4,uVar1);
  iVar2 = FUN_011561f0(param_1,0);
  if (iVar2 == 0) {
    if ((*(byte *)(param_1 + 0x11e) & 2) == 0) {
      *(undefined1 *)(param_1 + 0x171) = (undefined1)local_4;
      *(undefined1 *)(param_1 + 0x172) = local_4._1_1_;
    }
    else {
      *(undefined1 *)(param_1 + 0x16e) = (undefined1)local_4;
      *(undefined1 *)(param_1 + 0x16f) = local_4._1_1_;
      *(undefined1 *)(param_1 + 0x170) = local_4._2_1_;
      *(undefined1 *)(param_1 + 0x172) = local_4._3_1_;
    }
    FUN_011282f0(param_1,param_2,param_1 + 0x16e);
  }
  return;
}


