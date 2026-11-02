/* Module: encn3260.dll
   Function: FUN_664b74e0
   Address: 664b74e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_664b74e0(void *this,char *param_1,undefined4 param_2,undefined4 param_3,int param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,int param_9,
            undefined4 param_10)

{
  bool bVar1;
  undefined4 uVar2;
  undefined3 extraout_var;
  uint uVar3;
  void *pvVar4;
  undefined4 local_8;
  
  local_8 = 0;
  if (param_9 == 0x52474233) {
    local_8 = 7;
  }
  else if (param_9 == 0x52474236) {
    local_8 = 9;
  }
  else if (param_9 == 0x52474235) {
    local_8 = 8;
  }
  uVar2 = FUN_664b7680();
  if ((short)uVar2 != 0) {
    FUN_664b0a00(*(void **)((int)this + 0x10),*(undefined4 *)((int)this + 0x14),
                 *(undefined4 *)((int)this + 0x18),*(undefined4 *)((int)this + 0x1c),
                 *(undefined4 *)((int)this + 0x20));
    *(undefined4 *)((int)this + 0x28) = *(undefined4 *)((int)this + 0x14);
    *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)((int)this + 0x18);
    *(undefined4 *)((int)this + 0x30) = *(undefined4 *)((int)this + 0x1c);
    *(undefined4 *)((int)this + 0x34) = *(undefined4 *)((int)this + 0x20);
  }
  bVar1 = FUN_664b7720();
  if ((short)CONCAT31(extraout_var,bVar1) != 0) {
    FUN_664b0ac0(*(void **)((int)this + 0x10),*(undefined4 *)((int)this + 0x24),param_10);
    *(undefined4 *)((int)this + 0x38) = *(undefined4 *)((int)this + 0x24);
  }
  if (*param_1 == '\x01') {
    *param_1 = param_1[1];
  }
  else if ((float)_DAT_664df4b0 < *(float *)((int)this + 0x24) - (float)_DAT_664df4a8) {
    uVar3 = FUN_664d56e0();
    if (uVar3 == 1) {
      if (*(short *)((int)this + 0x3c) != 0) {
        pvVar4 = operator_new(param_4 * 8 + 7);
        uVar2 = ftol();
        FUN_664b0ba0(*(void **)((int)this + 0x10),param_1,param_1,param_6,param_7,param_4,pvVar4,
                     uVar2);
        if (pvVar4 != (void *)0x0) {
          operator_delete(pvVar4);
        }
        goto LAB_664b7646;
      }
    }
    else if (*(short *)((int)this + 0x3c) != 0) {
      FUN_664b0b70(*(void **)((int)this + 0x10),param_1,param_7,param_6,param_4,
                   *(undefined4 *)((int)this + 0x24));
      goto LAB_664b7646;
    }
    FUN_664b0b40(*(void **)((int)this + 0x10),param_1,param_7,param_6,param_4,
                 *(undefined4 *)((int)this + 0x24));
  }
LAB_664b7646:
  FUN_664b0b00(*(void **)((int)this + 0x10),param_1,param_2,param_3,param_4,param_5,param_6,param_7,
               param_8,local_8,param_10);
  *param_1 = '\x01';
  return;
}


