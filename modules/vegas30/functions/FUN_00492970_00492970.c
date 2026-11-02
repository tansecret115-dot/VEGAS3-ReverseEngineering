/* Module: vegas30.exe
   Function: FUN_00492970
   Address: 00492970
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00492970(void)

{
  int iVar1;
  
  if (DAT_0063e390 == 0) {
    FUN_0048f4d0();
  }
  iVar1 = FUN_004927b0();
  if (iVar1 < 0) {
    return 0;
  }
  _SfLoadString_16(DAT_00647204,0x5282,&DAT_0064c190,100);
  _SfLoadString_16(DAT_00647204,0x5283,&DAT_0064c000,100);
  return 1;
}


