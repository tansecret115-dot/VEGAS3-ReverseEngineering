/* Module: rmbe3260.dll
   Function: FUN_66005350
   Address: 66005350
   Source: Ghidra pseudocode (Stage 10 batch) */


CPNPropertyPage * __thiscall
FUN_66005350(void *this,ulong param_1,int *param_2,int *param_3,undefined4 param_4,
            undefined4 param_5,char *param_6,undefined2 param_7)

{
  int iVar1;
  
  CPNPropertyPage::CPNPropertyPage(this,param_1,(char *)param_2);
  FUN_6605b650((undefined4 *)((int)this + 0x104));
  *(undefined ***)this = &PTR_FUN_66063278;
  *(undefined4 *)((int)this + 300) = param_5;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  if (param_3 != (int *)0x0) {
    *(int **)((int)this + 0x130) = param_3;
    (**(code **)(*param_3 + 4))(param_3);
    param_2 = (int *)0x0;
    iVar1 = (**(code **)(**(int **)((int)this + 0x130) + 0x50))
                      (*(int **)((int)this + 0x130),&param_2);
    if (-1 < iVar1) {
      (**(code **)*param_2)(param_2,&DAT_66065c68,(undefined4 *)((int)this + 0x134));
      if (param_2 != (int *)0x0) {
        (**(code **)(*param_2 + 8))(param_2);
      }
    }
  }
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0x118) = 0;
  FUN_6605b970((void *)((int)this + 0x104),param_6);
  *(undefined4 *)((int)this + 0x138) = param_4;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x124) = 0;
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined2 *)((int)this + 0x13c) = param_7;
  return this;
}


