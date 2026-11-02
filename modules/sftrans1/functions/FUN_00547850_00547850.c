/* Module: sftrans1.dll
   Function: FUN_00547850
   Address: 00547850
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00547850(void)

{
  if (DAT_0062247c != (HGDIOBJ)0x0) {
    DeleteObject(DAT_0062247c);
    DAT_0062247c = (HGDIOBJ)0x0;
  }
  if (DAT_00622480 != (HGDIOBJ)0x0) {
    DeleteObject(DAT_00622480);
    DAT_00622480 = (HGDIOBJ)0x0;
  }
  return;
}


