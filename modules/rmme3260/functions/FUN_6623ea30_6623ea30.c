/* Module: rmme3260.dll
   Function: FUN_6623ea30
   Address: 6623ea30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6623ea30(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x4c);
  if (iVar1 != 0) {
    uVar2 = (**(code **)(*(int *)(iVar1 + 0x1c) + 0x28))(iVar1 + 0x1c,param_2);
    return uVar2;
  }
  *(undefined4 *)(param_1 + 0x1c4) = param_2;
  FUN_66240340((void *)(param_1 + -0x1c),0,0);
  return 0;
}


