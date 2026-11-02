/* Module: rmbe3260.dll
   Function: FUN_6602e1a0
   Address: 6602e1a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_6602e1a0(int param_1,undefined4 param_2)

{
  if ((DAT_66075234 == (int *)0x0) && (FUN_6602e060((char *)0x0), DAT_66075234 == (int *)0x0)) {
    return;
  }
  (**(code **)(*DAT_66075234 + 0xc))(DAT_66075234,param_1,param_2);
  if (DAT_66075230 == 0) {
    DAT_66075230 = param_1;
  }
  return;
}


