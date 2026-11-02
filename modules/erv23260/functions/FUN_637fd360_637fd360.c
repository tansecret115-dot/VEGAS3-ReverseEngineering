/* Module: erv23260.dll
   Function: FUN_637fd360
   Address: 637fd360
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_637fd360(void *this,int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = param_1 << ((' ' - (char)param_2) - (char)*(int *)((int)this + 0xc) & 0x1fU);
  if (*(int *)((int)this + 0xc) != 0) {
    uVar1 = uVar1 | (uint)**(byte **)((int)this + 4) << 0x18;
  }
  *(char *)(*(int *)((int)this + 4) + 3) = (char)uVar1;
  *(char *)(*(int *)((int)this + 4) + 2) = (char)(uVar1 >> 8);
  *(char *)(*(int *)((int)this + 4) + 1) = (char)(uVar1 >> 0x10);
  **(undefined1 **)((int)this + 4) = (char)(uVar1 >> 0x18);
  uVar1 = param_2 + *(int *)((int)this + 0xc);
  *(uint *)((int)this + 4) = *(int *)((int)this + 4) + (uVar1 >> 3);
  *(uint *)((int)this + 0xc) = uVar1 & 7;
  return;
}


