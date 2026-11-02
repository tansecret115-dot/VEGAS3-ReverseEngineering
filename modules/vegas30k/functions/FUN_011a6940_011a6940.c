/* Module: vegas30k.dll
   Function: FUN_011a6940
   Address: 011a6940
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_011a6940(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = FUN_011940e0();
  if (-1 < iVar2) {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffffffb;
  }
  piVar1 = *(int **)(param_1 + 0x4c);
  if ((piVar1 != (int *)0x0) && (*(int *)(param_1 + 0xa0) != 0)) {
    (**(code **)(*piVar1 + 0x5c))(piVar1,0);
    FUN_011a6e60();
    (**(code **)(**(int **)(param_1 + 0x4c) + 0x50))(*(int **)(param_1 + 0x4c));
    FUN_011a6e60();
  }
  return iVar2;
}


