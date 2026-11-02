/* Module: vegas30k.dll
   Function: SfPQList_AutoAdjustForAdd
   Address: 01016470
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall SfPQList_AutoAdjustForAdd(struct tSFLIST *,char *,unsigned long,unsigned
   long,unsigned long) */

int SfPQList_AutoAdjustForAdd
              (tSFLIST *param_1,char *param_2,ulong param_3,ulong param_4,ulong param_5)

{
  int iVar1;
  uint uVar2;
  cditemtag *pcVar3;
  int iVar4;
  int *piVar5;
  int local_7c;
  int local_78 [10];
  char local_50 [80];
  
  piVar5 = local_78;
                    /* 0x16470  476  ?SfPQList_AutoAdjustForAdd@@YGHPAUtSFLIST@@PADKKK@Z */
  for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar5 = 0;
    piVar5 = piVar5 + 1;
  }
  local_78[2] = param_3 / 0x24c;
  local_78[3] = param_4 / 0x24c;
  local_78[0] = 3;
  pcVar3 = SfPQList_GetLastTrackEntry(param_1);
  if (pcVar3 == (cditemtag *)0x0) {
    local_78[1] = 1;
  }
  else {
    if (0x62 < *(uint *)(pcVar3 + 4)) {
      return -1;
    }
    local_78[1] = *(uint *)(pcVar3 + 4) + 1;
  }
  if (param_2 == (char *)0x0) {
    FUN_010143e0(local_78,local_50);
    param_2 = local_50;
  }
  if (param_5 != 0) {
    if (param_1 == (tSFLIST *)0x0) {
      local_7c = 0;
    }
    else {
      local_7c = *(int *)param_1;
    }
    iVar4 = 0;
    if (0 < local_7c) {
      do {
        iVar1 = *(int *)(*(int *)(param_1 + 8) + iVar4 * 4);
        uVar2 = *(uint *)(iVar1 + 8);
        if ((uint)local_78[2] <= uVar2) {
          *(uint *)(iVar1 + 8) = uVar2 + param_5 / 0x24c;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < local_7c);
    }
  }
  iVar4 = SfPQList_AddItemSorted(param_1,(cditemtag *)local_78,param_2);
  if (local_7c != iVar4) {
    FUN_010144d0(param_1);
  }
  return iVar4;
}


