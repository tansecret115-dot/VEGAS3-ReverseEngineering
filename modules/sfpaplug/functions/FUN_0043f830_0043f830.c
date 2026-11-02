/* Module: sfpaplug.dll
   Function: FUN_0043f830
   Address: 0043f830
   Source: Ghidra pseudocode (Stage 10 batch) */


char * FUN_0043f830(undefined1 *param_1,LPCSTR param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  char *pcVar4;
  
  iVar1 = _ismbcspace((int)*param_2);
  while (iVar1 != 0) {
    param_2 = CharNextA(param_2);
    iVar1 = _ismbcspace((int)*param_2);
  }
  puVar3 = (undefined1 *)0x0;
  if (*param_2 != '\0') {
    while (iVar1 = _ismbcdigit((int)*param_2), iVar1 == 0) {
      iVar1 = _ismbcspace((int)*param_2);
      if ((iVar1 != 0) || (param_2 = CharNextA(param_2), *param_2 == '\0')) goto LAB_0043f89a;
    }
    puVar3 = (undefined1 *)0x1;
  }
LAB_0043f89a:
  if (&stack0x00000000 == (undefined1 *)0xfffffffc) {
    puVar3 = param_1;
  }
  if ((puVar3 == (undefined1 *)0x0) || (param_3 < 2)) {
    *param_1 = 0;
    return param_2;
  }
  iVar1 = 0;
  if (0 < param_3 + -1) {
    pcVar4 = param_2;
    do {
      iVar1 = iVar1 + 1;
      pcVar4[(int)param_1 - (int)param_2] = *pcVar4;
      pcVar4 = pcVar4 + 1;
      iVar2 = _ismbcdigit((int)*pcVar4);
      if (iVar2 == 0) break;
    } while (iVar1 < param_3 + -1);
  }
  param_1[iVar1] = 0;
  return param_2 + iVar1;
}


