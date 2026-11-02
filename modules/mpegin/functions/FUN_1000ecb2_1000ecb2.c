/* Module: mpegin.dll
   Function: FUN_1000ecb2
   Address: 1000ecb2
   Source: Ghidra pseudocode (Stage 10 batch) */


float10 __cdecl FUN_1000ecb2(int param_1,int param_2)

{
  int iVar1;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  
  iVar1 = FUN_1000ed62(param_2);
  if (iVar1 != 0) {
    FUN_1000ef27();
    iVar1 = FUN_10011c50();
    if (iVar1 == 0) {
      FUN_1000ed3a(param_1);
    }
    return (float10)(double)CONCAT44(in_stack_00000020,in_stack_0000001c);
  }
  FUN_1000ef27();
  FUN_1000ed3a(param_1);
  return (float10)(double)CONCAT44(in_stack_00000020,in_stack_0000001c);
}


