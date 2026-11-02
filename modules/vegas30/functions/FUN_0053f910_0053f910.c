/* Module: vegas30.exe
   Function: FUN_0053f910
   Address: 0053f910
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined8 FUN_0053f910(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  
  FUN_005b83b0(param_1,1);
  uVar1 = *(uint *)(param_1 + 0x230);
  *(uint *)(param_1 + 0x230) = uVar1 + 1;
  iVar3 = *(int *)(param_1 + 0x234) + (uint)(0xfffffffe < uVar1);
  *(int *)(param_1 + 0x234) = iVar3;
  uVar2 = *(undefined4 *)(param_1 + 0x230);
  FUN_005b84d0(param_1,1);
  return CONCAT44(iVar3,uVar2);
}


