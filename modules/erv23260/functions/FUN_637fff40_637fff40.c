/* Module: erv23260.dll
   Function: FUN_637fff40
   Address: 637fff40
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_637fff40(void *this,uint *param_1)

{
  undefined1 uVar1;
  
  *param_1 = (uint)*(byte *)(*(int *)((int)this + 0xc) + 0x15);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = (uint)*(byte *)(*(int *)((int)this + 0xc) + 0x14);
  param_1[5] = ~*(uint *)(*(int *)((int)this + 0xc) + 4) & 1;
  param_1[6] = *(uint *)(*(int *)((int)this + 0xc) + 4) >> 4 & 1;
  param_1[7] = *(uint *)(*(int *)((int)this + 0xc) + 4) >> 3 & 1;
  param_1[8] = *(uint *)(*(int *)((int)this + 0xc) + 4) >> 2 & 1;
  param_1[9] = *(uint *)(*(int *)((int)this + 0xc) + 4) >> 1 & 1;
  *(undefined1 *)((int)param_1 + 0x92) = *(undefined1 *)(*(int *)((int)this + 0xc) + 0x16);
  uVar1 = *(undefined1 *)(*(int *)((int)this + 0xc) + 0x17);
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)((int)param_1 + 0x93) = uVar1;
  return;
}


