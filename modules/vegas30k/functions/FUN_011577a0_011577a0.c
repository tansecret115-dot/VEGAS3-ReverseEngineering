/* Module: vegas30k.dll
   Function: FUN_011577a0
   Address: 011577a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_011577a0(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 local_c [4];
  undefined1 local_8 [4];
  uint local_4;
  
  if ((*(uint *)(param_1 + 0x60) & 1) == 0) {
    FUN_01155f80(param_1,"Missing IHDR before oFFs");
  }
  else {
    if ((*(uint *)(param_1 + 0x60) & 4) != 0) {
      FUN_01155fb0(param_1,"Invalid oFFs after IDAT");
      FUN_011561f0(param_1,param_3);
      return;
    }
    if ((param_2 != 0) && ((*(uint *)(param_2 + 8) & 0x100) != 0)) {
      FUN_01155fb0(param_1,"Duplicate oFFs chunk");
      FUN_011561f0(param_1,param_3);
      return;
    }
  }
  if (param_3 != 9) {
    FUN_01155fb0(param_1,"Incorrect oFFs chunk length");
    FUN_011561f0(param_1,param_3);
    return;
  }
  FUN_011561c0(param_1,local_c,9);
  iVar1 = FUN_011561f0(param_1,0);
  if (iVar1 == 0) {
    uVar2 = FUN_01156170(local_c);
    uVar3 = FUN_01156170(local_8);
    FUN_01128100(param_1,param_2,uVar2,uVar3,local_4 & 0xff);
  }
  return;
}


