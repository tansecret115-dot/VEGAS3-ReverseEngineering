/* Module: sfpublish.dll
   Function: FUN_00415940
   Address: 00415940
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00415940(void *this,undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  if ((*(int *)((int)this + 0x30) == 0) && (iVar1 = FUN_00415640(this), iVar1 < 0)) {
    return;
  }
  (**(code **)((int)this + 0xc))(param_2,&DAT_004367a4,param_1,0,0);
  return;
}


