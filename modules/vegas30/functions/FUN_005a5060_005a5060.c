/* Module: vegas30.exe
   Function: FUN_005a5060
   Address: 005a5060
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005a5060(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_005a35d0(param_1);
  if (iVar1 != 0) {
    switch(param_3) {
    case 1:
      FUN_005a1fc0(param_2,*(undefined4 *)(param_1 + 0x70));
      FUN_005a2060(0);
      return 0;
    case 2:
      FUN_005a1f60(param_2,0,*(undefined4 *)(param_1 + 0x70));
      FUN_005a2060(0);
      return 0;
    case 3:
      FUN_005a1f60(param_2,1,*(undefined4 *)(param_1 + 0x70));
      FUN_005a2060(0);
      return 0;
    case 4:
      FUN_005a1fa0(*(undefined4 *)(param_1 + 0x70));
      break;
    case 5:
      FUN_005a2040(param_2,*(undefined4 *)(param_1 + 0x70));
      FUN_005a2060(0);
      return 0;
    case 6:
      FUN_005a2020(param_2,*(undefined4 *)(param_1 + 0x70));
      FUN_005a2060(0);
      return 0;
    case 7:
      FUN_005a1fe0(param_2,*(undefined4 *)(param_1 + 0x70));
      FUN_005a2060(0);
      return 0;
    case 8:
      FUN_005a2000(param_2,*(undefined4 *)(param_1 + 0x70));
      FUN_005a2060(0);
      return 0;
    }
    FUN_005a2060(0);
  }
  return 0;
}


