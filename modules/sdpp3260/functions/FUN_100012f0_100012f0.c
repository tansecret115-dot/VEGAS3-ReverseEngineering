/* Module: sdpp3260.dll
   Function: FUN_100012f0
   Address: 100012f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_100012f0(char *param_1,uint param_2)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  if (param_1 == (char *)0x0) {
    return;
  }
  pcVar1 = param_1;
  uVar3 = param_2;
  if (param_2 != 0) {
    do {
      if (*pcVar1 == '\"') {
        uVar3 = uVar3 + 1;
      }
      if (*pcVar1 == '\\') {
        pcVar1 = pcVar1 + 1;
        uVar2 = uVar2 + 1;
      }
      pcVar1 = pcVar1 + 1;
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_2);
  }
  pcVar1 = operator_new(uVar3);
  uVar2 = 0;
  if (param_2 != 0) {
    do {
      if (*param_1 == '\"') {
        *pcVar1 = '\\';
        pcVar1 = pcVar1 + 1;
      }
      if (*param_1 == '\\') {
        *pcVar1 = '\\';
        pcVar1 = pcVar1 + 1;
        param_1 = param_1 + 1;
        uVar2 = uVar2 + 1;
      }
      *pcVar1 = *param_1;
      pcVar1 = pcVar1 + 1;
      param_1 = param_1 + 1;
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_2);
  }
  return;
}


