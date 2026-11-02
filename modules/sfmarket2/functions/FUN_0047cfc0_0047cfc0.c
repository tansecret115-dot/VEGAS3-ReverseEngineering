/* Module: sfmarket2.dll
   Function: FUN_0047cfc0
   Address: 0047cfc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0047cfc0(int *param_1)

{
  FUN_0047ce90(param_1,0xee);
  FUN_0047ceb0(param_1,0xe);
  FUN_0047ce50(param_1,0x41);
  FUN_0047ce50(param_1,100);
  FUN_0047ce50(param_1,0x6f);
  FUN_0047ce50(param_1,0x62);
  FUN_0047ce50(param_1,0x65);
  FUN_0047ceb0(param_1,100);
  FUN_0047ceb0(param_1,0);
  FUN_0047ceb0(param_1,0);
  if (*(int *)((int)param_1 + 0x75) == 3) {
    FUN_0047ce50(param_1,1);
    return;
  }
  if (*(int *)((int)param_1 + 0x75) != 5) {
    FUN_0047ce50(param_1,0);
    return;
  }
  FUN_0047ce50(param_1,2);
  return;
}


