/* Module: erv23260.dll
   Function: FUN_6380b0d0
   Address: 6380b0d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6380b0d0(void *this,uint *param_1,int param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_637f2230(param_1);
  if (*(int *)((int)this + 0x78) == 3) {
    FUN_63813aa0(param_1[1],param_1[2],*(uint *)((int)this + 0x3c),*(int *)((int)this + 0x40),puVar1
                 ,*(uint **)(param_2 + 4),*(uint **)(param_2 + 8),*(uint **)(param_2 + 0xc),
                 *(int *)(param_2 + 0x10));
    return;
  }
  if (*(int *)((int)this + 0x78) == 4) {
    FUN_63813fa0(param_1[1],param_1[2],*(uint *)((int)this + 0x3c),*(uint *)((int)this + 0x40),
                 puVar1,*(uint **)(param_2 + 4),*(uint **)(param_2 + 8),*(uint **)(param_2 + 0xc),
                 *(uint *)(param_2 + 0x10));
    return;
  }
  FUN_63813640(param_1[1],param_1[2],*(uint *)((int)this + 0x3c),*(uint *)((int)this + 0x40),puVar1,
               *(uint **)(param_2 + 4),*(uint **)(param_2 + 8),*(uint **)(param_2 + 0xc),
               *(uint *)(param_2 + 0x10));
  return;
}


