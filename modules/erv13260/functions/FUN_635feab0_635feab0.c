/* Module: erv13260.dll
   Function: FUN_635feab0
   Address: 635feab0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_635feab0(int *param_1,undefined4 *param_2,int param_3,int param_4)

{
  uint uVar1;
  
  uVar1 = (uint)(2 < param_4);
  FUN_63601340(param_1,param_2,0x10,param_3,uVar1);
  FUN_63601340(param_1 + 0x40,param_2 + 8,0x10,param_3,uVar1);
  FUN_63601340(param_1 + 0x80,param_2 + 0x80,0x10,param_3,uVar1);
  FUN_63601340(param_1 + 0xc0,param_2 + 0x88,0x10,param_3,uVar1);
  FUN_63601340(param_1 + 0x100,param_2 + 0x140,8,param_3,uVar1);
  FUN_63601340(param_1 + 0x140,param_2 + 0x100,8,param_3,uVar1);
  return;
}


