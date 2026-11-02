/* Module: extmondrv.dll
   Function: FUN_0040a130
   Address: 0040a130
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0040a130(int *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 < 0x1323) {
    if (param_2 == 0x1322) {
      iVar1 = FUN_0040a370(param_1,7);
      return iVar1;
    }
    switch(param_2) {
    case 0x10c8:
      iVar1 = FUN_0040a370(param_1,8);
      return iVar1;
    case 0x10c9:
      iVar1 = FUN_0040a370(param_1,0x13);
      return iVar1;
    case 0x10ca:
      iVar1 = FUN_0040a370(param_1,0x12);
      return iVar1;
    case 0x10cc:
      iVar1 = FUN_0040a370(param_1,0);
      return iVar1;
    case 0x10cd:
      iVar1 = FUN_0040a4c0(param_1,0);
      return iVar1;
    case 0x10d0:
      iVar1 = FUN_0040a370(param_1,0x11);
      return iVar1;
    }
  }
  else {
    switch(param_2) {
    case 0x1324:
      iVar1 = FUN_0040a4c0(param_1,7);
      return iVar1;
    case 0x1329:
      iVar1 = FUN_0040a4c0(param_1,0x11);
      return iVar1;
    case 0x13a5:
      iVar1 = FUN_0040a370(param_1,1);
      return iVar1;
    case 0x13a6:
      iVar1 = FUN_0040a370(param_1,0x10);
      return iVar1;
    case 0x13a7:
      iVar1 = FUN_0040a4c0(param_1,1);
      return iVar1;
    case 0x13a8:
      iVar1 = FUN_0040a4c0(param_1,0x10);
      return iVar1;
    case 0x13ab:
      iVar1 = FUN_0040a4c0(param_1,8);
      return iVar1;
    }
  }
  return -0x7fffbffb;
}


