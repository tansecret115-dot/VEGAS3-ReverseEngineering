/* Module: sfcdi.dll
   Function: FUN_5bf0d820
   Address: 5bf0d820
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf0d820(HANDLE param_1,byte *param_2,int param_3)

{
  uchar local_94 [20];
  uchar local_80 [128];
  
  if (param_3 != 0) {
    local_80[0] = '\0';
    if (0 < param_3) {
      do {
        FUN_5bf25750(local_94,(BYTE *)"%02x ");
        _mbscat(local_80,local_94);
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
    FUN_5bf0d7a0(param_1,(LPCSTR)local_80);
  }
  return 0;
}


