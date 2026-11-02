/* Module: rv303260.dll
   Function: FUN_67209840
   Address: 67209840
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_67209840(void *this,undefined4 param_1,int *param_2)

{
  int iVar1;
  
  switch(param_1) {
  case 0x1000b:
    iVar1 = ftol();
    *param_2 = iVar1;
    return 0;
  case 0x1000c:
    iVar1 = ftol();
    *param_2 = iVar1;
    return 0;
  case 0x10014:
    iVar1 = *(int *)((int)this + 0x235);
    if (iVar1 == 0) {
      iVar1 = ftol();
      iVar1 = *(int *)(&DAT_67214728 + iVar1 * 4);
    }
    *param_2 = iVar1;
    return 0;
  case 0x10018:
    if (((*(int *)(*(int *)((int)this + 0xd6) + 0x2d6) != 0) && (*(int *)((int)this + 0xee) != 5))
       && ((*(double *)((int)this + 0xf2) < _DAT_67213338 ||
           (*(int *)(*(int *)((int)this + 0xd6) + 0x35e) == 0)))) {
      *param_2 = 0;
      return 0;
    }
    *param_2 = 1;
  }
  return 0;
}


