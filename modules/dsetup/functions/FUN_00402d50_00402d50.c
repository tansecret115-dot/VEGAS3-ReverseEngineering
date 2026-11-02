/* Module: dsetup.dll
   Function: FUN_00402d50
   Address: 00402d50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00402d50(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 1) {
    DAT_0040aaac = GetVersion();
    iVar1 = FUN_00403d96(1);
    if (iVar1 != 0) {
      _DAT_0040aab8 = DAT_0040aaac >> 8 & 0xff;
      _DAT_0040aab4 = DAT_0040aaac & 0xff;
      DAT_0040aaac = DAT_0040aaac >> 0x10;
      _DAT_0040aab0 = _DAT_0040aab4 * 0x100 + _DAT_0040aab8;
      iVar1 = FUN_0040344d();
      if (iVar1 != 0) {
        DAT_0040b178 = GetCommandLineA();
        DAT_0040aa98 = FUN_00403aef();
        FUN_004035d9();
        FUN_004038a2();
        FUN_004037e9();
        FUN_0040332f();
        DAT_0040aa94 = DAT_0040aa94 + 1;
        goto LAB_00402e23;
      }
      FUN_00403df3();
    }
LAB_00402db0:
    uVar2 = 0;
  }
  else {
    if (param_2 == 0) {
      if (DAT_0040aa94 < 1) goto LAB_00402db0;
      DAT_0040aa94 = DAT_0040aa94 + -1;
      if (DAT_0040aae4 == 0) {
        FUN_0040336d();
      }
      FUN_00403795();
      FUN_004034a1();
      FUN_00403df3();
    }
    else if (param_2 == 3) {
      FUN_00403539((undefined *)0x0);
    }
LAB_00402e23:
    uVar2 = 1;
  }
  return uVar2;
}


