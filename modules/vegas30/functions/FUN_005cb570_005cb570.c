/* Module: vegas30.exe
   Function: FUN_005cb570
   Address: 005cb570
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005cb570(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = param_1;
  FUN_005b83b0(param_1,1);
  uVar3 = FUN_005b8950(puVar1);
  iVar2 = param_2;
  param_1 = (undefined4 *)param_2;
  uVar3 = _SfList_InsertList_16(uVar3,0xffffffff,&param_1,1);
  *(uint *)(iVar2 + 0x10) = *(uint *)(iVar2 + 0x10) | 0x400000;
  *(uint *)*puVar1 = *(uint *)*puVar1 | 0x40000;
  FUN_005b84d0(puVar1,1);
  return uVar3;
}


