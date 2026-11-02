/* Module: sfpaplug.dll
   Function: FUN_00447360
   Address: 00447360
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00447360(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    uVar1 = FUN_0042b1a0(*(int **)(param_1 + 0xc),param_2,&LAB_00447330);
    *(undefined4 *)(param_1 + 0x14) = 1;
  }
  return uVar1;
}


