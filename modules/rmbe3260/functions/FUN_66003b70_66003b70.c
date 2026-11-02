/* Module: rmbe3260.dll
   Function: FUN_66003b70
   Address: 66003b70
   Source: Ghidra pseudocode (Stage 10 batch) */


CPNPropertyPage * __thiscall
FUN_66003b70(void *this,ulong param_1,char *param_2,int *param_3,char *param_4,undefined2 param_5)

{
  CPNPropertyPage::CPNPropertyPage(this,param_1,param_2);
  FUN_6605b650((undefined4 *)((int)this + 0x118));
  *(undefined ***)this = &PTR_FUN_66062dd8;
  if (param_3 == (int *)0x0) {
    *(undefined4 *)((int)this + 0x114) = 0;
  }
  else {
    *(int **)((int)this + 0x114) = param_3;
    (**(code **)(*param_3 + 4))(param_3);
  }
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  FUN_6605b970((undefined4 *)((int)this + 0x118),param_4);
  *(undefined2 *)((int)this + 0x124) = param_5;
  return this;
}


