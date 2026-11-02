/* Module: g2plug.dll
   Function: FUN_5f8119d0
   Address: 5f8119d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f8119d0(void *param_1)

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
  iVar1 = FUN_5f811c50(param_1);
  if (-1 < iVar1) {
    *(undefined4 *)((int)param_1 + 0x24) = 0;
  }
  return iVar1;
}


