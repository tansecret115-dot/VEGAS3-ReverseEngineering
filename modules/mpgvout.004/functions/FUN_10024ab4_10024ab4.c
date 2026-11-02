/* Module: mpgvout.004
   Function: FUN_10024ab4
   Address: 10024ab4
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_10024ab4(int param_1)

{
  uint uVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  uint local_24;
  
  *(double *)(param_1 + 0x3c0) = (double)*(longlong *)(*(int *)(param_1 + 0x24) + 0x38);
  FUN_100246d8(param_1);
  iVar2 = *(int *)(param_1 + 0x590);
  if (iVar2 != 3) {
    if (*(int *)(param_1 + 0x588) == 0) {
      if (iVar2 == 2) {
        return;
      }
    }
    else if (iVar2 == 1) {
      return;
    }
  }
  dVar3 = (double)*(longlong *)(*(int *)(param_1 + 0x24) + 0x38);
  dVar4 = floor(dVar3 - *(double *)(param_1 + 0x490));
  local_24 = (uint)(longlong)ROUND(dVar4);
  *(double *)(param_1 + 0x490) = dVar3;
  if (*(uint *)(param_1 + 0x4c4) < local_24) {
    *(uint *)(param_1 + 0x4c4) = local_24;
  }
  if (local_24 < *(uint *)(param_1 + 0x4c0)) {
    *(uint *)(param_1 + 0x4c0) = local_24;
  }
  uVar1 = *(int *)(param_1 + 0x49c) + 1;
  *(uint *)(param_1 + 0x49c) = uVar1;
  if (*(uint *)(param_1 + 0x4a0) <= uVar1) {
    dVar4 = floor(dVar3 - *(double *)(param_1 + 0x488));
    local_24 = (uint)(longlong)ROUND(dVar4);
    *(double *)(param_1 + 0x488) = dVar3;
    if (*(uint *)(param_1 + 0x4bc) < local_24) {
      *(uint *)(param_1 + 0x4bc) = local_24;
    }
    if (local_24 < *(uint *)(param_1 + 0x4b8)) {
      *(uint *)(param_1 + 0x4b8) = local_24;
    }
    *(undefined4 *)(param_1 + 0x49c) = 0;
  }
  return;
}


