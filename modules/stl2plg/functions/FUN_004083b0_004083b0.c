/* Module: stl2plg.dll
   Function: FUN_004083b0
   Address: 004083b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004083b0(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_004083e0(param_1);
  if (-1 < iVar1) {
    *param_2 = *(undefined4 *)(param_1 + 0x28);
    param_2[1] = *(undefined4 *)(param_1 + 0x2c);
  }
  return;
}


