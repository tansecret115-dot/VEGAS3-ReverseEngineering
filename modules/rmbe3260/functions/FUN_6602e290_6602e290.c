/* Module: rmbe3260.dll
   Function: FUN_6602e290
   Address: 6602e290
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_6602e290(uint param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (DAT_66075234 == (int *)0x0) {
    FUN_6602e060((char *)0x0);
    if (DAT_66075234 == (int *)0x0) {
      return 0;
    }
  }
  uVar1 = FUN_6602e2e0(param_1);
  uVar2 = (**(code **)(*DAT_66075234 + 0x34))(DAT_66075234,uVar1,param_2,param_3);
  return uVar2;
}


