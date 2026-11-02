/* Module: vegas30.exe
   Function: FUN_005d9b80
   Address: 005d9b80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined8 FUN_005d9b80(int param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  FUN_005b83b0(param_1,1);
  uVar2 = *(uint *)(param_1 + 0x220);
  *(uint *)(param_1 + 0x220) = uVar2 + 1;
  uVar2 = *(int *)(param_1 + 0x224) + (uint)(0xfffffffe < uVar2);
  *(uint *)(param_1 + 0x224) = uVar2;
  uVar1 = *(undefined4 *)(param_1 + 0x220);
  FUN_005b84d0(param_1,1);
  return CONCAT44(param_2 << 0x1c | uVar2,uVar1);
}


