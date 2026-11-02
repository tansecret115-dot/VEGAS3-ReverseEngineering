/* Module: g2plug.dll
   Function: FUN_5f80bc60
   Address: 5f80bc60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f80bc60(undefined1 *param_1,uint param_2)

{
  undefined1 uVar1;
  uint uVar2;
  
  for (uVar2 = param_2 >> 1; uVar2 != 0; uVar2 = uVar2 - 1) {
    uVar1 = *param_1;
    *param_1 = param_1[1];
    param_1[1] = uVar1;
    param_1 = param_1 + 2;
  }
  return 1;
}


