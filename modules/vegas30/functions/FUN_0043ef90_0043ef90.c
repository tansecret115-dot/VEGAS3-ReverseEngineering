/* Module: vegas30.exe
   Function: FUN_0043ef90
   Address: 0043ef90
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0043ef90(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  undefined4 local_c;
  undefined1 local_8 [8];
  
  uVar1 = DAT_0064b138;
  iVar4 = 0;
  local_1c = DAT_00647630;
  local_20 = 0;
  if (DAT_00647630 == 0) {
    return 0;
  }
  if (param_1 == (int *)0x0) {
    local_24 = 0;
  }
  else {
    local_24 = *param_1;
  }
  FUN_004582a0(DAT_00647630,&local_18,local_8);
  local_2c = 1;
  local_28 = 0;
  lVar5 = FUN_0043ee20(uVar1,local_18,local_14,&local_2c,&local_28);
  FUN_004e9f70(uVar1,0x241,"CD_AddFilesToCDLayout");
  FUN_004eb0f0(uVar1,0x26,0);
  FUN_004ea880(uVar1);
  FUN_004ead60(uVar1,0,9);
  FUN_005b89b0(uVar1);
  if (0 < local_24) {
    do {
      local_20 = FUN_0043ea10(uVar1,*(undefined4 *)(param_1[2] + iVar4 * 4),lVar5,&local_10,local_2c
                              ,local_28);
      if (local_20 < 0) goto LAB_0043f129;
      lVar5 = lVar5 + CONCAT44(local_c,local_10);
      iVar4 = iVar4 + 1;
      local_2c = 1;
      local_28 = 0;
    } while (iVar4 < local_24);
    if (local_20 < 0) goto LAB_0043f129;
  }
  iVar3 = (int)((ulonglong)lVar5 >> 0x20);
  uVar2 = FUN_005b89b0(uVar1);
  _SfList_Sort_12(uVar2,0,&LAB_004baab0);
  FUN_004eb2b0(uVar1);
  iVar4 = local_1c;
  *(uint *)**(undefined4 **)(local_1c + 0xbc8) =
       *(uint *)**(undefined4 **)(local_1c + 0xbc8) | 0x10000;
  FUN_0048f940(uVar1,0,7);
  uVar6 = 2;
  uVar2 = FUN_005b89b0(uVar1);
  FUN_004c3470(iVar4,uVar2,uVar6);
  if ((*(int *)(iVar4 + 0xccc) <= iVar3) &&
     ((*(int *)(iVar4 + 0xccc) < iVar3 || (*(uint *)(iVar4 + 0xcc8) <= (uint)lVar5)))) {
    *(longlong *)(iVar4 + 0xcc8) = lVar5;
    FUN_004ca990(iVar4);
  }
  FUN_00453970(iVar4,lVar5,1);
  FUN_00455090(iVar4,0xf);
  FUN_004b8880(iVar4,iVar4 + 0x768,0x9e77);
LAB_0043f129:
  FUN_004ea040(uVar1,0);
  return local_20;
}


