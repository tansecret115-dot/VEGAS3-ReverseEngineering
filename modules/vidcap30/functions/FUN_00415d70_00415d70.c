/* Module: vidcap30.exe
   Function: FUN_00415d70
   Address: 00415d70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00415d70(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_2 + 0xc) == 1) {
    uVar1 = 0x20;
  }
  else if (*(int *)(param_2 + 0xc) == 0x10001) {
    uVar1 = FUN_00420110(*(undefined4 *)(param_2 + 0x24),param_2 + 0x34);
    return uVar1;
  }
  return uVar1;
}


