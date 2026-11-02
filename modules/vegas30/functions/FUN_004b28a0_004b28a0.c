/* Module: vegas30.exe
   Function: FUN_004b28a0
   Address: 004b28a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004b28a0(int param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (((param_2 != (undefined8 *)0x0) && (*(int *)(param_1 + 0xc) != 0)) &&
     (*(double *)(*(int *)(param_1 + 0xc) + 0x10) != _DAT_00610fd8)) {
    uVar1 = ftol();
    uVar1 = __allmul(uVar1,10000000,0);
    *param_2 = uVar1;
    return 0;
  }
  return 0x80004005;
}


