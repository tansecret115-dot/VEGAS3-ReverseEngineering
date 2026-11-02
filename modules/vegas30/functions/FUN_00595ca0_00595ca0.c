/* Module: vegas30.exe
   Function: FUN_00595ca0
   Address: 00595ca0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00595ca0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (*(int *)(param_1 + 0x54) != 0) {
    FUN_00595d10(param_1);
  }
  puVar2 = &DAT_0065ac18;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  _DAT_0065ac30 = param_4;
  _DAT_0065ac20 = 1;
  _DAT_0065ac2c = param_3;
  _DAT_0065ac28 = param_2;
  _DAT_0065ac34 = param_5;
  FUN_005917e0(param_1,param_2,param_3,1);
  FUN_00595c60(param_1,&DAT_0065ac18);
  return;
}


