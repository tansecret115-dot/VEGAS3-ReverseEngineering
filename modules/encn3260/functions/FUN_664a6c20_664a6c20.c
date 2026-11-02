/* Module: encn3260.dll
   Function: FUN_664a6c20
   Address: 664a6c20
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_664a6c20(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 0xdc);
  iVar1 = *(int *)(param_1 + 100);
  if (iVar1 != 0) {
    uVar2 = (**(code **)(*(int *)(iVar1 + 4) + 0x14))(iVar1 + 4);
    uVar3 = uVar3 & uVar2;
  }
  return uVar3;
}


