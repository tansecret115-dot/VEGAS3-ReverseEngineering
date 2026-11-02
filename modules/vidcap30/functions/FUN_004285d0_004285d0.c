/* Module: vidcap30.exe
   Function: FUN_004285d0
   Address: 004285d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004285d0(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 < 0x1323) {
    if (param_2 == 0x1322) {
      uVar1 = FUN_00427060(param_1,7);
      return uVar1;
    }
    switch(param_2) {
    case 0x10c8:
      uVar1 = FUN_00427060(param_1,8);
      return uVar1;
    case 0x10c9:
      uVar1 = FUN_00427060(param_1,0x13);
      return uVar1;
    case 0x10ca:
      uVar1 = FUN_00427060(param_1,0x12);
      return uVar1;
    case 0x10cb:
      uVar1 = FUN_00427160(param_1,0x12);
      return uVar1;
    case 0x10cc:
      uVar1 = FUN_00427060(param_1,0);
      return uVar1;
    case 0x10cd:
      uVar1 = FUN_00427160(param_1,0);
      return uVar1;
    case 0x10d0:
      uVar1 = FUN_00427060(param_1,0x11);
      return uVar1;
    }
  }
  else {
    switch(param_2) {
    case 0x1324:
      uVar1 = FUN_00427160(param_1,7);
      return uVar1;
    case 0x1329:
      uVar1 = FUN_00427160(param_1,0x11);
      return uVar1;
    case 0x13a5:
      uVar1 = FUN_00427060(param_1,1);
      return uVar1;
    case 0x13a6:
      uVar1 = FUN_00427060(param_1,0x10);
      return uVar1;
    case 0x13a7:
      uVar1 = FUN_00427160(param_1,1);
      return uVar1;
    case 0x13a8:
      uVar1 = FUN_00427160(param_1,0x10);
      return uVar1;
    case 0x13ab:
      uVar1 = FUN_00427160(param_1,8);
      return uVar1;
    }
  }
  return 0x80004005;
}


