/* Module: sfcd.cdd
   Function: FUN_00412ca0
   Address: 00412ca0
   Source: Ghidra pseudocode (Stage 10 batch) */


long FUN_00412ca0(HSFCD__ *param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  undefined1 local_38;
  undefined1 local_37;
  byte local_36;
  byte local_35;
  int local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  int local_24;
  undefined4 local_20 [4];
  undefined4 local_10 [4];
  
  local_24 = *(int *)(param_1 + 0x160);
  if (param_2 == 0) {
    return -0x7fffbffd;
  }
  local_28 = FUN_0041f470(param_2);
  local_34 = 0;
  local_30 = 0;
  if (local_28 != 0) {
    do {
      uVar6 = local_30;
      puVar2 = (uint *)FUN_0041f490(param_2,local_30);
      local_38 = 1;
      local_37 = 1;
      FUN_0041f150(&local_36,*puVar2);
      FUN_0041f150(&local_35,0);
      if (uVar6 == 0) {
        lVar3 = FUN_00412920(param_1,-puVar2[5],puVar2[5]);
        if ((lVar3 != 0) || (lVar3 = FUN_004129b0(param_1,(undefined4 *)&local_38,4), lVar3 != 0))
        goto LAB_00412ee9;
      }
      else {
        iVar7 = puVar2[5] - puVar2[4];
        if (iVar7 != 0) {
          lVar3 = FUN_00412920(param_1,local_34,iVar7);
          if ((lVar3 != 0) || (lVar3 = FUN_004129b0(param_1,(undefined4 *)&local_38,4), lVar3 != 0))
          goto LAB_00412ee9;
          local_34 = local_34 + iVar7;
        }
      }
      local_2c = FUN_0041f3e0((int)puVar2);
      uVar6 = 0;
      if (local_2c != 0) {
        do {
          local_38 = 0;
          local_37 = 1;
          FUN_0041f150(&local_36,*puVar2);
          uVar1 = uVar6 + 1;
          FUN_0041f150(&local_35,uVar1);
          if (local_2c - 1 == uVar6) {
            piVar4 = (int *)FUN_0041f3f0((int)puVar2,uVar6);
            iVar7 = (puVar2[6] - *piVar4) + puVar2[5];
          }
          else {
            piVar4 = (int *)FUN_0041f3f0((int)puVar2,uVar6);
            piVar5 = (int *)FUN_0041f3f0((int)puVar2,uVar1);
            iVar7 = *piVar5 - *piVar4;
          }
          lVar3 = FUN_00412920(param_1,local_34,iVar7);
          if ((lVar3 != 0) || (lVar3 = FUN_004129b0(param_1,(undefined4 *)&local_38,4), lVar3 != 0))
          goto LAB_00412ee9;
          local_34 = local_34 + iVar7;
          uVar6 = uVar1;
        } while (uVar1 < local_2c);
      }
      if ((*(int *)(param_2 + 0x1d78) != 0) && (local_30 == 0)) {
        FUN_004128d0(local_20,(int)puVar2,(undefined4 *)(param_2 + 0x1d7c));
        lVar3 = FUN_004129b0(param_1,local_20,0xf);
        if (lVar3 != 0) goto LAB_00412ee9;
      }
      if (puVar2[7] != 0) {
        FUN_00412870(local_10,puVar2);
        lVar3 = FUN_004129b0(param_1,local_10,0xf);
        if (lVar3 != 0) goto LAB_00412ee9;
      }
      local_30 = local_30 + 1;
    } while (local_30 < local_28);
  }
  lVar3 = FUN_00412a40(param_1,param_2,*(uint *)(param_2 + 0x1d8c));
LAB_00412ee9:
  FUN_00419270(param_1,(tCDR_ERRORDATA *)(local_24 + 100),0x746,(uchar *)"jvc20xx.cpp");
  return lVar3;
}


