/* Module: rmbe3260.dll
   Function: FUN_66056fa0
   Address: 66056fa0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_66056fa0(char *param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  
  iVar3 = 0x31fe;
  cVar2 = *param_1;
  while (cVar2 != '\0') {
    pcVar1 = param_1 + 1;
    iVar3 = (int)cVar2 + iVar3 * 0x21;
    param_1 = param_1 + 1;
    cVar2 = *pcVar1;
  }
  return iVar3;
}


