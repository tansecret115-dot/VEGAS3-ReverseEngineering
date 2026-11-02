/* Module: sfnetmedia.dll
   Function: FUN_0041e330
   Address: 0041e330
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041e330(uchar *param_1,uchar *param_2)

{
  int iVar1;
  BYTE *pBVar2;
  uchar *_Source;
  
  if ((param_1 != (uchar *)0x0) && (*param_1 != '\0')) {
    iVar1 = FUN_00413a60(param_1,0x19000);
    if (iVar1 != -1) {
      pBVar2 = FUN_00419120(DAT_00441d60,0x10ab);
      FUN_004156f0(param_2,pBVar2);
      return;
    }
  }
  _Source = FUN_00419120(DAT_00441d60,0x10aa);
  _mbscpy(param_2,_Source);
  return;
}


