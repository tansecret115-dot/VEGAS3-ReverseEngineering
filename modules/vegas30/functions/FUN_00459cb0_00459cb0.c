/* Module: vegas30.exe
   Function: FUN_00459cb0
   Address: 00459cb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00459cb0(undefined4 param_1,undefined4 param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (DAT_0064a480 != 0) {
    switch(param_3 >> 0x10 & 0xfff) {
    case 0xb:
      FUN_004d4d50(DAT_00647630,1,0);
      uVar1 = 1;
      break;
    case 0xc:
      FUN_004d4d50(DAT_00647630,0xffffffff,0);
      return 1;
    case 0xd:
      FUN_004583c0(param_1,0);
      return 1;
    case 0xe:
      iVar2 = FUN_004584c0(param_1);
      if (iVar2 == 0) {
        FUN_004583a0(param_1,0);
        return 1;
      }
      FUN_004583c0(param_1,1);
      return 1;
    }
  }
  return uVar1;
}


