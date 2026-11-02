/* Module: dsetup.dll
   Function: FUN_00404bd8
   Address: 00404bd8
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_00404bd8(int param_1,int param_2,byte *param_3)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x18 + (param_2 - *(int *)(param_1 + 0x10) >> 0xc) * 8);
  *piVar1 = *piVar1 + (uint)*param_3;
  *param_3 = 0;
  piVar1[1] = 0xf1;
  if ((*piVar1 == 0xf0) && (DAT_0040abf8 = DAT_0040abf8 + 1, DAT_0040abf8 == 0x20)) {
    FUN_00404abf(0x10);
  }
  return;
}


