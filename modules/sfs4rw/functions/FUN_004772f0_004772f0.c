/* Module: sfs4rw.dll
   Function: FUN_004772f0
   Address: 004772f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004772f0(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  byte local_c [4];
  byte local_8 [4];
  undefined1 local_4;
  
  if ((param_1[0x18] & 1U) == 0) {
    FUN_00475ad0(param_1,"Missing IHDR before oFFs");
  }
  else {
    if ((param_1[0x18] & 4U) != 0) {
      FUN_00475b00((int)param_1,"Invalid oFFs after IDAT");
      FUN_00475d40(param_1,param_3);
      return;
    }
    if ((param_2 != 0) && ((*(uint *)(param_2 + 8) & 0x100) != 0)) {
      FUN_00475b00((int)param_1,"Duplicate oFFs chunk");
      FUN_00475d40(param_1,param_3);
      return;
    }
  }
  if (param_3 != 9) {
    FUN_00475b00((int)param_1,"Incorrect oFFs chunk length");
    FUN_00475d40(param_1,param_3);
    return;
  }
  FUN_00475d10(param_1,local_c,9);
  iVar1 = FUN_00475d40(param_1,0);
  if (iVar1 == 0) {
    iVar1 = FUN_00475cc0(local_c);
    iVar2 = FUN_00475cc0(local_8);
    FUN_0044d820((int)param_1,param_2,iVar1,iVar2,local_4);
  }
  return;
}


