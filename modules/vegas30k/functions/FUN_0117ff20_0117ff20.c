/* Module: vegas30k.dll
   Function: FUN_0117ff20
   Address: 0117ff20
   Source: Ghidra pseudocode (Stage 10 batch) */


UINT FUN_0117ff20(int *param_1)

{
  UINT UVar1;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (*param_1 != 0) {
    UVar1 = FUN_01001170(*param_1);
    return UVar1;
  }
  UVar1 = param_1[0xc];
  if (UVar1 == 0) {
    return 0;
  }
  timeKillEvent(UVar1);
  timeEndPeriod(param_1[10]);
  param_1[0xc] = 0;
  param_1[0x18] = 0;
  return UVar1;
}


