/* Module: sfcd.cdd
   Function: FUN_00411310
   Address: 00411310
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00411310(HSFCD__ *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x160);
  uVar2 = cdr_GetSpeed(param_1,0);
  if ((*(int *)(iVar1 + 0x1c8) == 0) || (uVar2 != *(uint *)(iVar1 + 0x1cc))) {
    *(uint *)(iVar1 + 0x1cc) = uVar2;
    *(undefined4 *)(iVar1 + 0x1c8) = 1;
    switch(*(undefined1 *)(iVar1 + 0x41)) {
    case 2:
      FUN_00411130(param_1,0x930);
      return 0;
    case 3:
      FUN_00411170(param_1,0x930);
      return 0;
    case 4:
    case 5:
      FUN_00411060(param_1,0x31);
      FUN_004112b0(param_1,*(undefined4 *)(param_2 + 0xc));
      return 0;
    case 6:
      FUN_00411060(param_1,0x20);
      FUN_004112b0(param_1,*(undefined4 *)(param_2 + 0xc));
    }
  }
  return 0;
}


