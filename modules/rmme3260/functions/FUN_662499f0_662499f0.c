/* Module: rmme3260.dll
   Function: FUN_662499f0
   Address: 662499f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_662499f0(void *this,undefined4 *param_1)

{
  *(undefined4 *)((int)this + 0x8a4) = *param_1;
  *(undefined4 *)((int)this + 0x8a8) = param_1[1];
  *(undefined4 *)((int)this + 0x8ac) = param_1[2];
  *(undefined4 *)((int)this + 0x8b0) = param_1[3];
  return;
}


