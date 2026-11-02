/* Module: encn3260.dll
   Function: FUN_66490940
   Address: 66490940
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_66490940(void *this,ushort *param_1,int param_2)

{
  int iVar1;
  undefined2 extraout_var;
  
  FUN_6648d4b0(this,param_1,param_2);
  if (*(int *)((int)this + 0x30) != 0) {
    if (param_1 != (ushort *)0x0) {
      FUN_6648d260(*(void **)((int)this + 0x2c),CONCAT22(extraout_var,*param_1),
                   *(undefined4 *)((int)this + 0x58));
    }
    if (*(int *)((int)this + 0x30) != 0) {
      return;
    }
  }
  iVar1 = FUN_6648dfd0(this,(uint)*param_1);
  if (*(int *)((int)this + 0x5c) != 0) {
    *(undefined4 *)(iVar1 + 0x206) = 1;
  }
  if (*(int *)((int)this + 0xc2) != 0) {
    *(undefined4 *)(iVar1 + 0x20e) = 1;
  }
  return;
}


