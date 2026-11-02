/* Module: rmto3260.dll
   Function: FUN_662ef200
   Address: 662ef200
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_662ef200(void *this,int param_1)

{
  if (*(int *)this == 0) {
    FUN_662eef50(this);
  }
  if ((1 < *(int *)(*(int *)this + -0xc)) || (*(int *)(*(int *)this + -4) < param_1)) {
    FUN_662eef90(this);
    FUN_662ef090(this,param_1);
  }
  return;
}


