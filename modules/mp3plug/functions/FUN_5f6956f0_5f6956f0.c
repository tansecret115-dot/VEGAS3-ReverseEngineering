/* Module: mp3plug.dll
   Function: FUN_5f6956f0
   Address: 5f6956f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f6956f0(void *param_1)

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
  iVar1 = FUN_5f695950(param_1);
  if (-1 < iVar1) {
    *(undefined4 *)((int)param_1 + 0x24) = 0;
  }
  return iVar1;
}


