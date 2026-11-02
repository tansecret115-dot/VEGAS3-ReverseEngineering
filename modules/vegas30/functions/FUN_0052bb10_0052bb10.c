/* Module: vegas30.exe
   Function: FUN_0052bb10
   Address: 0052bb10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0052bb10(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined4 local_4;
  
  iVar2 = param_3;
  iVar1 = param_2;
  if (((param_3 == 0) || ((1 < param_3 && (param_3 < 0x1d)))) ||
     ((0x3f < param_3 && (param_3 < 0x60)))) {
    if (*(int *)(param_2 + 4) != 2) {
      return 1;
    }
    param_3 = 0x40000000;
LAB_0052bbd6:
    local_4 = 0;
    param_2 = 0x3f800000;
  }
  else {
    if (param_3 == 1) {
      bVar4 = *(int *)(param_2 + 4) == 2;
    }
    else {
      if (param_3 == 0x1d) {
        if (*(int *)(param_2 + 4) != 3) {
          return 1;
        }
        param_3 = 0x3f800000;
        goto LAB_0052bbd6;
      }
      if (param_3 != 0x1e) {
        return 0x80070057;
      }
      bVar4 = *(int *)(param_2 + 4) == 3;
    }
    if (!bVar4) {
      return 1;
    }
    local_4 = 0xbf800000;
    param_3 = 0x3f800000;
    param_2 = 0;
  }
  FUN_005b83b0(param_1,1);
  FUN_0047c700(iVar1 + 0x638,DAT_00647630 + 0xc78,*(int *)(iVar1 + 0x69c) + 0x18);
  uVar3 = FUN_0047c730(iVar1 + 0x638,iVar1,0,0,0,0x20000000,local_4,param_3,param_2,iVar2,1,0);
  FUN_005b84d0(param_1,1);
  if (((1 < iVar2) && (iVar2 < 0x1d)) || ((0x3f < iVar2 && (iVar2 < 0x60)))) {
    FUN_004c3e90(DAT_00647630,iVar1,iVar2);
  }
  return uVar3;
}


