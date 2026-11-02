/* Module: sfcd.cdd
   Function: FUN_004122e0
   Address: 004122e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004122e0(HSFCD__ *param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)(param_1 + 0x160);
  *(undefined4 *)(iVar1 + 0x1e0) = 0;
  lVar2 = FUN_00411cd0(param_1,0x31,&param_1,4);
  if (lVar2 == 0) {
    *(undefined4 *)(iVar1 + 0x1e0) = 1;
    *(HSFCD__ **)(iVar1 + 0x1e4) = param_1;
  }
  return;
}


