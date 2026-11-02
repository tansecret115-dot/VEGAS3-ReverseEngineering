/* Module: sfxpfx1.dll
   Function: FUN_5c985710
   Address: 5c985710
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5c985710(char *param_1)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  cVar2 = *param_1;
  while (cVar2 != '\0') {
    uVar3 = FUN_5c985440(cVar2);
    if ((uVar3 & 0xff) != 0xff) {
      uVar4 = uVar4 << 5 | uVar3 & 0xff;
    }
    pcVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    cVar2 = *pcVar1;
  }
  return uVar4;
}


