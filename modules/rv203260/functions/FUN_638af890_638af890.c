/* Module: rv203260.dll
   Function: FUN_638af890
   Address: 638af890
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_638af890(void *this,int param_1)

{
  if (*(int *)this == 0) {
    FUN_638af620(this);
  }
  if ((1 < *(int *)(*(int *)this + -0xc)) || (*(int *)(*(int *)this + -4) < param_1)) {
    FUN_638af660(this);
    FUN_638af760(this,param_1);
  }
  return;
}


