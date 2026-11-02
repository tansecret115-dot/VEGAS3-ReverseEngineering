/* Module: erv23260.dll
   Function: FUN_63812470
   Address: 63812470
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_63812470(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7,int param_8,int param_9)

{
  int iVar1;
  
  iVar1 = param_2 + param_1 * 0x30;
  *(int *)(iVar1 + 0x40) = (param_5 - param_3 * *(int *)((int)this + 0x118)) - param_4;
  *(int *)(iVar1 + 0x44) = (param_6 - param_3 * *(int *)((int)this + 0x118)) - param_4;
  *(int *)(iVar1 + 0x48) = (param_3 * *(int *)((int)this + 0x118) + param_4) - param_7;
  *(int *)(iVar1 + 0x50) = (param_8 - param_3 * *(int *)((int)this + 0x118)) - param_4;
  *(int *)(iVar1 + 0x54) = (param_3 * *(int *)((int)this + 0x118) + param_4) - param_9;
  return 0;
}


