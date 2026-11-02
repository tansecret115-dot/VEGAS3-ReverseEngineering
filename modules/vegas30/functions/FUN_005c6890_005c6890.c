/* Module: vegas30.exe
   Function: FUN_005c6890
   Address: 005c6890
   Source: Ghidra pseudocode (Stage 10 batch) */


char * FUN_005c6890(int param_1)

{
  char *pcVar1;
  undefined1 local_20 [32];
  
  pcVar1 = *(char **)(param_1 + 0xc);
  if ((pcVar1 == (char *)0x0) || (*pcVar1 == '\0')) {
    _SfLoadString_16(DAT_00647204,0x5100,local_20,0x20);
    SfPrintF(&DAT_0065ad74,local_20,*(int *)(param_1 + 0x18) + 1);
    pcVar1 = &DAT_0065ad74;
  }
  return pcVar1;
}


