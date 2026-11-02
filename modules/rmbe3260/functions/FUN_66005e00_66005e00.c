/* Module: rmbe3260.dll
   Function: FUN_66005e00
   Address: 66005e00
   Source: Ghidra pseudocode (Stage 10 batch) */


CPNPropertyPage * __thiscall
FUN_66005e00(void *this,ulong param_1,char *param_2,int *param_3,char *param_4,undefined2 param_5)

{
  CPNPropertyPage::CPNPropertyPage(this,param_1,param_2);
  FUN_6605b650((undefined4 *)((int)this + 0x104));
  *(undefined ***)this = &PTR_FUN_660633f8;
  if (param_3 == (int *)0x0) {
    *(undefined4 *)((int)this + 0x134) = 0;
  }
  else {
    *(int **)((int)this + 0x134) = param_3;
    (**(code **)(*param_3 + 4))(param_3);
  }
  FUN_6605b970((undefined4 *)((int)this + 0x104),param_4);
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined2 *)((int)this + 0x138) = param_5;
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 0x124) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  return this;
}


