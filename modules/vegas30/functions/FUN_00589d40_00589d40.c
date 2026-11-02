/* Module: vegas30.exe
   Function: FUN_00589d40
   Address: 00589d40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00589d40(void)

{
  DWORD DVar1;
  
  if (DAT_0065a06c != 0) {
    FUN_00595650(&DAT_0065a06c);
  }
  if (DAT_0065a070 != 0) {
    DVar1 = GetCurrentThreadId();
    FUN_0058f7e0(DAT_0065a070,DVar1);
    FUN_0058f780(&DAT_0065a070);
  }
  if (DAT_0065a068 != 0) {
    FUN_00595330(&DAT_0065a068);
  }
  if (DAT_0065a074 != 0) {
    FUN_00592470(&DAT_0065a074);
  }
  return;
}


