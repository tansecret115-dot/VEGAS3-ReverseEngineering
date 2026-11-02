/* Module: sfcdi.dll
   Function: SfFormatDiskFreeSpace
   Address: 5bf1e8e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* void __stdcall SfFormatDiskFreeSpace(char const *,char *) */

void SfFormatDiskFreeSpace(char *param_1,char *param_2)

{
  uint uVar1;
  BYTE *pBVar2;
  uchar *_Source;
  
                    /* 0x1e8e0  86  ?SfFormatDiskFreeSpace@@YGXPBDPAD@Z */
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    uVar1 = FUN_5bf23ac0((uchar *)param_1,0x19000);
    if (uVar1 != 0xffffffff) {
      if (uVar1 < 10000) {
        pBVar2 = (BYTE *)FUN_5bf283e0(DAT_5bf65fc4,0x497);
        FUN_5bf25750((uchar *)param_2,pBVar2);
        return;
      }
      pBVar2 = (BYTE *)FUN_5bf283e0(DAT_5bf65fc4,0x498);
      FUN_5bf25750((uchar *)param_2,pBVar2);
      return;
    }
  }
  _Source = (uchar *)FUN_5bf283e0(DAT_5bf65fc4,0x496);
  _mbscpy((uchar *)param_2,_Source);
  return;
}


