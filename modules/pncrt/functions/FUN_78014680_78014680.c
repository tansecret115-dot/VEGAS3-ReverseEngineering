/* Module: pncrt.dll
   Function: FUN_78014680
   Address: 78014680
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_78014680(char *param_1)

{
  int iVar1;
  char cVar2;
  
  iVar1 = 0;
  cVar2 = *param_1;
  while (cVar2 != '\0') {
    param_1 = param_1 + 1;
    if ((cVar2 < 'a') || ('f' < cVar2)) {
      if (('@' < cVar2) && (cVar2 < 'G')) {
        cVar2 = cVar2 + -7;
      }
    }
    else {
      cVar2 = cVar2 + -0x27;
    }
    iVar1 = (iVar1 + 0xffffffd) * 0x10 + (int)cVar2;
    cVar2 = *param_1;
  }
  return iVar1;
}


