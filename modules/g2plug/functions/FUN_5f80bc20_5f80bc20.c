/* Module: g2plug.dll
   Function: FUN_5f80bc20
   Address: 5f80bc20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f80bc20(undefined2 *param_1,uint param_2)

{
  undefined2 uVar1;
  uint uVar2;
  
  uVar2 = param_2 >> 2;
  if (uVar2 == 0) {
    return 1;
  }
  do {
    uVar1 = *param_1;
    *param_1 = param_1[1];
    param_1[1] = uVar1;
    param_1 = param_1 + 2;
    uVar2 = uVar2 - 1;
  } while (uVar2 != 0);
  return 1;
}


