/* Module: erv33260.dll
   Function: FUN_6707d1f0
   Address: 6707d1f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6707d1f0(void *this,uint *param_1,int param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_67072360(param_1);
  if ((*(int *)((int)this + 0x78) != 3) && (*(int *)((int)this + 0x78) != 4)) {
    FUN_6707ffc0(param_1[1],param_1[2],*(uint *)((int)this + 0x3c),*(int *)((int)this + 0x40),puVar1
                 ,*(uint **)(param_2 + 4),*(uint **)(param_2 + 8),*(uint **)(param_2 + 0xc),
                 *(int *)(param_2 + 0x10));
    return;
  }
  FUN_6707f960(param_1[1],param_1[2],*(uint *)((int)this + 0x3c),*(uint *)((int)this + 0x40),puVar1,
               *(uint **)(param_2 + 4),*(uint **)(param_2 + 8),*(uint **)(param_2 + 0xc),
               *(uint *)(param_2 + 0x10));
  return;
}


