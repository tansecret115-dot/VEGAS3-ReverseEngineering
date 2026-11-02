/* Module: vidcap30.exe
   Function: FUN_005226e0
   Address: 005226e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_005226e0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  param_2[1] = 0;
  *param_2 = 0;
  uVar1 = FUN_00521c40(0,*(undefined4 *)(param_1 + 0x18));
  param_2[2] = uVar1;
  uVar1 = FUN_00521c90(0,*(undefined4 *)(param_1 + 0x1c));
  param_2[3] = uVar1;
  return;
}


