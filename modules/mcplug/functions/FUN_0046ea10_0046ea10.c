/* Module: mcplug.dll
   Function: FUN_0046ea10
   Address: 0046ea10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0046ea10(LPCSTR param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_1 != (LPCSTR)0x0) && (*param_1 != '\0')) {
    iVar2 = 0;
    while( true ) {
      param_1 = CharNextA(param_1);
      if (param_1 == (LPSTR)0x0) {
        return 0;
      }
      if (*param_1 == '\0') break;
      iVar2 = iVar2 + 1;
      if (1 < iVar2) {
        uVar3 = 0;
        for (; (param_1 != (LPCSTR)0x0 && (cVar1 = *param_1, cVar1 != '\0'));
            param_1 = CharNextA(param_1)) {
          if (cVar1 != '-') {
            if (cVar1 != '0') {
              return 0;
            }
            uVar3 = 1;
          }
        }
        return uVar3;
      }
    }
    return 0;
  }
  return 0;
}


