/* Module: atrc3260.dll
   Function: FUN_68001d50
   Address: 68001d50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_68001d50(void *this,void *param_1,uint param_2,void *param_3,uint *param_4,uint param_5)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  undefined4 local_8;
  
  pvVar4 = param_1;
  param_1 = param_3;
  uVar2 = param_2 / *(uint *)((int)this + 0x22);
  iVar5 = 0;
  local_8 = this;
  if (0 < (int)uVar2) {
    do {
      if (*(code **)((int)this + 0x4e) != (code *)0x0) {
        sVar1 = (**(code **)((int)this + 0x4e))
                          (*(undefined4 *)((int)this + 0x32),pvVar4,
                           ~(param_5 >> ((byte)iVar5 & 0x1f) | 0xfffffffe),param_1);
        local_8 = (void *)(int)sVar1;
      }
      pvVar4 = (void *)((int)pvVar4 + *(int *)((int)this + 0x22));
      iVar5 = iVar5 + 1;
      param_1 = (void *)((int)param_1 + (*(uint *)((int)this + 2) / *(uint *)((int)this + 0x1e)) * 2
                        );
    } while (iVar5 < (int)uVar2);
  }
  if (local_8 != (void *)0x0) {
    *param_4 = 0;
    return 0x80004005;
  }
  uVar3 = (*(int *)((int)this + 2) * uVar2 * 2) / *(uint *)((int)this + 0x1e);
  *param_4 = uVar3;
  uVar2 = *(uint *)((int)this + 10);
  if (uVar2 != 0) {
    if (uVar3 <= uVar2) {
      *(uint *)((int)this + 10) = uVar2 - uVar3;
      *param_4 = 0;
      return 0;
    }
    *param_4 = uVar3 - uVar2;
    memmove(param_3,(void *)((int)param_3 + *(int *)((int)this + 10)),uVar3 - uVar2);
    *(undefined4 *)((int)this + 10) = 0;
  }
  return 0;
}


