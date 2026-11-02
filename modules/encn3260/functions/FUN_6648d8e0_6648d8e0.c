/* Module: encn3260.dll
   Function: FUN_6648d8e0
   Address: 6648d8e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_6648d8e0(void *this,undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  
  if (param_3 == (int *)0x0) {
    iVar1 = (**(code **)(**(int **)((int)this + 0xc) + 0xc))
                      (*(int **)((int)this + 0xc),&DAT_664dcf70,&param_3);
    if (iVar1 == 0) {
      (**(code **)(*param_3 + 0x2c))(param_3,0,0,param_2,0,0);
      (**(code **)(*param_3 + 0x28))(param_3);
      iVar1 = (**(code **)(**(int **)((int)this + 0x14) + 0xc))
                        (*(int **)((int)this + 0x14),param_1,*(undefined4 *)((int)this + 0x20),
                         param_3);
      (**(code **)(*param_3 + 8))(param_3);
      return iVar1;
    }
  }
  else {
    iVar1 = (**(code **)(**(int **)((int)this + 0x14) + 0xc))
                      (*(int **)((int)this + 0x14),param_1,*(undefined4 *)((int)this + 0x20),param_3
                      );
  }
  return iVar1;
}


