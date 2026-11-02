/* Module: sfnetmedia.dll
   Function: FUN_00410e50
   Address: 00410e50
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00410e50(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_004360b0;
  if ((undefined4 *)param_1[10] != (undefined4 *)0x0) {
    FUN_00427660((undefined4 *)param_1[10]);
    param_1[10] = 0;
  }
  if ((int *)param_1[0xd] != (int *)0x0) {
    FUN_00423fd0((int *)param_1[0xd],0,-1,0);
    FUN_00425240((int *)param_1[0xd]);
    param_1[0xd] = 0;
  }
  return;
}


