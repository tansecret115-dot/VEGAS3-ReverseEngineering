/* Module: sftrans1.dll
   Function: FUN_004ddb60
   Address: 004ddb60
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_004ddb60(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  uVar2 = 1 << ((byte)param_1 & 0x1f);
  if (param_1 < param_2 + param_1) {
    param_1 = (param_2 + param_1) - param_1;
    do {
      uVar1 = uVar1 | uVar2;
      uVar2 = uVar2 << 1;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return uVar1;
}


