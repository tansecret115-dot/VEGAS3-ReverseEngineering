/* Module: vegas30.exe
   Function: FUN_0055df10
   Address: 0055df10
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_0055df10(void)

{
  int iVar1;
  
  iVar1 = _SfList_Destroy_4(DAT_00659524);
  DAT_00659524 = 0;
  return -1 < iVar1;
}


