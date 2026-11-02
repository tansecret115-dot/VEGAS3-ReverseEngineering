/* Module: encn3260.dll
   Function: FUN_664a2110
   Address: 664a2110
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_664a2110(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 0xf1);
  iVar1 = *(int *)(param_1 + 0x38);
  if (iVar1 != 0) {
    uVar2 = (**(code **)(*(int *)(iVar1 + 0x14) + 0x14))(iVar1 + 0x14);
    uVar3 = uVar3 & uVar2;
  }
  return uVar3;
}


