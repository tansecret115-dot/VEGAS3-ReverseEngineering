/* Module: erv23260.dll
   Function: FUN_638166d0
   Address: 638166d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_638166d0(int param_1,byte param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = (-(uint)(param_2 < 4) & 0x10) + 0x10;
  if (((*(byte *)(param_1 + 100) & 4) != 0) && (param_3[1] < -iVar1)) {
    param_3[1] = -iVar1;
  }
  if (((*(byte *)(param_1 + 100) & 8) != 0) && (iVar1 < param_3[1])) {
    param_3[1] = iVar1;
  }
  if (((*(byte *)(param_1 + 100) & 1) != 0) && (*param_3 < -iVar1)) {
    *param_3 = -iVar1;
  }
  if (((*(byte *)(param_1 + 100) & 2) != 0) && (iVar1 < *param_3)) {
    *param_3 = iVar1;
  }
  return;
}


