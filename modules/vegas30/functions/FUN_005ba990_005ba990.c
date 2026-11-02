/* Module: vegas30.exe
   Function: FUN_005ba990
   Address: 005ba990
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005ba990(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0xc44);
  *(undefined4 *)(param_1 + 0xc44) = param_2;
  return uVar1;
}


