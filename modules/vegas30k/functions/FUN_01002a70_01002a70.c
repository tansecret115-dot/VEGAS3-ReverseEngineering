/* Module: vegas30k.dll
   Function: FUN_01002a70
   Address: 01002a70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01002a70(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_01120e30("1.0.2",0,0,0);
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    FUN_01002390(param_1);
    return 0x80004005;
  }
  iVar1 = FUN_01126e00(iVar1);
  *(int *)(param_1 + 8) = iVar1;
  if (iVar1 == 0) {
    FUN_01002390(param_1);
    return 0x80004005;
  }
  FUN_01126c60(*(undefined4 *)(param_1 + 4),8);
  return 0;
}


