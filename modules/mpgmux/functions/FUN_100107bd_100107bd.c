/* Module: mpgmux.dll
   Function: FUN_100107bd
   Address: 100107bd
   Source: Ghidra pseudocode (Stage 10 batch) */


float10 __cdecl FUN_100107bd(int param_1,double param_2)

{
  DWORD *pDVar1;
  float10 fVar2;
  
  if (DAT_1001a3d0 == 0) {
    fVar2 = FUN_10010d73(1,param_1);
    return fVar2;
  }
  pDVar1 = FUN_1000ff9f();
  *pDVar1 = 0x21;
  FUN_10010fe8();
  return (float10)param_2;
}


