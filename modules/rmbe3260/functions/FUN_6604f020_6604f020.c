/* Module: rmbe3260.dll
   Function: FUN_6604f020
   Address: 6604f020
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_6604f020(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  if (*(int *)((int)this + 4) != 0) {
    fprintf(*(FILE **)this,s__s__I64d__I64d_6606ef60,param_1,param_2,param_3,param_4,param_5);
    fflush(*(FILE **)this);
  }
  return;
}


