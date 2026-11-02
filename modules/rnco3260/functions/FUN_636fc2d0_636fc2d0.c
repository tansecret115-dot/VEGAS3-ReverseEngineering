/* Module: rnco3260.dll
   Function: FUN_636fc2d0
   Address: 636fc2d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636fc2d0(undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  uint uVar1;
  
  for (uVar1 = (param_2 & 0x7fffffff) >> 1; uVar1 != 0; uVar1 = uVar1 - 1) {
    *param_1 = *param_3;
    param_3 = param_3 + 1;
    param_1 = param_1 + 1;
  }
  for (uVar1 = param_2 * 2 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined1 *)param_1 = *(undefined1 *)param_3;
    param_3 = (undefined4 *)((int)param_3 + 1);
    param_1 = (undefined4 *)((int)param_1 + 1);
  }
  return;
}


