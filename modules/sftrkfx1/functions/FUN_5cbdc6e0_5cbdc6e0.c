/* Module: sftrkfx1.dll
   Function: FUN_5cbdc6e0
   Address: 5cbdc6e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uchar * FUN_5cbdc6e0(float param_1,int param_2,float param_3,uchar *param_4)

{
  uchar *puVar1;
  int iVar2;
  uchar local_18 [2];
  char local_16;
  
  if ((param_3 != (float)_DAT_5cc04098) && (param_1 <= param_3)) {
    puVar1 = FUN_5cbd6910(DAT_5cc114f8,0x10ca);
    return puVar1;
  }
  puVar1 = FUN_5cbd59d0((int)DAT_5cc114f8,0x18);
  if (puVar1 == (uchar *)0x0) {
    puVar1 = FUN_5cbd6910(DAT_5cc114f8,0x10c9);
    return puVar1;
  }
  if (param_2 < 0) {
LAB_5cbdc7a3:
    ftol();
    iVar2 = FUN_5cbbf190(puVar1,"$d");
  }
  else {
    if (param_2 < 10) {
      if (param_2 == 0) goto LAB_5cbdc7a3;
    }
    else {
      param_2 = 9;
    }
    _mbscpy(local_18,"$.Xf");
    local_16 = (char)param_2 + '0';
    iVar2 = FUN_5cbbf190(puVar1,local_18);
  }
  if (param_4 != (uchar *)0x0) {
    _mbscpy(puVar1 + iVar2,param_4);
  }
  return puVar1;
}


