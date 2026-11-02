/* Module: erv23260.dll
   Function: FUN_638114a0
   Address: 638114a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_638114a0(void *this,int param_1,int param_2,int param_3,int *param_4,int *param_5)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(int *)((int)this + 0x580) - 1;
  iVar2 = (int)((param_2 - param_1 & uVar1) << 0x10) / (int)(param_3 - param_1 & uVar1);
  *param_4 = iVar2;
  *param_5 = iVar2 + -0x10000;
  return;
}


