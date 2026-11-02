/* Module: erv13260.dll
   Function: FUN_635f2160
   Address: 635f2160
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl FUN_635f2160(int *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[2];
  if (uVar1 != 8) {
    FUN_635f20b0(param_1,uVar1,0);
    return uVar1;
  }
  return 0;
}


