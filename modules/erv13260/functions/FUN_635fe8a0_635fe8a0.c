/* Module: erv13260.dll
   Function: FUN_635fe8a0
   Address: 635fe8a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_635fe8a0(int *param_1,int param_2)

{
  FUN_635feb70(param_2,param_1,0x10);
  FUN_635feb70(param_2 + 0x100,param_1 + 8,0x10);
  FUN_635feb70(param_2 + 0x200,param_1 + 0x80,0x10);
  FUN_635feb70(param_2 + 0x300,param_1 + 0x88,0x10);
  FUN_635feb70(param_2 + 0x400,param_1 + 0x140,8);
  FUN_635feb70(param_2 + 0x500,param_1 + 0x100,8);
  return;
}


