/* Module: Setup.exe
   Function: FUN_0041e9e0
   Address: 0041e9e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0041e9e0(int param_1)

{
  uint *puVar1;
  
  if ((param_1 != 0) && (puVar1 = *(uint **)(param_1 + 0x1c), puVar1 != (uint *)0x0)) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *puVar1 = -(uint)(puVar1[3] != 0) & 7;
    FUN_00423820(*(int **)(*(int *)(param_1 + 0x1c) + 0x14),param_1,(int *)0x0);
    return 0;
  }
  return 0xfffffffe;
}


