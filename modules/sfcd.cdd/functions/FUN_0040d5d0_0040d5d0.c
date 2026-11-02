/* Module: sfcd.cdd
   Function: FUN_0040d5d0
   Address: 0040d5d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0040d5d0(HSFCD__ *param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)(param_1 + 0x160);
  *(undefined4 *)(iVar1 + 0x1dc) = 0;
  lVar2 = FUN_0040ca70(param_1,0x31,&param_1,4);
  if (lVar2 == 0) {
    *(undefined4 *)(iVar1 + 0x1dc) = 1;
    *(HSFCD__ **)(iVar1 + 0x1e0) = param_1;
  }
  return;
}


