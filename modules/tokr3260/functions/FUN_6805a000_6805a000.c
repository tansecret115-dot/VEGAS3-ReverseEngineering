/* Module: tokr3260.dll
   Function: FUN_6805a000
   Address: 6805a000
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_6805a000(void)

{
  bool bVar1;
  int local_2c;
  int local_28;
  int local_1c;
  int local_c;
  
  bVar1 = DAT_68061210 == 0;
  DAT_68061210 = DAT_68061210 + 1;
  if (bVar1) {
    DAT_68061210 = 1;
    DAT_6806121c = FUN_68058bb0;
    DAT_68061218 = FUN_68058c60;
    DAT_68061220 = FUN_68057360;
    FUN_6805a090(&local_2c);
    if (local_2c == 1) {
      if (local_28 == 5) {
        DAT_68061218 = FUN_680510b0;
        DAT_6806121c = FUN_68051000;
      }
      if (local_1c != 0) {
        DAT_68061218 = FUN_6805a459;
      }
      if (local_c != 0) {
        DAT_6806121c = FUN_6805a2a0;
      }
    }
  }
  return;
}


