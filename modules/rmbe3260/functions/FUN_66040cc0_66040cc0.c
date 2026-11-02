/* Module: rmbe3260.dll
   Function: FUN_66040cc0
   Address: 66040cc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66040cc0(void *this,undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  undefined4 uVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    if ((*(int *)((int)this + 0x184) == 0) || (*(int *)((int)this + 0x113) == 0)) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
    *param_1 = uVar1;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)((int)this + 0x113);
  }
  if (param_3 != (int *)0x0) {
    *param_3 = *(int *)((int)this + 0x140) *
               (*(int *)((int)this + 0x13c) * 0x18 + 0x1fU >> 3 & 0x1ffffffc);
  }
  return 0;
}


