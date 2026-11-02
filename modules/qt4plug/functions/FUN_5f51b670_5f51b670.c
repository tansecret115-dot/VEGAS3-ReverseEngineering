/* Module: qt4plug.dll
   Function: FUN_5f51b670
   Address: 5f51b670
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f51b670(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int unaff_retaddr;
  
  piVar1 = param_1;
  iVar2 = (**(code **)(*param_1 + 0x3c))(param_1,&param_1);
  if (-1 < iVar2) {
    if (piVar1[0xd3] == 0) {
      iVar2 = FUN_5f51b1c0(piVar1);
    }
    if (-1 < iVar2) {
      if (param_1 != (int *)0x0) {
        *param_1 = *(int *)(unaff_retaddr * 0x30 + piVar1[0xd3]);
      }
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = *(undefined4 *)(unaff_retaddr * 0x30 + 8 + piVar1[0xd3]);
      }
    }
  }
  return;
}


