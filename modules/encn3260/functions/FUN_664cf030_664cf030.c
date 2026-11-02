/* Module: encn3260.dll
   Function: FUN_664cf030
   Address: 664cf030
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_664cf030(void *this,byte *param_1)

{
  int iVar1;
  int local_8;
  
  local_8 = 0;
  if (param_1 != (byte *)0x0) {
    iVar1 = FUN_664bde30(*(void **)((int)this + 8),param_1,&local_8);
    if (iVar1 != 0) {
      return local_8;
    }
  }
  return 0;
}


