/* Module: erv23260.dll
   Function: FUN_637fd810
   Address: 637fd810
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_637fd810(void *this,int param_1,uint *param_2,int param_3,undefined1 *param_4,undefined4 param_5
            ,uint param_6)

{
  undefined4 uVar1;
  
  if (2 < *(int *)((int)this + 700)) {
    uVar1 = 0;
    if ((*(int *)((int)this + 0x2f8) != 0) && (*(int *)((int)this + 0x464) != 7)) {
      uVar1 = param_5;
    }
    (**(code **)((int)this + *(int *)((int)this + 700) * 4 + 0x520))
              (param_1,*(undefined4 *)(*(int *)((int)this + 0x340) + 0x100),param_2,param_3,param_4,
               uVar1);
    return;
  }
  FUN_637fd890(this,param_1,param_2,param_3,param_4,(byte)param_5,param_6,
               *(int *)((int)this + 0x2f8));
  return;
}


