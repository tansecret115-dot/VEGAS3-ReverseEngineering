/* Module: sfcd.cdd
   Function: FUN_0041d550
   Address: 0041d550
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_0041d550(undefined4 param_1,int param_2,int param_3,undefined4 *param_4,undefined4 *param_5)

{
  int *piVar1;
  int iVar2;
  
  if (param_2 == 0x40) {
    param_3 = 0x80;
  }
  else if (param_2 == 0x4d) {
    param_3 = 0;
  }
  iVar2 = 0;
  piVar1 = &DAT_0043fbc4;
  while ((piVar1[-1] != param_2 || (*piVar1 != param_3))) {
    piVar1 = piVar1 + 4;
    iVar2 = iVar2 + 1;
    if ((int *)((int)&PTR_s_This_drive_requires_the_start_ti_004406f0 + 3) < piVar1) {
      return 0;
    }
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = *(undefined4 *)(iVar2 * 0x10 + 0x43fbc8);
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = *(undefined4 *)(iVar2 * 0x10 + 0x43fbcc);
  }
  return 1;
}


