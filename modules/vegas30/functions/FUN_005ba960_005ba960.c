/* Module: vegas30.exe
   Function: FUN_005ba960
   Address: 005ba960
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005ba960(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0xc40);
  *(undefined4 *)(param_1 + 0xc40) = param_3;
  return uVar1;
}


