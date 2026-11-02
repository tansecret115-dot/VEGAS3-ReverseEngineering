/* Module: wmfplug2.dll
   Function: FUN_00403800
   Address: 00403800
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00403800(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  uint uVar2;
  int unaff_retaddr;
  
  piVar1 = param_1;
  uVar2 = (**(code **)(*param_1 + 0x3c))(param_1,&param_1);
  if (-1 < (int)uVar2) {
    if (piVar1[0x92] == 0) {
      uVar2 = FUN_004032b0(piVar1);
    }
    if (-1 < (int)uVar2) {
      if (param_1 != (int *)0x0) {
        *param_1 = *(int *)(piVar1[0x92] + unaff_retaddr * 0x38);
      }
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = *(undefined4 *)(piVar1[0x92] + 8 + unaff_retaddr * 0x38);
      }
    }
  }
  return;
}


