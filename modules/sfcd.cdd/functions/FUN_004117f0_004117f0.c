/* Module: sfcd.cdd
   Function: FUN_004117f0
   Address: 004117f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_004117f0(undefined4 param_1,int param_2,int param_3,undefined4 *param_4,undefined4 *param_5)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &DAT_0043e43c;
  while ((piVar1[-1] != param_2 || (*piVar1 != param_3))) {
    piVar1 = piVar1 + 4;
    iVar2 = iVar2 + 1;
    if ((int *)((int)&PTR_LAB_0043e728 + 3) < piVar1) {
      return 0;
    }
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = *(undefined4 *)(iVar2 * 0x10 + 0x43e440);
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = *(undefined4 *)(iVar2 * 0x10 + 0x43e444);
  }
  return 1;
}


