/* Module: vegas30.exe
   Function: FUN_00553500
   Address: 00553500
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0055355b) */
/* WARNING: Removing unreachable block (ram,0x00553573) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00553500(undefined4 param_1,int *param_2)

{
  if ((param_2 == (int *)0x0) && (param_2 = (int *)FUN_00553430(), param_2 == (int *)0x0)) {
    return;
  }
  (**(code **)(*param_2 + 0xc))();
  (**(code **)(_DAT_0060ea28 + 0x20))(&DAT_0060ea28);
  (**(code **)(*param_2 + 8))(param_2);
  return;
}


