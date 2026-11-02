/* Module: sfs4rw.dll
   Function: FUN_00476370
   Address: 00476370
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00476370(int *param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  byte local_4 [4];
  
  uVar1 = param_1[0x18];
  local_4[0] = 0;
  local_4[1] = 0;
  local_4[2] = 0;
  local_4[3] = 0;
  if ((uVar1 & 1) == 0) {
    FUN_00475ad0(param_1,"Missing IHDR before sBIT");
  }
  else {
    if ((uVar1 & 4) != 0) {
      FUN_00475b00((int)param_1,"Invalid sBIT after IDAT");
      FUN_00475d40(param_1,param_3);
      return;
    }
    if ((uVar1 & 2) == 0) {
      if ((param_2 != 0) && ((*(byte *)(param_2 + 8) & 2) != 0)) {
        FUN_00475b00((int)param_1,"Duplicate sBIT chunk");
        FUN_00475d40(param_1,param_3);
        return;
      }
    }
    else {
      FUN_00475b00((int)param_1,"Out of place sBIT chunk");
    }
  }
  uVar1 = 3;
  if (*(char *)((int)param_1 + 0x11e) != '\x03') {
    uVar1 = (uint)*(byte *)((int)param_1 + 0x122);
  }
  if (param_3 != uVar1) {
    FUN_00475b00((int)param_1,"Incorrect sBIT chunk length");
    FUN_00475d40(param_1,param_3);
    return;
  }
  FUN_00475d10(param_1,local_4,uVar1);
  iVar2 = FUN_00475d40(param_1,0);
  if (iVar2 == 0) {
    if ((*(byte *)((int)param_1 + 0x11e) & 2) == 0) {
      *(byte *)((int)param_1 + 0x171) = local_4[0];
      *(byte *)((int)param_1 + 0x172) = local_4[1];
    }
    else {
      *(byte *)((int)param_1 + 0x16e) = local_4[0];
      *(byte *)((int)param_1 + 0x16f) = local_4[1];
      *(byte *)(param_1 + 0x5c) = local_4[2];
      *(byte *)((int)param_1 + 0x172) = local_4[3];
    }
    FUN_0044da10((int)param_1,param_2,(undefined4 *)((int)param_1 + 0x16e));
  }
  return;
}


