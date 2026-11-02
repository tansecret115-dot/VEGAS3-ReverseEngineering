/* Module: mpegin.dll
   Function: FUN_10002180
   Address: 10002180
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_10002180(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xcac) + -4;
  if ((*(int *)(param_1 + 0xccc) != 0) && (*(int *)(param_1 + 0x8c) == 0xac44)) {
    iVar2 = iVar2 + (-(uint)(*(int *)(param_1 + 0x98) != 2) & 3) + 1;
  }
  while (((iVar2 != 0 && (iVar1 = *(int *)(param_1 + 0x12e54), *(int *)(iVar1 + 0x240) == 0)) &&
         (*(int *)(iVar1 + 0x244) == 0))) {
    FUN_10005910((int *)(iVar1 + 0x200),8);
    iVar2 = iVar2 + -1;
  }
  return -(uint)(*(int *)(*(int *)(param_1 + 0x12e54) + 0x240) != 0);
}


