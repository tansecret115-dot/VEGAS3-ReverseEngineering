/* Module: vidcap30.exe
   Function: FUN_00449da0
   Address: 00449da0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00449da0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int local_10;
  undefined4 local_8;
  int local_4;
  
  iVar1 = DAT_005bb838;
  if (DAT_005bba98 != 0) {
    _SfList_DeleteList_16(DAT_005bba98,0,0xffffffff,1);
    local_4 = FUN_0042e510(iVar1);
    local_10 = 0;
    if (0 < local_4) {
      do {
        uVar2 = FUN_00443740(iVar1,local_10);
        iVar3 = FUN_00443780(uVar2);
        iVar6 = 0;
        if (0 < iVar3) {
          do {
            uVar4 = FUN_004437e0(uVar2,iVar6);
            iVar5 = FUN_00448be0(uVar4,param_1);
            if (iVar5 != 0) {
              local_8 = uVar4;
              _SfList_InsertList_16(DAT_005bba98,0xffffffff,&local_8,1);
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < iVar3);
        }
        local_10 = local_10 + 1;
      } while (local_10 < local_4);
    }
    **(uint **)(iVar1 + 4) = **(uint **)(iVar1 + 4) | 0x200;
    return 1;
  }
  return 0;
}


