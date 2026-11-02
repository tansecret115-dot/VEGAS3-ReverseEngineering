/* Module: sfcd.cdd
   Function: FUN_0040f610
   Address: 0040f610
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0040f610(HSFCD__ *param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)(param_1 + 0x160);
  *(undefined4 *)(iVar1 + 0x1ec) = 0;
  lVar2 = FUN_0040ecb0(param_1,0x20,&param_1,4);
  if (lVar2 == 0) {
    *(undefined4 *)(iVar1 + 0x1ec) = 1;
    *(HSFCD__ **)(iVar1 + 0x1f0) = param_1;
  }
  return;
}


