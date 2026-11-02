/* Module: vegas30.exe
   Function: FUN_005d1520
   Address: 005d1520
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005d1520(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x1fc) != 0) {
    return 1;
  }
  uVar1 = _SfList_CreateExZ_32((int *)(param_1 + 0x1fc),4,8,8,0x40000002,0,0,0);
  return uVar1;
}


