/* Module: vegas30.exe
   Function: FUN_004011a0
   Address: 004011a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004011a0(void)

{
  LONG LVar1;
  LONG LVar2;
  
  if (DAT_00647678 != 0 || DAT_0064767c != 0) {
    LVar1 = InterlockedExchange(&DAT_0064767c,0);
    LVar2 = InterlockedExchange(&DAT_00647678,0);
    FUN_0040d540(DAT_0064762c,LVar1,LVar2,1);
  }
  return;
}


