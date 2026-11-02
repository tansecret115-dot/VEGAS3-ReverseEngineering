/* Module: vidcap30.exe
   Function: FUN_00454a90
   Address: 00454a90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00454a90(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_2 == 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x44);
  }
  else {
    if (param_2 == 1) {
      return *(undefined4 *)(param_1 + 0x48);
    }
    if (param_2 == 2) {
      return *(undefined4 *)(param_1 + 0x4c);
    }
  }
  return uVar1;
}


