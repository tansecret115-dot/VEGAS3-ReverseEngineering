/* Module: pncrt.dll
   Function: FUN_78013bb0
   Address: 78013bb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_78013bb0(char *param_1,undefined2 *param_2,int param_3)

{
  int iVar1;
  uint _Value;
  BOOL BVar2;
  
  if (DAT_780424fc == (code *)0x0) {
    iVar1 = FUN_78014510();
    if (iVar1 == 0) {
      DAT_780424fc = FUN_78014550;
    }
    else {
      DAT_780424fc = GetLocaleInfoA_exref;
    }
  }
  if (param_1 != (char *)0x0) {
    DAT_780424ec = param_1;
    if (*param_1 != '\0') {
      FUN_78013d50(0x7803fca8,0x40,(int *)&DAT_780424ec);
    }
    DAT_780424f0 = param_1 + 0x40;
    if ((DAT_780424f0 != (char *)0x0) && (*DAT_780424f0 != '\0')) {
      FUN_78013d50(0x7803feb0,0x16,(int *)&DAT_780424f0);
    }
    DAT_780424f4 = 0;
    if ((DAT_780424ec != (char *)0x0) && (*DAT_780424ec != '\0')) {
      if ((DAT_780424f0 == (char *)0x0) || (*DAT_780424f0 == '\0')) {
        FUN_78014120();
      }
      else {
        FUN_78013db0();
      }
      goto LAB_78013c75;
    }
    if ((DAT_780424f0 != (char *)0x0) && (*DAT_780424f0 != '\0')) {
      FUN_78014260();
      goto LAB_78013c75;
    }
  }
  FUN_78014340();
LAB_78013c75:
  if ((((DAT_780424f4 != 0) && (_Value = FUN_78014360((byte *)(param_1 + 0x80)), _Value != 0)) &&
      (BVar2 = IsValidCodePage(_Value & 0xffff), BVar2 != 0)) &&
     (BVar2 = IsValidLocale(DAT_780424dc,1), BVar2 != 0)) {
    if (param_2 != (undefined2 *)0x0) {
      *param_2 = (undefined2)DAT_780424dc;
      param_2[1] = (undefined2)DAT_780424f8;
      param_2[2] = (short)_Value;
    }
    if (param_3 == 0) {
      return 1;
    }
    iVar1 = (*DAT_780424fc)(DAT_780424dc,0x1001,param_3,0x40);
    if ((iVar1 != 0) &&
       (iVar1 = (*DAT_780424fc)(DAT_780424f8,0x1002,param_3 + 0x40,0x40), iVar1 != 0)) {
      _itoa(_Value,(char *)(param_3 + 0x80),10);
      return 1;
    }
  }
  return 0;
}


