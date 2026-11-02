/* Module: oggplug.dll
   Function: FUN_00430b80
   Address: 00430b80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_00430b80(int *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  
  puVar1 = *(uint **)(param_2 + 0x1c);
  if (puVar1 == (uint *)0x0) {
    return 0xffffff7f;
  }
  FUN_00441e10(param_1,1,8);
  FUN_004308e0(param_1,s_vorbis_004510f0);
  FUN_00441e10(param_1,0,0x20);
  FUN_00441e10(param_1,*(uint *)(param_2 + 4),8);
  FUN_00441e10(param_1,*(uint *)(param_2 + 8),0x20);
  FUN_00441e10(param_1,*(uint *)(param_2 + 0xc),0x20);
  FUN_00441e10(param_1,*(uint *)(param_2 + 0x10),0x20);
  FUN_00441e10(param_1,*(uint *)(param_2 + 0x14),0x20);
  iVar3 = 4;
  uVar2 = FUN_00430c40(*puVar1);
  FUN_00441e10(param_1,uVar2,iVar3);
  iVar3 = 4;
  uVar2 = FUN_00430c40(puVar1[1]);
  FUN_00441e10(param_1,uVar2,iVar3);
  FUN_00441e10(param_1,1,1);
  return 0;
}


