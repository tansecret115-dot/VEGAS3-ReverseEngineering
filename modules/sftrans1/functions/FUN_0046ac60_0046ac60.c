/* Module: sftrans1.dll
   Function: FUN_0046ac60
   Address: 0046ac60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046ac60(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  unkbyte10 Var3;
  
  iVar2 = 0;
  do {
    if (iVar2 < 0x80) {
      Var3 = _CIacos();
      fsin(Var3);
LAB_0046ad82:
      uVar1 = ftol();
      *(undefined1 *)(iVar2 + param_1) = uVar1;
    }
    else {
      if (iVar2 != 0x80) {
        Var3 = _CIacos();
        fsin(Var3);
        goto LAB_0046ad82;
      }
      *(undefined1 *)(param_1 + 0x80) = 0x80;
    }
    iVar2 = iVar2 + 1;
    if (0xff < iVar2) {
      return;
    }
  } while( true );
}


