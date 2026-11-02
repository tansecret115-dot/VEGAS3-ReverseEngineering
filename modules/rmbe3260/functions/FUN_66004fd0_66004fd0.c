/* Module: rmbe3260.dll
   Function: FUN_66004fd0
   Address: 66004fd0
   Source: Ghidra pseudocode (Stage 10 batch) */


CPNPropertyPage * __thiscall
FUN_66004fd0(void *this,ulong param_1,char *param_2,int *param_3,char *param_4,undefined2 param_5)

{
  CPNPropertyPage::CPNPropertyPage(this,param_1,param_2);
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x10c) = 0;
  FUN_6605b650((undefined4 *)((int)this + 0x114));
  *(undefined ***)this = &PTR_FUN_660630f8;
  *(int **)((int)this + 0x110) = param_3;
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 4))(param_3);
  }
  FUN_6605b970((undefined4 *)((int)this + 0x114),param_4);
  *(undefined2 *)((int)this + 0x120) = param_5;
  return this;
}


