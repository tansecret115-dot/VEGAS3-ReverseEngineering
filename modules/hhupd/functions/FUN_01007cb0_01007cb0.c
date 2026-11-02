/* Module: hhupd.exe
   Function: FUN_01007cb0
   Address: 01007cb0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl FUN_01007cb0(int param_1,byte param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x2eb0);
  FUN_01007be0(param_1,param_2);
  return uVar1 >> (0x20 - param_2 & 0x1f);
}


