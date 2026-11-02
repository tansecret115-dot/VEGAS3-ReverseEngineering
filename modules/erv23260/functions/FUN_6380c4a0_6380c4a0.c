/* Module: erv23260.dll
   Function: FUN_6380c4a0
   Address: 6380c4a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6380c4a0(void *this,uint param_1,int param_2,int param_3,int param_4)

{
  *(uint *)(*(int *)((int)this + 0x74c) + param_1 * 4) = param_1 & 0xf;
  FUN_63800310(*(void **)((int)this + 0x6c4),*(int *)(param_2 + 0x30),param_3);
  if (*(int *)((int)this + 0x60c) != 0) {
    FUN_63800340(*(void **)((int)this + 0x6c4),*(int *)(param_2 + 0xc));
  }
  FUN_638004b0(*(void **)((int)this + 0x6c4),*(uint *)(param_2 + 0x30));
  if (param_3 != 0) {
    FUN_637fb060(*(void **)((int)this + 0x6c4),param_4,*(int *)((int)this + 0x750),
                 *(int *)((int)this + 0x624));
  }
  return;
}


