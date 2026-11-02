/* Module: erv13260.dll
   Function: FUN_635fe9f0
   Address: 635fe9f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_635fe9f0(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  FUN_635fff70(param_4,param_1,0x10);
  FUN_635fff70(param_4 + 0x100,param_1 + 8,0x10);
  FUN_635fff70(param_4 + 0x200,param_1 + 0x80,0x10);
  FUN_635fff70(param_4 + 0x300,param_1 + 0x88,0x10);
  FUN_635fff70(param_4 + 0x400,param_1 + 0x140,8);
  FUN_635fff70(param_4 + 0x500,param_1 + 0x100,8);
  return;
}


