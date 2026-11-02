/* Module: vegas30.exe
   Function: FUN_00435890
   Address: 00435890
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00435890(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 local_4;
  
  uVar2 = DAT_00647630;
  iVar1 = *(int *)(param_2 + 0x18);
  local_4 = 1;
  uVar5 = 1;
  if ((-1 < iVar1) && (0 < param_3)) {
    piVar3 = (int *)FUN_005b87b0(param_1);
    iVar4 = 0;
    if (piVar3 != (int *)0x0) {
      iVar4 = *piVar3;
    }
    iVar6 = -iVar1;
    if ((iVar6 <= param_4) && (iVar4 = (iVar4 - iVar1) - param_3, iVar6 = param_4, iVar4 < param_4))
    {
      iVar6 = iVar4;
    }
    if (iVar6 != 0) {
      iVar4 = FUN_004ca930(uVar2);
      FUN_005b83b0(param_1,1);
      local_4 = _SfList_MoveRange_16(piVar3,iVar1,iVar1 + iVar6,param_3);
      FUN_005b84d0(param_1,1);
      if ((iVar1 <= iVar4) && (iVar4 < iVar1 + param_3)) {
        FUN_004cb910(uVar2,iVar4,iVar4 + iVar6);
      }
    }
    FUN_005b9000(param_1);
    *(uint *)*param_1 = *(uint *)*param_1 | 4;
    if (*(int *)(param_2 + 4) == 3) {
      DAT_0064767c = DAT_0064767c | 0x400;
    }
    FUN_00456c20(uVar2);
    uVar5 = local_4;
  }
  return uVar5;
}


