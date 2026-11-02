/* Module: sfcd.cdd
   Function: FUN_004110c0
   Address: 004110c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004110c0(HSFCD__ *param_1,undefined1 param_2)

{
  HSFCD__ *pHVar1;
  int iVar2;
  undefined4 local_8;
  undefined4 local_4;
  
  pHVar1 = param_1;
  iVar2 = *(int *)(param_1 + 0x160);
  if (*(int *)(iVar2 + 0x1d0) == 0) {
    return 0;
  }
  *(undefined4 *)(iVar2 + 0x1d0) = 0;
  local_8 = 0;
  local_4 = 0x80000;
  param_1 = *(HSFCD__ **)(iVar2 + 0x1d4);
  iVar2 = FUN_00419870(pHVar1,&local_8,&param_1,4);
  return iVar2;
}


