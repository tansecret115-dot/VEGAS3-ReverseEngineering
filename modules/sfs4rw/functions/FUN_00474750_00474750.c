/* Module: sfs4rw.dll
   Function: FUN_00474750
   Address: 00474750
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00474750(int *param_1)

{
  FUN_00474620(param_1,0xee);
  FUN_00474640(param_1,0xe);
  FUN_004745e0(param_1,0x41);
  FUN_004745e0(param_1,100);
  FUN_004745e0(param_1,0x6f);
  FUN_004745e0(param_1,0x62);
  FUN_004745e0(param_1,0x65);
  FUN_00474640(param_1,100);
  FUN_00474640(param_1,0);
  FUN_00474640(param_1,0);
  if (*(int *)((int)param_1 + 0x75) == 3) {
    FUN_004745e0(param_1,1);
    return;
  }
  if (*(int *)((int)param_1 + 0x75) != 5) {
    FUN_004745e0(param_1,0);
    return;
  }
  FUN_004745e0(param_1,2);
  return;
}


