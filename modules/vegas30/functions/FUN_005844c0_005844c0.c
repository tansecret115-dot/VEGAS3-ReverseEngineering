/* Module: vegas30.exe
   Function: FUN_005844c0
   Address: 005844c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_005844c0(undefined4 *param_1)

{
  int iVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  iVar1 = 3;
  do {
    FUN_005808d0();
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  FUN_005808d0();
  FUN_005808d0();
  param_1[0xb] = 0;
  param_1[0xc] = 0xffffffff;
  param_1[0xd] = 0;
  *param_1 = &PTR_FUN_0062904c;
  DAT_0065a054 = param_1;
  return param_1;
}


