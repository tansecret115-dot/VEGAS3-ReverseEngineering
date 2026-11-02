/* Module: vegas30k.dll
   Function: FUN_01010a50
   Address: 01010a50
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_01010a50(int param_1,int param_2,uint param_3,int param_4,undefined4 param_5,
                undefined4 param_6)

{
  int iVar1;
  
  FUN_0100ff10(param_2);
  FUN_01010220(param_5,param_6);
  FUN_01010200(param_3,param_4);
  iVar1 = FUN_01010010(&param_2,0xc);
  do {
    if (iVar1 < 0) {
LAB_01010b63:
      FUN_0100ff40();
      return iVar1;
    }
    if (param_2 == 0xfff) {
      FUN_010101e0(&param_3);
      FUN_01010200(param_3 + 1,param_4 + (uint)(0xfffffffe < param_3));
      iVar1 = FUN_0100ff80(param_1 + 0x24,2);
      if (-1 < iVar1) {
        FUN_010101e0(&param_3);
        FUN_01010200(param_3 + 1,param_4 + (uint)(0xfffffffe < param_3));
        iVar1 = FUN_0100ff80(param_1 + 0x1c,4);
        if ((-1 < iVar1) && (iVar1 = FUN_0100ff80(param_1 + 0x20,2), -1 < iVar1)) {
          iVar1 = 0;
        }
      }
      goto LAB_01010b63;
    }
    iVar1 = FUN_01010010(&param_2,0xc);
  } while( true );
}


