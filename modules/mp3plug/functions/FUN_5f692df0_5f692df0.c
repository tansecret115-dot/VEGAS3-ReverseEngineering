/* Module: mp3plug.dll
   Function: FUN_5f692df0
   Address: 5f692df0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_5f692df0(void *this,undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = -0x7ff8ffa9;
  if (param_1 != (undefined4 *)0x0) {
    iVar1 = FUN_5f692810((int)this);
    if (-1 < iVar1) {
      *param_1 = *(undefined4 *)((int)this + 0x240);
    }
  }
  return iVar1;
}


