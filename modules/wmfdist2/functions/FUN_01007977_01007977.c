/* Module: wmfdist2.exe
   Function: FUN_01007977
   Address: 01007977
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_01007977(int param_1,byte param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x2eb0);
  FUN_010078d8(param_1,param_2);
  return uVar1 >> (0x20 - param_2 & 0x1f);
}


