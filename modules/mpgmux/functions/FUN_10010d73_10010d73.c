/* Module: mpgmux.dll
   Function: FUN_10010d73
   Address: 10010d73
   Source: Ghidra pseudocode (Stage 10 batch) */


float10 __cdecl FUN_10010d73(int param_1,int param_2)

{
  int iVar1;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  
  iVar1 = FUN_10010e23(param_2);
  if (iVar1 != 0) {
    FUN_10010fe8();
    iVar1 = FUN_100127d6();
    if (iVar1 == 0) {
      FUN_10010dfb(param_1);
    }
    return (float10)(double)CONCAT44(in_stack_00000020,in_stack_0000001c);
  }
  FUN_10010fe8();
  FUN_10010dfb(param_1);
  return (float10)(double)CONCAT44(in_stack_00000020,in_stack_0000001c);
}


