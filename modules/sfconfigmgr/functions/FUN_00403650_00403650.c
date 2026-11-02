/* Module: sfconfigmgr.dll
   Function: FUN_00403650
   Address: 00403650
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00403650(int param_1)

{
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    FUN_0040b320(*(int **)(param_1 + 8),0,-1,0);
    FUN_0040c590(*(int **)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    FUN_0040b320(*(int **)(param_1 + 0xc),0,-1,0);
    FUN_0040c590(*(int **)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}


