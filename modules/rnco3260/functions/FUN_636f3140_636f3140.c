/* Module: rnco3260.dll
   Function: FUN_636f3140
   Address: 636f3140
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_636f3140(void *this,int param_1,int param_2)

{
  ConvertYUVtoRGB(param_1,*(int *)((int)this + 0xc) + param_1,*(int *)((int)this + 0x10) + param_1,
                  *(undefined4 *)((int)this + 0x18),*(int *)((int)this + 0x14) + param_2,
                  *(undefined4 *)((int)this + 0x1c),*(undefined4 *)((int)this + 0x20),
                  *(undefined4 *)((int)this + 0x24),7,0);
  return;
}


