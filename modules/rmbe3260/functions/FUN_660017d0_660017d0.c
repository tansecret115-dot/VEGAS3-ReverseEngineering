/* Module: rmbe3260.dll
   Function: FUN_660017d0
   Address: 660017d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall
FUN_660017d0(void *this,ulong param_1,int *param_2,int *param_3,undefined4 param_4,int *param_5,
            char *param_6)

{
  undefined4 *puVar1;
  int iVar2;
  
  FUN_660010d0(this,param_1,param_2,param_3,param_4,param_6);
  *(undefined ***)this = &PTR_FUN_66062688;
  puVar1 = (undefined4 *)((int)this + 0x162);
  iVar2 = 4;
  do {
    puVar1[-4] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)((int)this + 0x406) = 0;
  *(undefined4 *)((int)this + 0x40a) = 0;
  *(undefined4 *)((int)this + 0x402) = 0;
  iVar2 = FUN_66001a50((int)this);
  if (iVar2 < 0) {
    *(undefined4 *)((int)this + 0x110) = 0;
  }
  if (param_5 == (int *)0x0) {
    *(undefined4 *)((int)this + 0x40e) = 0;
  }
  else {
    *(int **)((int)this + 0x40e) = param_5;
    (**(code **)(*param_5 + 4))(param_5);
  }
  *(undefined4 *)((int)this + 0x412) = 0;
  *(undefined4 *)((int)this + 0x416) = 0;
  *(undefined4 *)((int)this + 0x41a) = 0;
  *(undefined4 *)((int)this + 0x41e) = 0;
  *(undefined4 *)((int)this + 0x422) = 0;
  return this;
}


