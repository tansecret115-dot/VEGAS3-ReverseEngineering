/* Module: rnco3260.dll
   Function: GetColorConverter
   Address: 636f3b70
   Source: Ghidra pseudocode (Stage 10 batch) */


int GetColorConverter(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
                    /* 0x3b70  9  GetColorConverter */
  if ((((-1 < param_1) && (param_1 < 0xb)) && (-1 < param_2)) &&
     ((param_2 < 0xb || (param_2 == 0xc)))) {
    piVar2 = (int *)(&PTR_DAT_63766210)[param_1];
    iVar1 = *piVar2;
    if (iVar1 != 0xb) {
      do {
        if (iVar1 == param_2) {
          return piVar2[1];
        }
        iVar1 = piVar2[2];
        piVar2 = piVar2 + 2;
      } while (iVar1 != 0xb);
      return 0;
    }
  }
  return 0;
}


