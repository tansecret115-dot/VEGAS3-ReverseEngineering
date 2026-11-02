/* Module: encn3260.dll
   Function: FUN_664d02a0
   Address: 664d02a0
   Source: Ghidra pseudocode (Stage 10 batch) */


byte __cdecl FUN_664d02a0(int param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  bool bVar3;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    pcVar2 = (char *)(param_2 + -1 + param_1);
    param_1 = 0;
    iVar1 = isdigit((int)*pcVar2);
    bVar3 = iVar1 != 0;
    while (param_2 = param_2 + -1, param_2 != 0) {
      if (*pcVar2 == '.') {
        param_1 = param_1 + 1;
      }
      else {
        iVar1 = isalpha((int)*pcVar2);
        if (iVar1 != 0) {
          bVar3 = false;
        }
      }
      pcVar2 = pcVar2 + -1;
    }
    return (param_1 != 3) - 1U & bVar3;
  }
  return 0;
}


