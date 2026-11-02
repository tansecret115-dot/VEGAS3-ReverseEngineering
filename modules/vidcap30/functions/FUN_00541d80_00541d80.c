/* Module: vidcap30.exe
   Function: FUN_00541d80
   Address: 00541d80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00541d80(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 == 0xffff) {
    uVar1 = *(uint *)(param_1 + 200);
  }
  else {
    uVar2 = *(uint *)(param_1 + 0xc0);
    if ((param_2 < uVar2) ||
       (uVar2 = *(int *)(param_1 + 0xcc) + *(int *)(param_1 + 0xc4), uVar2 < param_2)) {
      param_2 = uVar2;
    }
    uVar2 = *(uint *)(param_1 + 200);
    uVar1 = param_2;
    if ((uVar2 <= param_2) && (uVar1 = uVar2, *(int *)(param_1 + 0xcc) + uVar2 <= param_2)) {
      uVar1 = param_2 - *(int *)(param_1 + 0xcc);
    }
  }
  if (param_3 != 0xffff) {
    if (*(uint *)(param_1 + 100) <= param_3) {
      uVar2 = *(uint *)(param_1 + 0xb0);
      if ((param_3 < *(uint *)(param_1 + 0xb0)) ||
         (uVar2 = *(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xb4), uVar2 < param_3)) {
        param_3 = uVar2;
      }
      uVar2 = *(uint *)(param_1 + 0xb8);
      if (uVar2 <= param_3) {
        if (param_3 < *(int *)(param_1 + 0xbc) + uVar2) {
          FUN_00541ba0(param_1,uVar1,uVar2,1);
          return;
        }
        param_3 = param_3 - *(int *)(param_1 + 0xbc);
      }
    }
    FUN_00541ba0(param_1,uVar1,param_3,1);
    return;
  }
  FUN_00541ba0(param_1,uVar1,*(undefined4 *)(param_1 + 0xb8),1);
  return;
}


