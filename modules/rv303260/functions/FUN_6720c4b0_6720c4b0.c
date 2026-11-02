/* Module: rv303260.dll
   Function: FUN_6720c4b0
   Address: 6720c4b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6720c4b0(void *this,undefined4 param_1,undefined1 param_2)

{
  FILE *pFVar1;
  undefined1 uStack0000000b;
  char local_108 [260];
  
  uStack0000000b = param_2;
  if (*(int *)((int)this + 0x1ce) == 0) {
    FUN_6720c400((char *)((int)this + 0x1d2),local_108);
    pFVar1 = fopen(local_108,&DAT_67215178);
    *(FILE **)((int)this + 0x1ce) = pFVar1;
    if (pFVar1 == (FILE *)0x0) {
      return 0x80004005;
    }
  }
  fwrite(&param_1,4,1,*(FILE **)((int)this + 0x1ce));
  fwrite(&stack0x0000000b,1,1,*(FILE **)((int)this + 0x1ce));
  fwrite(&stack0x0000000c,4,1,*(FILE **)((int)this + 0x1ce));
  fwrite(&stack0x00000010,1,1,*(FILE **)((int)this + 0x1ce));
  fwrite(&stack0x00000014,1,1,*(FILE **)((int)this + 0x1ce));
  return 0;
}


