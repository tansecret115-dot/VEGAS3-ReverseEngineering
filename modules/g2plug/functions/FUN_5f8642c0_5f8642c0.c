/* Module: g2plug.dll
   Function: FUN_5f8642c0
   Address: 5f8642c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f8642c0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    uVar1 = FUN_5f81d9a0(*(int **)(param_1 + 0xc),param_2,&LAB_5f864290);
    *(undefined4 *)(param_1 + 0x14) = 1;
  }
  return uVar1;
}


