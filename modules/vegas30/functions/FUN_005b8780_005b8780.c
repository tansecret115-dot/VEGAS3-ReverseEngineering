/* Module: vegas30.exe
   Function: FUN_005b8780
   Address: 005b8780
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005b8780(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x208);
  *(undefined4 *)(param_1 + 0x208) = param_2;
  return uVar1;
}


