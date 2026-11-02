/* Module: encn3260.dll
   Function: FUN_664bd6d0
   Address: 664bd6d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __thiscall FUN_664bd6d0(void *this,void *param_1,char *param_2)

{
  int iVar1;
  void *this_00;
  int local_10 [3];
  
  iVar1 = FUN_664bd670(this,param_2);
  if (iVar1 != 0) {
    this_00 = (void *)FUN_664be4b0(iVar1);
    if (this_00 != (void *)0x0) {
      FUN_664be390(this_00,local_10);
      FUN_664bb2e0(param_1,local_10);
      FUN_664bb3e0(local_10);
      return param_1;
    }
  }
  FUN_664bb450(param_1,&DAT_664f05c4);
  return param_1;
}


