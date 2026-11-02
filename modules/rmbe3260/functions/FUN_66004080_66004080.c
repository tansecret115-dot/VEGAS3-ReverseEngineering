/* Module: rmbe3260.dll
   Function: FUN_66004080
   Address: 66004080
   Source: Ghidra pseudocode (Stage 10 batch) */


CPNPropertyPage * __thiscall
FUN_66004080(void *this,ulong param_1,char *param_2,int *param_3,undefined4 param_4,int *param_5,
            undefined4 param_6,int *param_7,char *param_8,undefined2 param_9)

{
  CPNPropertyPage::CPNPropertyPage(this,param_1,param_2);
  FUN_6605b650((undefined4 *)((int)this + 0x144));
  FUN_6605b650((undefined4 *)((int)this + 0x150));
  *(undefined ***)this = &PTR_FUN_66062f58;
  if (param_3 == (int *)0x0) {
    *(undefined4 *)((int)this + 0x130) = 0;
  }
  else {
    *(int **)((int)this + 0x130) = param_3;
    (**(code **)(*param_3 + 4))(param_3);
  }
  *(undefined4 *)((int)this + 0x13c) = param_4;
  *(undefined4 *)((int)this + 0x140) = param_6;
  if (param_5 == (int *)0x0) {
    *(undefined4 *)((int)this + 0x134) = 0;
  }
  else {
    *(int **)((int)this + 0x134) = param_5;
    (**(code **)(*param_5 + 4))(param_5);
  }
  if (param_7 == (int *)0x0) {
    *(undefined4 *)((int)this + 0x138) = 0;
  }
  else {
    *(int **)((int)this + 0x138) = param_7;
    (**(code **)(*param_7 + 4))(param_7);
  }
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x124) = 0;
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  FUN_6605b970((undefined4 *)((int)this + 0x150),param_8);
  *(undefined2 *)((int)this + 0x15c) = param_9;
  return this;
}


