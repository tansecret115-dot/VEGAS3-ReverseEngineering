/* Module: vegas30.exe
   Function: FUN_0043e000
   Address: 0043e000
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_0043e000(void)

{
  bool bVar1;
  
  bVar1 = DAT_0064b57c == 0;
  if (!bVar1) {
    SfCdi_Terminate(DAT_006471fc);
    _SfList_Destroy_4(DAT_0064b57c);
    DAT_0064b57c = 0;
  }
  return bVar1;
}


