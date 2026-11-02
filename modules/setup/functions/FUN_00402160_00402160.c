/* Module: Setup.exe
   Function: FUN_00402160
   Address: 00402160
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00402160(void)

{
  FUN_00402860();
  SfPrintF(&DAT_004477e0,"%s%s");
  GetTempPathA(0x104,&DAT_004478e4);
  SfPrintF(&DAT_004476dc,"%s%s");
  return;
}


