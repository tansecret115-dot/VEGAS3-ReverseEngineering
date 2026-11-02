/* Module: g2plug.dll
   Function: FUN_5f80e860
   Address: 5f80e860
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f80e860(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0xefcd;
  if (((param_1 != 0) && (-1 < (int)param_2)) && (param_2 < 8)) {
    uVar1 = *(undefined4 *)(&DAT_5f8763b8 + param_2 * 4);
  }
  return uVar1;
}


