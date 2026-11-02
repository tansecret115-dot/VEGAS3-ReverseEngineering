/* Module: encn3260.dll
   Function: FUN_6648d1b0
   Address: 6648d1b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_6648d1b0(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int local_18 [2];
  void *local_10;
  int local_c [2];
  
  local_10 = *(void **)(param_1 + 8);
  local_18[0] = -(uint)(*(int *)((int)local_10 + 8) != 0);
  local_18[1] = local_18[0];
  local_c[0] = 0;
  local_c[1] = 0;
  if (local_18[0] != 0) {
    FUN_664bbeb0(local_10,local_18 + 1,local_c + 1,local_c);
  }
  piVar2 = local_18;
  piVar3 = (int *)(param_1 + 0xc);
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = *piVar2;
    piVar2 = piVar2 + 1;
    piVar3 = piVar3 + 1;
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    return 0;
  }
  return *(undefined4 *)(param_1 + 0x18);
}


