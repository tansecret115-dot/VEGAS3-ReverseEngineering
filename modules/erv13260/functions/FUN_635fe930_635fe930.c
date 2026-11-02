/* Module: erv13260.dll
   Function: FUN_635fe930
   Address: 635fe930
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_635fe930(int param_1,uint *param_2,int param_3,int param_4)

{
  uint uVar1;
  
  uVar1 = (uint)(2 < param_4);
  FUN_635ffe60(param_1,param_2,param_3,uVar1);
  FUN_635ffe60(param_1 + 0x100,param_2 + 0x40,param_3,uVar1);
  FUN_635ffe60(param_1 + 0x200,param_2 + 0x80,param_3,uVar1);
  FUN_635ffe60(param_1 + 0x300,param_2 + 0xc0,param_3,uVar1);
  FUN_635ffe60(param_1 + 0x400,param_2 + 0x100,param_3,uVar1);
  FUN_635ffe60(param_1 + 0x500,param_2 + 0x140,param_3,uVar1);
  return;
}


