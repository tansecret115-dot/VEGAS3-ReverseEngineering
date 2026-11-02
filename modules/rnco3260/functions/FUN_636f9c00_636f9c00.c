/* Module: rnco3260.dll
   Function: FUN_636f9c00
   Address: 636f9c00
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636f9c00(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  
  for (uVar1 = (uint)(param_2 * 3) >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *param_1 = *param_3;
    param_3 = param_3 + 1;
    param_1 = param_1 + 1;
  }
  for (uVar1 = param_2 * 3 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined1 *)param_1 = *(undefined1 *)param_3;
    param_3 = (undefined4 *)((int)param_3 + 1);
    param_1 = (undefined4 *)((int)param_1 + 1);
  }
  return;
}


