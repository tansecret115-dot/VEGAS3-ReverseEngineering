/* Module: sfpaplug.dll
   Function: FUN_00409570
   Address: 00409570
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00409570(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (((*(int *)(param_1 + 0x50) == 0) || (*(int *)(param_1 + 0x54) == 0)) &&
     (iVar1 = FUN_004075e0(param_1), iVar1 < 0)) {
    return iVar1;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x50);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_1 + 0x54);
  }
  return iVar1;
}


