/* Module: sftrans1.dll
   Function: FUN_0048a830
   Address: 0048a830
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0048a830(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + 1;
  if (**(int **)(param_1 + 0xb0) == 1) {
    FUN_004dc7f0(*(undefined4 *)(param_1 + 0xa4),0,0xffffffff,
                 *(undefined4 *)(*(int **)(param_1 + 0xb0))[2]);
    uVar1 = FUN_00487d40(0,1);
  }
  *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + -1;
  FUN_0048c310(0,*(undefined4 *)(param_1 + 0x100),0);
  return uVar1;
}


