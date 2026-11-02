/* Module: g2plug.dll
   Function: FUN_5f80ac20
   Address: 5f80ac20
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5f80ac20(void *this,undefined2 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x10) = param_2;
  *(undefined2 *)((int)this + 0x1a) = param_1;
  *(undefined4 *)((int)this + 0xc) = 0x28;
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined2 *)((int)this + 0x18) = 1;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  uVar1 = (uint)*(ushort *)((int)this + 0x1a) * *(int *)((int)this + 0x10) + 0x1f;
  *(int *)((int)this + 0x20) =
       ((int)((uVar1 & 0xffffffe0) + ((int)uVar1 >> 0x1f & 7U)) >> 3) * *(int *)((int)this + 0x14);
  return;
}


