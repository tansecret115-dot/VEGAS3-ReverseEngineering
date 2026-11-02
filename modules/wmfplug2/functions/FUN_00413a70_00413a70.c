/* Module: wmfplug2.dll
   Function: FUN_00413a70
   Address: 00413a70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00413a70(uint param_1,uchar *param_2)

{
  *param_2 = '\0';
  if (param_1 != 0) {
    if ((param_1 & 0xfffff) == 0) {
      FUN_00425a40(param_2,"$d");
      _mbscat(param_2," M");
      return;
    }
    if ((param_1 & 0x3ff) == 0) {
      FUN_00425a40(param_2,"$d");
      _mbscat(param_2," K");
      return;
    }
    FUN_00425a40(param_2,"$d");
  }
  return;
}


