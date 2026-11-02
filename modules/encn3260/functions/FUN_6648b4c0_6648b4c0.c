/* Module: encn3260.dll
   Function: FUN_6648b4c0
   Address: 6648b4c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_6648b4c0(void *this,undefined4 param_1,uint param_2)

{
  int *piVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  ulonglong uVar5;
  bool bVar6;
  short sVar7;
  ushort uVar8;
  uint uVar9;
  char *pcVar10;
  void *pvVar11;
  int *piVar12;
  int iVar13;
  undefined2 extraout_var;
  int local_8;
  
  local_8 = 0;
  if ((param_2 != 0) &&
     (sVar7 = (**(code **)(**(int **)((int)this + 0x5c) + 0x10))(param_1,param_2), sVar7 == 0)) {
    return -0x7fffbffc;
  }
  puVar3 = *(undefined4 **)((int)this + 0x5c);
  iVar13 = puVar3[3];
  iVar4 = puVar3[2];
  if (iVar13 - iVar4 < 0) {
    uVar9 = (uint)*(ushort *)(puVar3 + 5);
  }
  else {
    uVar9 = 0;
  }
  uVar8 = (**(code **)*puVar3)();
  uVar5 = (ulonglong)((iVar13 - iVar4) + uVar9 & 0xffff) / (ulonglong)(longlong)(int)(uint)uVar8;
  uVar9 = (uint)uVar5;
  param_2 = 0;
  if ((short)uVar5 == 0) {
    return 0;
  }
  pcVar10 = operator_new(uVar9);
  do {
    if (*(int *)((int)this + 100) != 0) break;
    (**(code **)(**(int **)((int)this + 0x5c) + 0xc))(pcVar10,uVar9);
    if (*pcVar10 == '$') {
      param_2 = 0;
      bVar6 = false;
      if (3 < (ushort)uVar9) {
        cVar2 = pcVar10[1];
        uVar8 = CONCAT11(pcVar10[2],pcVar10[3]);
        if ((uint)uVar8 <= (uVar9 & 0xffff) - 4) {
          pvVar11 = (void *)FUN_6648bb10(this,cVar2);
          if (pvVar11 != (void *)0x0) {
            local_8 = FUN_66488290(pvVar11,pcVar10 + 4,uVar8,CONCAT22(extraout_var,(short)cVar2));
          }
          bVar6 = true;
          param_2 = uVar8 + 4;
          uVar9 = uVar9 - param_2;
        }
      }
      (**(code **)(**(int **)((int)this + 0x5c) + 0x10))(pcVar10 + param_2,uVar9);
      if (!bVar6) break;
    }
    else {
      param_2 = uVar9 & 0xffff;
      piVar12 = FUN_664bff40(*(void **)((int)this + 0x60),pcVar10,&param_2);
      uVar9 = uVar9 - param_2;
      (**(code **)(**(int **)((int)this + 0x5c) + 0x10))(pcVar10 + param_2,uVar9);
      if (piVar12 == (int *)0x0) break;
      pvVar11 = (void *)FUN_6648bb80(this,piVar12[3]);
      if (pvVar11 == (void *)0x0) {
        puVar3 = *(undefined4 **)(*(int *)((int)this + 0x44) + 8);
        if (puVar3 != (undefined4 *)0x0) {
          iVar13 = (**(code **)(*piVar12 + 4))();
          if (iVar13 == 3) {
            local_8 = FUN_6648b9f0((void *)*puVar3,piVar12);
          }
          else if (iVar13 == 6) {
            local_8 = FUN_6648b720(this,(void *)*puVar3,piVar12);
          }
          else if (iVar13 == 8) {
            local_8 = FUN_6648b9d0((void *)*puVar3,(int)piVar12);
          }
          else {
            local_8 = -0x7ffbfff7;
          }
        }
      }
      else {
        (**(code **)(*(int *)this + 4))(this);
        piVar1 = (int *)((int)pvVar11 + 0x30);
        (**(code **)(*(int *)((int)pvVar11 + 0x30) + 4))(piVar1);
        local_8 = FUN_66487ed0(pvVar11,piVar12);
        if (local_8 == 0) {
          FUN_6648be00(this,(int)pvVar11,piVar12[3]);
        }
        (**(code **)(*piVar1 + 8))(piVar1);
        (**(code **)(*(int *)this + 8))(this);
      }
      (**(code **)*piVar12)(1);
    }
  } while ((short)uVar9 != 0);
  operator_delete(pcVar10);
  return local_8;
}


