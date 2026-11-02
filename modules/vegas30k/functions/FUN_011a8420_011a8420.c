/* Module: vegas30k.dll
   Function: FUN_011a8420
   Address: 011a8420
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_011a8420(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = *(int **)(param_1 + 0x7fc);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  if (((*(uint *)(param_1 + 0x7ec) & 0x400) != 0) && ((*(uint *)(param_1 + 0x7ec) & 0x800) != 0)) {
    uVar2 = piVar1[3];
    if ((((uVar2 & 1) != 0) && ((uVar2 & 2) != 0)) && ((uVar2 & 4) != 0)) {
      (**(code **)(*piVar1 + 0x98))(piVar1);
    }
    *(uint *)(param_1 + 0x7ec) = *(uint *)(param_1 + 0x7ec) & 0xfffff7ff;
    return 0;
  }
  return 0x8000ffff;
}


