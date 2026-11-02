/* Module: vegas30.exe
   Function: FUN_00579bc0
   Address: 00579bc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00579bc0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0x17;
  param_1[1] = 1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  puVar1 = param_1 + 7;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1 = puVar1 + 5;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  *param_1 = &PTR_FUN_00627324;
  return;
}


