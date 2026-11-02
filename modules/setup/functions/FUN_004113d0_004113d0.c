/* Module: Setup.exe
   Function: FUN_004113d0
   Address: 004113d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_004113d0(void *this,int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  if (*(int *)((int)this + 0x938) == 0) {
    FUN_004114b0(this,*(int *)((int)this + 0x40));
  }
  piVar3 = param_2;
  for (iVar2 = 0xd8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar3 = 0;
    piVar3 = piVar3 + 1;
  }
  *(undefined1 *)(param_2 + 0x15) = 0;
  *(undefined1 *)(param_2 + 0x56) = 0;
  *(undefined1 *)(param_2 + 0x97) = 0;
  iVar2 = *(int *)((int)this + 0x938);
  if ((iVar2 != 0) && (param_1 < *(int *)((int)this + 0x40))) {
    uVar1 = FUN_00411020(this,*(LONG *)(iVar2 + param_1 * 8),*(LONG *)(iVar2 + 4 + param_1 * 8),
                         param_2);
    return uVar1;
  }
  return 1;
}


