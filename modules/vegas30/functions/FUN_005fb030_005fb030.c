/* Module: vegas30.exe
   Function: FUN_005fb030
   Address: 005fb030
   Source: Ghidra pseudocode (Stage 10 batch) */


long FUN_005fb030(void)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = ftol();
  lVar2 = Transport_SetTempo(uVar1);
  FUN_00439930();
  return lVar2;
}


