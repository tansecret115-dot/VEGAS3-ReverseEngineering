/* Module: sfxpfx2.dll
   Function: FUN_5c8cdeb4
   Address: 5c8cdeb4
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5c8cdeb4(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  return;
}


