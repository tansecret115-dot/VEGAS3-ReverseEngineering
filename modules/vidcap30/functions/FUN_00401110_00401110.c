/* Module: vidcap30.exe
   Function: FUN_00401110
   Address: 00401110
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00401110(void)

{
  LONG LVar1;
  LONG LVar2;
  
  if (DAT_005ba508 != 0 || DAT_005ba50c != 0) {
    LVar1 = InterlockedExchange(&DAT_005ba50c,0);
    LVar2 = InterlockedExchange(&DAT_005ba508,0);
    FUN_004060b0(DAT_005ba4c0,LVar1,LVar2,1);
  }
  return;
}


