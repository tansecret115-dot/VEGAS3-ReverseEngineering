/* Module: vidcap30.exe
   Function: FUN_0054ad60
   Address: 0054ad60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0054ad60(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 local_c [4];
  undefined1 local_8 [4];
  uint local_4;
  
  if ((*(uint *)(param_1 + 0x60) & 1) == 0) {
    FUN_00549540(param_1,"Missing IHDR before oFFs");
  }
  else {
    if ((*(uint *)(param_1 + 0x60) & 4) != 0) {
      FUN_00549570(param_1,"Invalid oFFs after IDAT");
      FUN_005497b0(param_1,param_3);
      return;
    }
    if ((param_2 != 0) && ((*(uint *)(param_2 + 8) & 0x100) != 0)) {
      FUN_00549570(param_1,"Duplicate oFFs chunk");
      FUN_005497b0(param_1,param_3);
      return;
    }
  }
  if (param_3 != 9) {
    FUN_00549570(param_1,"Incorrect oFFs chunk length");
    FUN_005497b0(param_1,param_3);
    return;
  }
  FUN_00549780(param_1,local_c,9);
  iVar1 = FUN_005497b0(param_1,0);
  if (iVar1 == 0) {
    uVar2 = FUN_00549730(local_c);
    uVar3 = FUN_00549730(local_8);
    FUN_0052bea0(param_1,param_2,uVar2,uVar3,local_4 & 0xff);
  }
  return;
}


