/* Module: sfcd.cdd
   Function: FUN_004124e0
   Address: 004124e0
   Source: Ghidra pseudocode (Stage 10 batch) */


long FUN_004124e0(undefined4 param_1,HSFCD__ *param_2,int param_3)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)(param_2 + 0x160);
  FUN_004122e0(param_2);
  lVar2 = FUN_004123c0(param_2,*(undefined4 *)(param_3 + 0xc));
  if (lVar2 == 0) {
    *(undefined4 *)(iVar1 + 0x1d4) = 1;
    FUN_00411c00();
    lVar2 = 0;
  }
  return lVar2;
}


