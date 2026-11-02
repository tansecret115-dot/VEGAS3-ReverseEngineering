/* Module: sfcdi.dll
   Function: FUN_5bf205f0
   Address: 5bf205f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf205f0(int param_1,undefined4 *param_2)

{
  int iVar1;
  _mediainfo local_2c [28];
  uint local_10;
  
  iVar1 = FUN_5bf20590(param_1);
  if (-1 < iVar1) {
    cdr_GetMediaInfo((HSFCD__ *)*param_2,local_2c);
    if (local_10 < *(uint *)(param_1 + 4)) {
      return -0x7ffb1ffe;
    }
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x40);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x4c);
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  return iVar1;
}


