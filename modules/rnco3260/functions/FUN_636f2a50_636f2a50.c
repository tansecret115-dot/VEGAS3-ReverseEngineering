/* Module: rnco3260.dll
   Function: FUN_636f2a50
   Address: 636f2a50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_636f2a50(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = FUN_636f2a80(*(undefined4 *)(param_1 + 0x20),*(uint *)(param_1 + 0x24),
                       *(int *)(param_1 + 0x28));
  *param_2 = iVar1;
  return 0;
}


