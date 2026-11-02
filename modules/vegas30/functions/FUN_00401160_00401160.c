/* Module: vegas30.exe
   Function: FUN_00401160
   Address: 00401160
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00401160(void)

{
  LONG LVar1;
  LONG LVar2;
  
  if (DAT_00647678 != 0 || DAT_0064767c != 0) {
    LVar1 = InterlockedExchange(&DAT_0064767c,0);
    LVar2 = InterlockedExchange(&DAT_00647678,0);
    FUN_0040d540(DAT_0064762c,LVar1,LVar2,0);
  }
  return;
}


