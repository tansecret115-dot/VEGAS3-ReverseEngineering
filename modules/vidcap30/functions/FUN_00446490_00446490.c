/* Module: vidcap30.exe
   Function: FUN_00446490
   Address: 00446490
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00446490(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x2e8);
  }
  return uVar1;
}


