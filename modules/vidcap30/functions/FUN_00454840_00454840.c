/* Module: vidcap30.exe
   Function: FUN_00454840
   Address: 00454840
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00454840(int param_1)

{
  int iVar1;
  undefined4 local_8;
  int local_4;
  
  local_4 = 0;
  iVar1 = **(int **)(param_1 + 0x2c);
  if ((0 < iVar1) && (*(int *)(param_1 + 0x30) < iVar1)) {
    local_8 = 0;
    local_4 = 0;
    _SfGetTextExtent_16(*(undefined4 *)(param_1 + 0x40),
                        *(undefined4 *)
                         (*(int *)((*(int **)(param_1 + 0x2c))[2] + *(int *)(param_1 + 0x30) * 4) +
                         4),0xffffffff,&local_8);
    if (local_4 <= *(int *)(param_1 + 0x54)) {
      local_4 = *(int *)(param_1 + 0x54);
    }
    local_4 = local_4 + 9;
  }
  return local_4;
}


