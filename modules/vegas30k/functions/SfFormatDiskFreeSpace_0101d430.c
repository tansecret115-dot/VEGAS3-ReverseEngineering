/* Module: vegas30k.dll
   Function: SfFormatDiskFreeSpace
   Address: 0101d430
   Source: Ghidra pseudocode (Stage 10 batch) */


/* void __stdcall SfFormatDiskFreeSpace(char const *,char *) */

void SfFormatDiskFreeSpace(char *param_1,char *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uchar *_Source;
  
                    /* 0x1d430  396  ?SfFormatDiskFreeSpace@@YGXPBDPAD@Z */
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    iVar1 = _SfGetDiskFreeSpace_8(param_1,0x19000);
    if (iVar1 != -1) {
      uVar2 = _SfGetString2_8(DAT_0120e5c8,0x10ab);
      SfPrintF(param_2,uVar2,iVar1);
      return;
    }
  }
  _Source = (uchar *)_SfGetString2_8(DAT_0120e5c8,0x10aa);
  _mbscpy((uchar *)param_2,_Source);
  return;
}


