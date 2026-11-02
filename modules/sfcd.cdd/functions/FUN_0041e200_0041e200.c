/* Module: sfcd.cdd
   Function: FUN_0041e200
   Address: 0041e200
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_0041e200(undefined4 param_1,int param_2,int param_3,undefined4 *param_4,undefined4 *param_5)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &DAT_00440764;
  while ((piVar1[-1] != param_2 || (*piVar1 != param_3))) {
    piVar1 = piVar1 + 4;
    iVar2 = iVar2 + 1;
    if ((int *)((int)&PTR_LAB_00440a50 + 3) < piVar1) {
      return 0;
    }
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = *(undefined4 *)(iVar2 * 0x10 + 0x440768);
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = *(undefined4 *)(iVar2 * 0x10 + 0x44076c);
  }
  return 1;
}


