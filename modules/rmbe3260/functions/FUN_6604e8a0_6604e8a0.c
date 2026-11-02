/* Module: rmbe3260.dll
   Function: FUN_6604e8a0
   Address: 6604e8a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_6604e8a0(int *param_1,char *param_2,char *param_3)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined3 extraout_var;
  undefined4 local_80 [5];
  undefined4 local_6c [5];
  undefined2 local_58;
  undefined2 uStack_56;
  undefined2 local_54;
  undefined2 uStack_52;
  undefined4 local_50;
  undefined4 local_4c;
  undefined2 local_48;
  int local_44 [3];
  int local_38 [3];
  int local_2c [3];
  int local_20 [3];
  char *local_14 [3];
  int local_8;
  
  local_8 = 0;
  uVar3 = 0;
  do {
    if (0x13 < uVar3) {
      return 0;
    }
    DAT_660753c4 = (DAT_660753c4 + 1) % 100;
    FUN_6605b7e0(local_14,param_3);
    FUN_6605bba0(local_14,s_prod_temp_rm_6606ee04);
    if ((param_3 == (char *)0x0) && (piVar4 = FUN_6604fb50(0), piVar4 != (int *)0x0)) {
      iVar1 = *piVar4;
      iVar5 = FUN_6605bc10(local_14,0x104);
      (**(code **)(iVar1 + 8))(&DAT_6606dbd8,iVar5);
      FUN_6605bc90(local_14,-1);
      (**(code **)*piVar4)(1);
      FUN_660522e0(local_80);
      FUN_66052ae0(local_80,local_14[0]);
      FUN_66052300(local_80);
    }
    puVar6 = (undefined4 *)FUN_66052ce0(local_6c);
    local_58 = (undefined2)*puVar6;
    uStack_56 = (undefined2)((uint)*puVar6 >> 0x10);
    local_54 = (undefined2)puVar6[1];
    uStack_52 = (undefined2)((uint)puVar6[1] >> 0x10);
    local_50 = puVar6[2];
    local_4c = puVar6[3];
    local_48 = *(undefined2 *)(puVar6 + 4);
    DAT_660753c4 = DAT_660753c4 + 1;
    FUN_6605b650(local_2c);
    FUN_6605b650(local_20);
    uVar7 = FUN_6605bf70(local_14,'.');
    if ((int)uVar7 < 0) {
      FUN_6605b900(local_20,(int *)local_14);
    }
    else {
      piVar4 = FUN_6605bf20(local_14,local_38,uVar7);
      FUN_6605b900(local_20,piVar4);
      FUN_6605b770(local_38);
      piVar4 = FUN_6605be40(local_14,local_44,uVar7);
      FUN_6605b900(local_2c,piVar4);
      FUN_6605b770(local_44);
    }
    if (param_2 != (char *)0x0) {
      FUN_6605b970(local_2c,param_2);
    }
    FUN_6605bfd0(param_1,s__s_lX_6606edfc);
    FUN_6605bbe0(param_1,local_2c);
    bVar2 = FUN_6604e680((char *)*param_1);
    if (CONCAT31(extraout_var,bVar2) == 0) {
      thunk_FUN_6605b610(param_1);
    }
    else {
      local_8 = 1;
    }
    FUN_6605b770(local_20);
    FUN_6605b770(local_2c);
    FUN_6605b770((int *)local_14);
    uVar3 = uVar3 + 1;
  } while (local_8 == 0);
  return 0;
}


