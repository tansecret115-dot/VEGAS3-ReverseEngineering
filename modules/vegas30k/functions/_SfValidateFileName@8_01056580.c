/* Module: vegas30k.dll
   Function: _SfValidateFileName@8
   Address: 01056580
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfValidateFileName_8(LPCSTR param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  
                    /* 0x56580  1238  _SfValidateFileName@8 */
  cVar1 = *param_1;
  uVar2 = 1;
  do {
    if (cVar1 == '\0') {
      return uVar2;
    }
    switch(cVar1) {
    case '\"':
    case '*':
    case '/':
    case ':':
    case '<':
    case '>':
    case '?':
    case '\\':
    case '|':
      uVar2 = 0;
      if (param_2 == 0) {
        return 0;
      }
      *param_1 = '_';
    }
    param_1 = CharNextA(param_1);
    cVar1 = *param_1;
  } while( true );
}


