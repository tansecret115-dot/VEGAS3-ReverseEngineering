/* Module: sfcd.cdd
   Function: FUN_00416c60
   Address: 00416c60
   Source: Ghidra pseudocode (Stage 10 batch) */


long FUN_00416c60(HSFCD__ *param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)(param_1 + 0x160);
  if (*(int *)(iVar1 + 0x1e0) != 0) {
    return 0;
  }
  *(undefined4 *)(iVar1 + 0x1e0) = 0;
  lVar2 = FUN_00416040(param_1,0x31,&param_1,4);
  if (lVar2 == 0) {
    *(undefined4 *)(iVar1 + 0x1e0) = 1;
    *(HSFCD__ **)(iVar1 + 0x1e4) = param_1;
  }
  return lVar2;
}


