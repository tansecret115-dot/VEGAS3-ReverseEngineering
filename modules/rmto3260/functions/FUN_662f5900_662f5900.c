/* Module: rmto3260.dll
   Function: FUN_662f5900
   Address: 662f5900
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_662f5900(int *param_1,char *param_2,char *param_3)

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
    DAT_66311d68 = (DAT_66311d68 + 1) % 100;
    FUN_662ef160(local_14,param_3);
    FUN_662ef520(local_14,s_prod_temp_rm_6630b77c);
    if ((param_3 == (char *)0x0) && (piVar4 = FUN_662f0880(0), piVar4 != (int *)0x0)) {
      iVar1 = *piVar4;
      iVar5 = FUN_662ef590(local_14,0x104);
      (**(code **)(iVar1 + 8))(&DAT_6630b778,iVar5);
      FUN_662ef610(local_14,-1);
      (**(code **)*piVar4)(1);
      FUN_662f30d0(local_80);
      FUN_662f38d0(local_80,local_14[0]);
      FUN_662f30f0(local_80);
    }
    puVar6 = (undefined4 *)FUN_662f3ed0(local_6c);
    local_58 = (undefined2)*puVar6;
    uStack_56 = (undefined2)((uint)*puVar6 >> 0x10);
    local_54 = (undefined2)puVar6[1];
    uStack_52 = (undefined2)((uint)puVar6[1] >> 0x10);
    local_50 = puVar6[2];
    local_4c = puVar6[3];
    local_48 = *(undefined2 *)(puVar6 + 4);
    DAT_66311d68 = DAT_66311d68 + 1;
    FUN_662eefd0(local_2c);
    FUN_662eefd0(local_20);
    uVar7 = FUN_662ef7f0(local_14,'.');
    if ((int)uVar7 < 0) {
      FUN_662ef280(local_20,(int *)local_14);
    }
    else {
      piVar4 = FUN_662ef7a0(local_14,local_38,uVar7);
      FUN_662ef280(local_20,piVar4);
      FUN_662ef0f0(local_38);
      piVar4 = FUN_662ef6c0(local_14,local_44,uVar7);
      FUN_662ef280(local_2c,piVar4);
      FUN_662ef0f0(local_44);
    }
    if (param_2 != (char *)0x0) {
      FUN_662ef2f0(local_2c,param_2);
    }
    FUN_662ef850(param_1,s__s_lX_6630b770);
    FUN_662ef560(param_1,local_2c);
    bVar2 = FUN_662f57a0((char *)*param_1);
    if (CONCAT31(extraout_var,bVar2) == 0) {
      thunk_FUN_662eef90(param_1);
    }
    else {
      local_8 = 1;
    }
    FUN_662ef0f0(local_20);
    FUN_662ef0f0(local_2c);
    FUN_662ef0f0((int *)local_14);
    uVar3 = uVar3 + 1;
  } while (local_8 == 0);
  return 0;
}


