/* Module: vidcap30.exe
   Function: FUN_00549de0
   Address: 00549de0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00549de0(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 local_4;
  
  uVar1 = *(uint *)(param_1 + 0x60);
  local_4 = 0;
  if ((uVar1 & 1) == 0) {
    FUN_00549540(param_1,"Missing IHDR before sBIT");
  }
  else {
    if ((uVar1 & 4) != 0) {
      FUN_00549570(param_1,"Invalid sBIT after IDAT");
      FUN_005497b0(param_1,param_3);
      return;
    }
    if ((uVar1 & 2) == 0) {
      if ((param_2 != 0) && ((*(byte *)(param_2 + 8) & 2) != 0)) {
        FUN_00549570(param_1,"Duplicate sBIT chunk");
        FUN_005497b0(param_1,param_3);
        return;
      }
    }
    else {
      FUN_00549570(param_1,"Out of place sBIT chunk");
    }
  }
  uVar1 = 3;
  if (*(char *)(param_1 + 0x11e) != '\x03') {
    uVar1 = (uint)*(byte *)(param_1 + 0x122);
  }
  if (param_3 != uVar1) {
    FUN_00549570(param_1,"Incorrect sBIT chunk length");
    FUN_005497b0(param_1,param_3);
    return;
  }
  FUN_00549780(param_1,&local_4,uVar1);
  iVar2 = FUN_005497b0(param_1,0);
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
    FUN_0052c090(param_1,param_2,param_1 + 0x16e);
  }
  return;
}


