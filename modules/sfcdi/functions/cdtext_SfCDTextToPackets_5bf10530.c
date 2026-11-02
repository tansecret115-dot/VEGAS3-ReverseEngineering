/* Module: sfcdi.dll
   Function: cdtext_SfCDTextToPackets
   Address: 5bf10530
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall cdtext_SfCDTextToPackets(struct _sfcdtext *,struct _cdtextpack *,unsigned long *)
    */

long cdtext_SfCDTextToPackets(_sfcdtext *param_1,_cdtextpack *param_2,ulong *param_3)

{
  int iVar1;
  int iVar2;
  _sfcdtext *p_Var3;
  char *pcVar4;
  undefined4 *puVar5;
  char local_40 [8];
  int local_38;
  int local_34;
  _cdtextpack *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
                    /* 0x10530  233
                       ?cdtext_SfCDTextToPackets@@YGJPAU_sfcdtext@@PAU_cdtextpack@@PAK@Z */
  *param_3 = 0;
  iVar1 = cdtext_GetTrackCount(param_1);
  pcVar4 = local_40;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4 = pcVar4 + 4;
  }
  if (*(int *)(param_1 + 0x648) == 0) {
    local_24 = CONCAT13(3,CONCAT12((char)iVar1,0x101));
    local_8 = CONCAT31(local_8._1_3_,9);
  }
  else {
    p_Var3 = param_1 + 0x64c;
    puVar5 = &local_24;
    for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = *(undefined4 *)p_Var3;
      p_Var3 = p_Var3 + 4;
      puVar5 = puVar5 + 1;
    }
    local_20 = 0;
    local_1c = 0;
    local_10 = 0;
    local_18 = 0;
    local_c = 0;
    local_14 = 0;
  }
  local_40[0] = '\x04';
  local_40[1] = '\0';
  local_40[2] = '\0';
  local_40[3] = '\0';
  local_28 = param_2;
  FUN_5bf10450(param_1,local_40,0);
  FUN_5bf10450(param_1,local_40,1);
  FUN_5bf10450(param_1,local_40,2);
  FUN_5bf10450(param_1,local_40,3);
  FUN_5bf10450(param_1,local_40,4);
  FUN_5bf10450(param_1,local_40,5);
  if (*(int *)(param_1 + 0x638) != 0) {
    local_40[4] = '\x06';
    local_40[5] = '\0';
    local_40[6] = '\0';
    local_40[7] = '\0';
    local_38 = 0;
    FUN_5bf10280(local_40,(byte *)local_28);
    *(undefined4 *)(local_28 + 4) = *(undefined4 *)(param_1 + 0x63c);
    *(undefined4 *)(local_28 + 8) = *(undefined4 *)(param_1 + 0x640);
    *(undefined4 *)(local_28 + 0xc) = *(undefined4 *)(param_1 + 0x644);
    local_34 = local_34 + 1;
    FUN_5bf102f0((byte *)local_28);
    local_1c._0_3_ = CONCAT12(1,(undefined2)local_1c);
    local_28 = local_28 + 0x12;
  }
  FUN_5bf10450(param_1,local_40,0xe);
  local_14 = CONCAT13(3,(undefined3)local_14);
  local_10 = CONCAT31(local_10._1_3_,(char)local_34 + '\x02');
  local_40[4] = '\x0f';
  local_40[5] = '\0';
  local_40[6] = '\0';
  local_40[7] = '\0';
  local_38 = 0;
  FUN_5bf10280(local_40,(byte *)local_28);
  *(undefined4 *)(local_28 + 4) = local_24;
  *(undefined4 *)(local_28 + 8) = local_20;
  *(undefined4 *)(local_28 + 0xc) = local_1c;
  FUN_5bf102f0((byte *)local_28);
  local_28 = local_28 + 0x12;
  local_38 = local_38 + 1;
  local_34 = local_34 + 1;
  FUN_5bf10280(local_40,(byte *)local_28);
  *(undefined4 *)(local_28 + 4) = local_18;
  *(undefined4 *)(local_28 + 8) = local_14;
  *(undefined4 *)(local_28 + 0xc) = local_10;
  FUN_5bf102f0((byte *)local_28);
  local_28 = local_28 + 0x12;
  local_38 = local_38 + 1;
  local_34 = local_34 + 1;
  FUN_5bf10280(local_40,(byte *)local_28);
  *(undefined4 *)(local_28 + 4) = local_c;
  *(undefined4 *)(local_28 + 8) = local_8;
  *(undefined4 *)(local_28 + 0xc) = local_4;
  FUN_5bf102f0((byte *)local_28);
  *param_3 = (local_34 * 9 + 9) * 2;
  return 0;
}


