/* Module: 50comupd.exe
   Function: FUN_010075b6
   Address: 010075b6
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_010075b6(int param_1,byte param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x2eb0);
  FUN_01007517(param_1,param_2);
  return uVar1 >> (0x20 - param_2 & 0x1f);
}


