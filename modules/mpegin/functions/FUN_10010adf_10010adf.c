/* Module: mpegin.dll
   Function: FUN_10010adf
   Address: 10010adf
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_10010adf(int param_1,int param_2,byte *param_3)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x18 + (param_2 - *(int *)(param_1 + 0x10) >> 0xc) * 8);
  *piVar1 = *piVar1 + (uint)*param_3;
  *param_3 = 0;
  piVar1[1] = 0xf1;
  if ((*piVar1 == 0xf0) && (DAT_1001c398 = DAT_1001c398 + 1, DAT_1001c398 == 0x20)) {
    FUN_100109c6(0x10);
  }
  return;
}


