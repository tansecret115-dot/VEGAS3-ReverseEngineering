/* Module: vegas30k.dll
   Function: cdr_IsISRCValid
   Address: 010998f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall cdr_IsISRCValid(unsigned char *) */

int cdr_IsISRCValid(uchar *param_1)

{
  int iVar1;
  int iVar2;
  
                    /* 0x998f0  600  ?cdr_IsISRCValid@@YGHPAE@Z */
  iVar2 = 0;
  do {
    iVar1 = isalnum((uint)*param_1);
    if (iVar1 == 0) {
      return 0;
    }
    param_1 = param_1 + 1;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 5);
  iVar2 = 0;
  do {
    iVar1 = isdigit((uint)*param_1);
    if (iVar1 == 0) {
      return 0;
    }
    param_1 = param_1 + 1;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 7);
  return 1;
}


