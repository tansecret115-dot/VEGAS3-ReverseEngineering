/* Module: vidcap30.exe
   Function: FUN_00446470
   Address: 00446470
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00446470(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x2ec);
  }
  return uVar1;
}


