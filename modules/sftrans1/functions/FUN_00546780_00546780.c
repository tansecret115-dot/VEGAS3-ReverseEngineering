/* Module: sftrans1.dll
   Function: FUN_00546780
   Address: 00546780
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_00546780(undefined4 *param_1)

{
  int iVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  iVar1 = 3;
  do {
    FUN_00545bc0();
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  FUN_00545bc0();
  FUN_00545bc0();
  param_1[0xb] = 0;
  param_1[0xc] = 0xffffffff;
  param_1[0xd] = 0;
  *param_1 = &PTR_FUN_0056f52c;
  DAT_00622478 = param_1;
  return param_1;
}


