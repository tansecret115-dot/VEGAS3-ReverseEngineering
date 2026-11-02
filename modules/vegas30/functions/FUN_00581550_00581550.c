/* Module: vegas30.exe
   Function: FUN_00581550
   Address: 00581550
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00581550(void)

{
  if (DAT_0065a04c != (HGDIOBJ)0x0) {
    DeleteObject(DAT_0065a04c);
    DAT_0065a04c = (HGDIOBJ)0x0;
  }
  if (DAT_0065a050 != (HGDIOBJ)0x0) {
    DeleteObject(DAT_0065a050);
    DAT_0065a050 = (HGDIOBJ)0x0;
  }
  return;
}


