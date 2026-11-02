/* Module: encn3260.dll
   Function: FUN_664a8af0
   Address: 664a8af0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664a8af0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x50);
  if (iVar1 != 0) {
    uVar2 = (**(code **)(*(int *)(iVar1 + 0x18) + 0x18))(iVar1 + 0x18);
    return uVar2;
  }
  return *(undefined4 *)(param_1 + 0xe0);
}


