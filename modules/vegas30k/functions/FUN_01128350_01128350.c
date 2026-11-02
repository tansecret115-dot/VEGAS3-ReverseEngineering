/* Module: vegas30k.dll
   Function: FUN_01128350
   Address: 01128350
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01128350(int param_1,int param_2,undefined4 param_3)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    FUN_01128320(param_1,param_2,param_3);
    FUN_01127fe0(param_1,param_2,0xc0000000,0x3fdccccc);
    FUN_01127f80(param_1,param_2,0xe0000000,0x3fd40346,0,0x3fd50e56,0x40000000,0x3fe47ae1,0x60000000
                 ,0x3fd51eb8,0x40000000,0x3fd33333,0x40000000,0x3fe33333,0x40000000,0x3fc33333,
                 0xe0000000,0x3faeb851);
  }
  return;
}


