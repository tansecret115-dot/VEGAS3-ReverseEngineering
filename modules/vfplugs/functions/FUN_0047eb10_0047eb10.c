/* Module: vfplugs.dll
   Function: FUN_0047eb10
   Address: 0047eb10
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0047eb10(uint *param_1)

{
  uint uVar1;
  
  if (param_1[1] == 0) {
    uVar1 = FUN_0047eb00((int)param_1);
    param_1[4] = uVar1;
  }
  uVar1 = FUN_0047ea80(param_1);
  param_1[10] = uVar1;
  return;
}


