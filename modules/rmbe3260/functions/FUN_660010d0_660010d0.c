/* Module: rmbe3260.dll
   Function: FUN_660010d0
   Address: 660010d0
   Source: Ghidra pseudocode (Stage 10 batch) */


CPNPropertyPage * __thiscall
FUN_660010d0(void *this,ulong param_1,int *param_2,int *param_3,undefined4 param_4,char *param_5)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  CPNPropertyPage::CPNPropertyPage(this,param_1,(char *)param_2);
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0x118) = param_4;
  *(undefined2 *)((int)this + 0x11c) = 1;
  FUN_6605b7e0((void *)((int)this + 0x11e),param_5);
  piVar2 = param_3;
  *(undefined4 *)((int)this + 0x14e) = 0;
  *(undefined ***)this = &PTR_FUN_660624f8;
  (**(code **)(*param_3 + 4))(param_3);
  puVar1 = (undefined4 *)((int)this + 0x104);
  *puVar1 = 0;
  iVar3 = (**(code **)*piVar2)(piVar2,&DAT_66065c68,puVar1);
  if ((-1 < iVar3) && (*(undefined4 *)((int)this + 0x110) = 1, -1 < iVar3)) {
    param_2 = (int *)0x0;
    iVar3 = (*(code *)**(undefined4 **)*puVar1)((undefined4 *)*puVar1,&DAT_66066248,&param_2);
    if (-1 < iVar3) {
      (**(code **)(*param_2 + 0xc))(param_2,(int)this + 0x11c);
      if (param_2 != (int *)0x0) {
        (**(code **)(*param_2 + 8))(param_2);
      }
    }
  }
  (**(code **)(*piVar2 + 8))(piVar2);
  if (2 < *(uint *)((int)this + 0x118)) {
    *(undefined4 *)((int)this + 0x118) = 1;
  }
  return this;
}


