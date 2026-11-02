/* Module: vidcap30.exe
   Function: FUN_0057d040
   Address: 0057d040
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0057d040(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(int **)(param_1 + 0xc) + 0x14))();
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  uVar1 = (**(code **)(**(int **)(param_1 + 0xc) + 0x18))();
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_0057b6e0();
  return 0;
}


