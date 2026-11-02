/* Module: vidcap30.exe
   Function: FUN_0052c0f0
   Address: 0052c0f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0052c0f0(int param_1,int param_2,undefined4 param_3)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    FUN_0052c0c0(param_1,param_2,param_3);
    FUN_0052bd80(param_1,param_2,0xc0000000,0x3fdccccc);
    FUN_0052bd20(param_1,param_2,0xe0000000,0x3fd40346,0,0x3fd50e56,0x40000000,0x3fe47ae1,0x60000000
                 ,0x3fd51eb8,0x40000000,0x3fd33333,0x40000000,0x3fe33333,0x40000000,0x3fc33333,
                 0xe0000000,0x3faeb851);
  }
  return;
}


