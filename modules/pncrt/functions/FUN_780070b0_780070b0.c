/* Module: pncrt.dll
   Function: FUN_780070b0
   Address: 780070b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_780070b0(char *param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  
  iVar3 = 0;
  cVar2 = *param_1;
  while (cVar2 != '\0') {
    pcVar1 = param_1 + 1;
    iVar3 = iVar3 + 1;
    param_1 = param_1 + 1;
    cVar2 = *pcVar1;
  }
  return iVar3;
}


