/* Module: rv203260.dll
   Function: FUN_638ad210
   Address: 638ad210
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_638ad210(void *this,undefined4 param_1,undefined1 param_2)

{
  FILE *pFVar1;
  undefined1 uStack0000000b;
  char local_108 [260];
  
  uStack0000000b = param_2;
  if (*(int *)((int)this + 0x1c6) == 0) {
    FUN_638ad160((char *)((int)this + 0x1ca),local_108);
    pFVar1 = fopen(local_108,&DAT_638b50a0);
    *(FILE **)((int)this + 0x1c6) = pFVar1;
    if (pFVar1 == (FILE *)0x0) {
      return 0x80004005;
    }
  }
  fwrite(&param_1,4,1,*(FILE **)((int)this + 0x1c6));
  fwrite(&stack0x0000000b,1,1,*(FILE **)((int)this + 0x1c6));
  fwrite(&stack0x0000000c,4,1,*(FILE **)((int)this + 0x1c6));
  fwrite(&stack0x00000010,1,1,*(FILE **)((int)this + 0x1c6));
  fwrite(&stack0x00000014,1,1,*(FILE **)((int)this + 0x1c6));
  return 0;
}


