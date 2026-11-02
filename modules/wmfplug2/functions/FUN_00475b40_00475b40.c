/* Module: wmfplug2.dll
   Function: FUN_00475b40
   Address: 00475b40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00475b40(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    uVar1 = FUN_0042b780(*(int **)(param_1 + 0xc),param_2,&LAB_00475b10);
    *(undefined4 *)(param_1 + 0x14) = 1;
  }
  return uVar1;
}


