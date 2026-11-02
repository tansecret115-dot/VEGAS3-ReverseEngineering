/* Module: erv33260.dll
   Function: FUN_670795b0
   Address: 670795b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_670795b0(void *this,int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x14);
  uVar2 = *(uint *)(param_1 + 0x18);
  *(int *)((int)this + 0x178) = param_2;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(uint *)((int)this + 0x184) = uVar1 % uVar2;
  *(undefined4 *)((int)this + 0x17c) = *(undefined4 *)((int)this + 0x88);
  *(undefined4 *)((int)this + 0x180) = *(undefined4 *)((int)this + 0x8c);
  *(undefined4 *)((int)this + 0x1b8) = *(undefined4 *)((int)this + 0x304);
  *(undefined4 *)((int)this + 400) = *(undefined4 *)((int)this + 0xec);
  if (param_2 != 2) {
    *(uint *)((int)this + 0x228) = (uint)(*(int *)((int)this + 0x228) == 0);
  }
  *(undefined4 *)((int)this + 0x1b4) = *(undefined4 *)((int)this + 0x228);
  return;
}


