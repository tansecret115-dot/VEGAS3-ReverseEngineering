/* Module: rv303260.dll
   Function: FUN_67208e40
   Address: 67208e40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_67208e40(int *param_1)

{
  short *psVar1;
  FILE *_File;
  
  _File = *(FILE **)(*(int *)((int)param_1 + 0xd6) + 0x372);
  if (_File != (FILE *)0x0) {
    fprintf(_File,s_CODEC_DEBUG_SUMMARY____d___d_bps_672148cc,*(undefined4 *)((int)param_1 + 0xde),
            *(undefined4 *)((int)param_1 + 0xfa));
  }
  if (*(int *)((int)param_1 + 0xee) == 4) {
    FUN_6720c590(*(int *)((int)param_1 + 0xd6));
  }
  else {
    if (*(FILE **)((int)param_1 + 0x263) != (FILE *)0x0) {
      fclose(*(FILE **)((int)param_1 + 0x263));
      *(undefined4 *)((int)param_1 + 0x263) = 0;
    }
    if (*(int *)(*(int *)((int)param_1 + 0xd6) + 0x372) == 0) {
      remove((char *)(*(int *)((int)param_1 + 0xd6) + 0x1d2));
    }
  }
  if (*(short *)(*(int *)((int)param_1 + 0xd6) + 0xf4) == 1) {
    FUN_67205a30(*(int *)((int)param_1 + 0xd6));
  }
  FUN_67208f70((int)param_1);
  FUN_672083e0((int)param_1 + 0x32);
  if (*(void **)((int)param_1 + 0x21d) != (void *)0x0) {
    operator_delete(*(void **)((int)param_1 + 0x21d));
  }
  psVar1 = (short *)(*(int *)((int)param_1 + 0xd6) + 0xf4);
  *psVar1 = *psVar1 + -1;
  (**(code **)(*param_1 + 8))();
  return 0;
}


