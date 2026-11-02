/* Module: sfcd.cdd
   Function: FUN_0040e910
   Address: 0040e910
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_0040e910(undefined4 param_1,int param_2,int param_3,undefined4 *param_4,undefined4 *param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0x80;
  if (param_2 != 0x40) {
    iVar3 = param_3;
  }
  iVar2 = 0;
  piVar1 = &DAT_0043d93c;
  while ((piVar1[-1] != param_2 || (*piVar1 != iVar3))) {
    piVar1 = piVar1 + 4;
    iVar2 = iVar2 + 1;
    if ((int *)((int)&PTR_LAB_0043de08 + 3) < piVar1) {
      return 0;
    }
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = *(undefined4 *)(iVar2 * 0x10 + 0x43d940);
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = *(undefined4 *)(iVar2 * 0x10 + 0x43d944);
  }
  return 1;
}


