/* Module: mcplug.dll
   Function: FUN_0040c5d0
   Address: 0040c5d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0040c5d0(void *param_1)

{
  int iVar1;
  
  if (*(int *)((int)param_1 + 0x20) == 0) {
    return -0x7fff0001;
  }
  if (*(int *)((int)param_1 + 0xc) == 0) {
    return -0x7fff0001;
  }
  if (*(int *)((int)param_1 + 0x24) == 0) {
    return 0;
  }
  iVar1 = FUN_0040c780(param_1);
  if (-1 < iVar1) {
    *(undefined4 *)((int)param_1 + 0x24) = 0;
  }
  return iVar1;
}


