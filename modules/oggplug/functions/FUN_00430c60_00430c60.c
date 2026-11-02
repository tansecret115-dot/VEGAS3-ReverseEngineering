/* Module: oggplug.dll
   Function: FUN_00430c60
   Address: 00430c60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_00430c60(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  
  iVar1 = *(int *)(param_2 + 0x1c);
  if (iVar1 == 0) {
    return 0xffffff7f;
  }
  FUN_00441e10(param_1,5,8);
  FUN_004308e0(param_1,s_vorbis_004510f0);
  FUN_00441e10(param_1,*(int *)(iVar1 + 0x1c) - 1,8);
  iVar3 = 0;
  if (0 < *(int *)(iVar1 + 0x1c)) {
    puVar6 = (undefined4 *)(iVar1 + 0x924);
    do {
      iVar2 = FUN_00435f60((uint *)*puVar6,param_1);
      if (iVar2 != 0) {
        return 0xffffffff;
      }
      iVar3 = iVar3 + 1;
      puVar6 = puVar6 + 1;
    } while (iVar3 < *(int *)(iVar1 + 0x1c));
  }
  FUN_00441e10(param_1,*(int *)(iVar1 + 0x10) - 1,6);
  iVar3 = 0;
  if (0 < *(int *)(iVar1 + 0x10)) {
    puVar4 = (uint *)(iVar1 + 0x324);
    do {
      FUN_00441e10(param_1,*puVar4,0x10);
      (**(code **)(&PTR_PTR_00452c48)[*puVar4])(puVar4[0x40],param_1);
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar3 < *(int *)(iVar1 + 0x10));
  }
  FUN_00441e10(param_1,*(int *)(iVar1 + 0x14) - 1,6);
  iVar3 = 0;
  if (0 < *(int *)(iVar1 + 0x14)) {
    puVar4 = (uint *)(iVar1 + 0x524);
    do {
      FUN_00441e10(param_1,*puVar4,0x10);
      (**(code **)(&PTR_PTR_00452c4c)[*puVar4])(puVar4[0x40],param_1);
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar3 < *(int *)(iVar1 + 0x14));
  }
  FUN_00441e10(param_1,*(int *)(iVar1 + 0x18) - 1,6);
  iVar3 = 0;
  if (0 < *(int *)(iVar1 + 0x18)) {
    puVar4 = (uint *)(iVar1 + 0x724);
    do {
      FUN_00441e10(param_1,*puVar4,0x10);
      (**(code **)(&PTR_PTR_00452c54)[*puVar4])(puVar4[0x40],param_1);
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar3 < *(int *)(iVar1 + 0x18));
  }
  FUN_00441e10(param_1,*(int *)(iVar1 + 0xc) - 1,6);
  iVar3 = 0;
  if (0 < *(int *)(iVar1 + 0xc)) {
    puVar4 = (uint *)(iVar1 + 0x124);
    do {
      FUN_00441e10(param_1,*puVar4,0x10);
      (**(code **)(&PTR_PTR_00452c60)[*puVar4])(param_2,puVar4[0x40],param_1);
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar3 < *(int *)(iVar1 + 0xc));
  }
  FUN_00441e10(param_1,*(int *)(iVar1 + 8) - 1,6);
  iVar3 = 0;
  if (0 < *(int *)(iVar1 + 8)) {
    piVar5 = (int *)(iVar1 + 0x24);
    do {
      FUN_00441e10(param_1,*(uint *)*piVar5,1);
      FUN_00441e10(param_1,*(uint *)(*piVar5 + 4),0x10);
      FUN_00441e10(param_1,*(uint *)(*piVar5 + 8),0x10);
      FUN_00441e10(param_1,*(uint *)(*piVar5 + 0xc),8);
      iVar3 = iVar3 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar3 < *(int *)(iVar1 + 8));
  }
  FUN_00441e10(param_1,1,1);
  return 0;
}


