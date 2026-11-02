/* Module: vidcap30.exe
   Function: FUN_00470b50
   Address: 00470b50
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00470b50(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x14) = param_2;
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) & 0xfc;
  return;
}


