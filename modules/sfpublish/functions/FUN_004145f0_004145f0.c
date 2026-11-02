/* Module: sfpublish.dll
   Function: FUN_004145f0
   Address: 004145f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_004145f0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_0043654c;
  if ((undefined4 *)param_1[10] != (undefined4 *)0x0) {
    FUN_00420490((undefined4 *)param_1[10]);
    param_1[10] = 0;
  }
  if ((int *)param_1[0xd] != (int *)0x0) {
    FUN_0041dd10((int *)param_1[0xd],0,-1,0);
    FUN_0041ef80((int *)param_1[0xd]);
    param_1[0xd] = 0;
  }
  return;
}


