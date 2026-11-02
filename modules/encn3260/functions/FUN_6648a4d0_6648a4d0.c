/* Module: encn3260.dll
   Function: FUN_6648a4d0
   Address: 6648a4d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6648a4d0(void *this,undefined4 param_1,int param_2)

{
  FILE *_File;
  char *_Format;
  
  if (*(int *)((int)this + 0x156) != 0) {
    _File = fopen(*(char **)((int)this + 0x194),&DAT_664e27ac);
    if (_File != (FILE *)0x0) {
      if (param_2 == 0) {
        _Format = s_OUT__664e279c;
      }
      else {
        _Format = &DAT_664e27a4;
      }
      fprintf(_File,_Format);
      fprintf(_File,&DAT_664e2798,param_1);
      fclose(_File);
    }
  }
  return;
}


