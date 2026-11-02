/* Module: pncrt.dll
   Function: FUN_780300a0
   Address: 780300a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_780300a0(char *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  
  if (param_2 != 0) {
    uVar2 = 0xffffffff;
    pcVar3 = param_1;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    memmove(param_1 + param_2,param_1,~uVar2);
  }
  return;
}


