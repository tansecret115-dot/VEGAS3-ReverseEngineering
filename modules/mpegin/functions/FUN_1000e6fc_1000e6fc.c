/* Module: mpegin.dll
   Function: FUN_1000e6fc
   Address: 1000e6fc
   Source: Ghidra pseudocode (Stage 10 batch) */


float10 __cdecl FUN_1000e6fc(int param_1,double param_2)

{
  DWORD *pDVar1;
  float10 fVar2;
  
  if (DAT_1001b638 == 0) {
    fVar2 = FUN_1000ecb2(1,param_1);
    return fVar2;
  }
  pDVar1 = FUN_10011c3e();
  *pDVar1 = 0x21;
  FUN_1000ef27();
  return (float10)param_2;
}


