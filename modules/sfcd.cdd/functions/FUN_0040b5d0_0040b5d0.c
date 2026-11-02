/* Module: sfcd.cdd
   Function: FUN_0040b5d0
   Address: 0040b5d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0040b5d0(HSFCD__ *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x160);
  *(undefined4 *)(iVar1 + 0x1d0) = 0;
  uVar2 = FUN_0040abf0(param_1,0x31,&param_1,4);
  if (uVar2 == 0) {
    *(undefined4 *)(iVar1 + 0x1d0) = 1;
    *(HSFCD__ **)(iVar1 + 0x1d4) = param_1;
  }
  return;
}


