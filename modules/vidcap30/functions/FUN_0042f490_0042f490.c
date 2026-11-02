/* Module: vidcap30.exe
   Function: FUN_0042f490
   Address: 0042f490
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0042f490(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return uVar1;
}


