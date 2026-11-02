/* Module: vidcap30.exe
   Function: FUN_00497a20
   Address: 00497a20
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00497a20(int *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint **ppuVar2;
  int iVar3;
  uint *local_20 [3];
  uint local_14;
  
  ppuVar2 = local_20;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *ppuVar2 = (uint *)0x0;
    ppuVar2 = ppuVar2 + 1;
  }
  local_20[0] = (uint *)0x4;
  uVar1 = *param_2;
  local_20[2] = param_2;
  for (local_14 = param_3; local_14 < uVar1; local_14 = local_14 + 1) {
    if (*(int *)(*(int *)(local_20[2][2] + local_14 * 4) + 0xc) != 0) {
      (**(code **)(*param_1 + 0xc))(param_1,local_20);
    }
  }
  return;
}


