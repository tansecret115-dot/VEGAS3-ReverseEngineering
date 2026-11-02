/* Module: rv203260.dll
   Function: FUN_638a9840
   Address: 638a9840
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_638a9840(void *this,undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  switch(param_1) {
  case 0x1000b:
    uVar1 = ftol();
    *param_2 = uVar1;
    return 0;
  case 0x1000c:
    uVar1 = ftol();
    *param_2 = uVar1;
    return 0;
  case 0x10014:
    iVar2 = ftol();
    *param_2 = *(undefined4 *)(&DAT_638b4630 + iVar2 * 4);
    return 0;
  case 0x10015:
    *param_2 = *(undefined4 *)((int)this + 0x13e);
    return 0;
  case 0x10018:
    if (((*(int *)(*(int *)((int)this + 0xd6) + 0x2ce) != 0) && (*(int *)((int)this + 0xee) != 5))
       && ((*(double *)((int)this + 0xf2) < _DAT_638b3338 ||
           (*(int *)(*(int *)((int)this + 0xd6) + 0x356) == 0)))) {
      *param_2 = 0;
      return 0;
    }
    *param_2 = 1;
  }
  return 0;
}


