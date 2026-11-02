/* Module: sfmarket2.dll
   Function: FUN_0047fb60
   Address: 0047fb60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0047fb60(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  byte local_c [4];
  byte local_8 [4];
  undefined1 local_4;
  
  if ((param_1[0x18] & 1U) == 0) {
    FUN_0047e340(param_1,"Missing IHDR before oFFs");
  }
  else {
    if ((param_1[0x18] & 4U) != 0) {
      FUN_0047e370((int)param_1,"Invalid oFFs after IDAT");
      FUN_0047e5b0(param_1,param_3);
      return;
    }
    if ((param_2 != 0) && ((*(uint *)(param_2 + 8) & 0x100) != 0)) {
      FUN_0047e370((int)param_1,"Duplicate oFFs chunk");
      FUN_0047e5b0(param_1,param_3);
      return;
    }
  }
  if (param_3 != 9) {
    FUN_0047e370((int)param_1,"Incorrect oFFs chunk length");
    FUN_0047e5b0(param_1,param_3);
    return;
  }
  FUN_0047e580(param_1,local_c,9);
  iVar1 = FUN_0047e5b0(param_1,0);
  if (iVar1 == 0) {
    iVar1 = FUN_0047e530(local_c);
    iVar2 = FUN_0047e530(local_8);
    FUN_00455f10((int)param_1,param_2,iVar1,iVar2,local_4);
  }
  return;
}


