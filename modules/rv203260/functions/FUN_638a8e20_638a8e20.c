/* Module: rv203260.dll
   Function: FUN_638a8e20
   Address: 638a8e20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_638a8e20(int *param_1)

{
  short *psVar1;
  FILE *_File;
  
  _File = *(FILE **)(*(int *)((int)param_1 + 0xd6) + 0x366);
  if (_File != (FILE *)0x0) {
    fprintf(_File,s_CODEC_DEBUG_SUMMARY____d___d_bps_638b47d4,*(undefined4 *)((int)param_1 + 0xde),
            *(undefined4 *)((int)param_1 + 0xfa));
  }
  if (*(int *)((int)param_1 + 0xee) == 4) {
    FUN_638ad2f0(*(int *)((int)param_1 + 0xd6));
  }
  else {
    if (*(FILE **)((int)param_1 + 0x26b) != (FILE *)0x0) {
      fclose(*(FILE **)((int)param_1 + 0x26b));
      *(undefined4 *)((int)param_1 + 0x26b) = 0;
    }
    if (*(int *)(*(int *)((int)param_1 + 0xd6) + 0x366) == 0) {
      remove((char *)(*(int *)((int)param_1 + 0xd6) + 0x1ca));
    }
  }
  if (*(short *)(*(int *)((int)param_1 + 0xd6) + 0xf4) == 1) {
    FUN_638a5660(*(int *)((int)param_1 + 0xd6));
  }
  FUN_638a8f50((int)param_1);
  FUN_638a8390((int)param_1 + 0x32);
  if (*(void **)((int)param_1 + 0x229) != (void *)0x0) {
    operator_delete(*(void **)((int)param_1 + 0x229));
  }
  psVar1 = (short *)(*(int *)((int)param_1 + 0xd6) + 0xf4);
  *psVar1 = *psVar1 + -1;
  (**(code **)(*param_1 + 8))();
  return 0;
}


