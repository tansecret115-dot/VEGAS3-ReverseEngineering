/* Module: sftrkfx1.dll
   Function: FUN_5cba3620
   Address: 5cba3620
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5cba3620(void *this,int param_1,undefined4 param_2,int param_3)

{
  FUN_5cbf429c(this,0,param_1,*(undefined4 *)(&DAT_5cc03f38 + param_3 * 8),
               *(undefined4 *)(&DAT_5cc03f3c + param_3 * 8));
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined ***)this = &PTR_LAB_5cc04018;
  *(undefined ***)((int)this + 4) = &PTR_FUN_5cc04008;
  return this;
}


