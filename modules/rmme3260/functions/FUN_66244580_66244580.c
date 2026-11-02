/* Module: rmme3260.dll
   Function: FUN_66244580
   Address: 66244580
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66244580(void *this,int *param_1,int *param_2)

{
  int iVar1;
  char *_Str;
  undefined4 *puVar2;
  
  *(undefined ***)((int)this + 4) = &PTR_LAB_6626c450;
  *(undefined4 *)((int)this + 0x27) = 0x3f800000;
  *(undefined4 *)((int)this + 0x2b) = 0x3f800000;
  *(undefined4 *)((int)this + 0x2f) = 0x3f800000;
  *(undefined4 *)((int)this + 0x33) = 0x3f800000;
  *(undefined4 *)((int)this + 0x37) = 0x3f800000;
  *(undefined4 *)((int)this + 8) = 0;
  *(int **)((int)this + 0xc) = param_1;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0xbf800000;
  *(byte *)((int)this + 0x26) = *(byte *)((int)this + 0x26) & 0xfc;
  *(int **)((int)this + 0x3b) = param_2;
  *(undefined4 *)((int)this + 0x927) = 0;
  *(undefined4 *)((int)this + 0x92b) = 0;
  *(undefined4 *)((int)this + 0x92f) = 0;
  *(undefined4 *)((int)this + 0x933) = 0;
  *(undefined ***)this = &PTR_FUN_6626c7d0;
  *(undefined ***)((int)this + 4) = &PTR_LAB_6626c798;
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))(param_1);
  }
  puVar2 = *(undefined4 **)((int)this + 0xc);
  param_1 = (int *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)*puVar2)(puVar2,&DAT_6626abb8,&param_1);
    param_2 = (int *)0x0;
    if ((param_1 != (int *)0x0) &&
       (iVar1 = (**(code **)(*param_1 + 0xc))(param_1,s_DoNotUpdateOverLay_662701d0,&param_2),
       iVar1 == 0)) {
      _Str = (char *)(**(code **)(*param_2 + 0x1c))(param_2);
      iVar1 = atoi(_Str);
      *(uint *)((int)this + 0x92f) = (uint)(iVar1 == 1);
    }
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 8))(param_2);
      param_2 = (int *)0x0;
    }
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 8))(param_1);
      param_1 = (int *)0x0;
    }
  }
  puVar2 = (undefined4 *)((int)this + 0x3f);
  for (iVar1 = 0x231; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)((int)this + 0x477) = 0x7e;
  *(undefined4 *)((int)this + 0x46f) = 0xff00ff;
  *(undefined4 *)((int)this + 0x473) = 0xff00ff;
  if (*(int *)((int)this + 0x92f) != 0) {
    *(undefined4 *)((int)this + 0x477) = 0x17e;
  }
  *(undefined4 *)((int)this + 0x47b) = 0;
  *(undefined4 *)((int)this + 0x487) = 0;
  FUN_66254d00((undefined4 *)((int)this + 0x933),(LPCSTR)0x0,1);
  (**(code **)(**(int **)((int)this + 0x933) + 4))();
  return this;
}


