/* Module: encn3260.dll
   Function: FUN_664d5f50
   Address: 664d5f50
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664d5f50(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (param_1[2] + (param_1[1] + *param_1 * 0x3c) * 0x3c) * 1000;
  param_1[9] = iVar2;
  if (param_1[5] != 1) {
    if (param_1[5] == 0) {
      if (0x18 < param_1[3]) {
        param_1[3] = 0;
        return;
      }
      param_1[9] = iVar2 + param_1[3] * 0x28;
    }
    return;
  }
  if (0x1d < param_1[3]) {
    param_1[3] = 0;
    return;
  }
  iVar1 = ftol();
  param_1[9] = iVar1 + iVar2;
  return;
}


