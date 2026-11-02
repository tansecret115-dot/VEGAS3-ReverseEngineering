/* Module: rnco3260.dll
   Function: ScanCompatibleColorFormats
   Address: 636f3bc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
ScanCompatibleColorFormats(int param_1,uint param_2,undefined4 param_3,undefined *param_4)

{
  int iVar1;
  int *piVar2;
  
                    /* 0x3bc0  15  ScanCompatibleColorFormats */
  if (((-1 < param_1) && (param_1 < 0xb)) && (param_4 != (undefined *)0x0)) {
    piVar2 = (int *)(&PTR_DAT_63766210)[param_1];
    iVar1 = *piVar2;
    if (iVar1 != 0xb) {
      while (((param_2 & 1 << ((byte)iVar1 & 0x1f)) == 0 ||
             (iVar1 = (*(code *)param_4)(param_3,iVar1,piVar2[1]), iVar1 == 0))) {
        iVar1 = piVar2[2];
        piVar2 = piVar2 + 2;
        if (iVar1 == 0xb) {
          return 0;
        }
      }
      return 1;
    }
  }
  return 0;
}


