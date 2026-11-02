/* Module: vidcap30.exe
   Function: FUN_00444440
   Address: 00444440
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined8 FUN_00444440(int param_1)

{
  undefined8 uVar1;
  
  FUN_0042f4b0(*(undefined4 *)(*(int *)(param_1 + 4) + 4),0);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  FUN_0042f5d0(*(undefined4 *)(*(int *)(param_1 + 4) + 4),0);
  return uVar1;
}


