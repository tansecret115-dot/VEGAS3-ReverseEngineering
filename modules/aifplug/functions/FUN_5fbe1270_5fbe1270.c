/* Module: aifplug.dll
   Function: FUN_5fbe1270
   Address: 5fbe1270
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5fbe1270(int *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_5fbe1220(param_1);
  if (*param_1 == 0xc) {
    return uVar1 * 3;
  }
  return uVar1 << 2;
}


