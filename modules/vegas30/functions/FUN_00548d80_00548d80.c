/* Module: vegas30.exe
   Function: FUN_00548d80
   Address: 00548d80
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_00548d80(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  undefined4 local_4;
  
  iVar7 = 0;
  puVar1 = (undefined4 *)(param_1 + 0x50);
  local_c = param_1;
  iVar3 = _SfList_CreateExZ_32(puVar1,8,0x10,0x10,4,0,0,0);
  if (-1 < iVar3) {
    local_14 = 0;
    local_10 = 0;
    FUN_0043a2b0(&local_14,&local_10);
    iVar6 = 0;
    iVar5 = local_14;
    if (0 < local_10) {
      do {
        if (((*(byte *)(iVar7 + 9 + iVar5) & 1) == 0) &&
           (iVar2 = *(int *)(iVar7 + 4 + iVar5), iVar2 != 0)) {
          local_4 = *(undefined4 *)(iVar7 + iVar5);
          local_8 = iVar2;
          uVar4 = _SfList_FindSortedInsertIndexRange_20(*puVar1,&local_8,0,0xffffffff,&LAB_00548ce0)
          ;
          iVar3 = _SfList_InsertList_16(*puVar1,uVar4,&local_8,1);
          iVar5 = local_14;
          if (iVar3 < 0) goto LAB_00548e2e;
        }
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + 0x14;
      } while (iVar6 < local_10);
    }
    if (-1 < iVar3) {
      return iVar3;
    }
  }
LAB_00548e2e:
  FUN_00548e50();
  return iVar3;
}


