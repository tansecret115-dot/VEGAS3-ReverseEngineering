/* Module: sfcdi.dll
   Function: FUN_5bf10450
   Address: 5bf10450
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf10450(_sfcdtext *param_1,char *param_2,uint param_3)

{
  undefined4 uVar1;
  byte *pbVar2;
  _cdtexttrkfield *p_Var3;
  uint uVar4;
  uint uVar5;
  char local_a8;
  char local_a0 [160];
  
  p_Var3 = FUN_5bf0fb40(param_1,0,param_3);
  if (*(int *)p_Var3 != 0) {
    uVar1 = *(undefined4 *)(param_2 + 0xc);
    *(uint *)(param_2 + 4) = param_3;
    uVar4 = cdtext_GetTrackCount(param_1);
    pbVar2 = *(byte **)(param_2 + 0x18);
    param_2[8] = '\0';
    param_2[9] = '\0';
    param_2[10] = '\0';
    param_2[0xb] = '\0';
    FUN_5bf10280(param_2,pbVar2);
    cdtext_GetItemText(param_1,0,param_3,local_a0,0xa0);
    FUN_5bf10320(param_2,local_a0);
    uVar5 = 0;
    if (uVar4 != 0) {
      do {
        uVar5 = uVar5 + 1;
        cdtext_GetItemText(param_1,uVar5,param_3,local_a0,0xa0);
        FUN_5bf10320(param_2,local_a0);
      } while (uVar5 < uVar4);
    }
    if (*(int *)(param_2 + 0x14) != 0xc) {
      FUN_5bf102f0(*(byte **)(param_2 + 0x18));
      *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 0x12;
      *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
    }
    local_a8 = (char)uVar1;
    param_2[param_3 + 0x20] = param_2[0xc] - local_a8;
  }
  return;
}


