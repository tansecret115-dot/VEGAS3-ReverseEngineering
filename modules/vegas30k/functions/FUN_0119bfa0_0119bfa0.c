/* Module: vegas30k.dll
   Function: FUN_0119bfa0
   Address: 0119bfa0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_0119bfa0(int *param_1)

{
  int iVar1;
  
  if (param_1[0x18e] == 0) {
    return -0x7fff0001;
  }
  iVar1 = param_1[0x187];
  param_1[0x187] = iVar1 + 1;
  if (iVar1 + 1 == param_1[0x186]) {
    param_1[0x22f] = 0;
    if ((((param_1[8] & 0xcU) == 0) && ((param_1[8] & 0x200U) == 0)) &&
       (iVar1 = (**(code **)(*param_1 + 200))(param_1,0,0), iVar1 != 0)) {
      param_1[0x187] = param_1[0x187] + -1;
      return iVar1;
    }
    param_1[0x22e] = 0;
    if (param_1[9] == 0) {
      iVar1 = FUN_0119bde0(0);
      if (-1 < iVar1) {
        return iVar1;
      }
      param_1[0x187] = param_1[0x187] + -1;
      return iVar1;
    }
    param_1[0x188] = 1;
  }
  return 0;
}


