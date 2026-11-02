/* Module: vidcap30.exe
   Function: FUN_00434740
   Address: 00434740
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00434740(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x1660);
  }
  return uVar1;
}


