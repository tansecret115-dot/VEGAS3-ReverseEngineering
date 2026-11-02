/* Module: rmto3260.dll
   Function: FUN_662d9ab0
   Address: 662d9ab0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_662d9ab0(void *this,undefined4 *param_1,undefined4 *param_2,uint param_3,uint *param_4)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  int local_8;
  
  *param_4 = 0;
  local_8 = 0;
  if (*(int *)((int)this + 8) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*(int *)((int)this + 8) + 0x10);
  }
  if (iVar3 == 0) {
    return (-(uint)(*(int *)((int)this + 0xb2) != 0) & 0xfffffff6) + 0x800403d4;
  }
  if (param_3 < *(ushort *)((int)this + 0x46)) {
    local_8 = -0x7ffbfff3;
  }
  if (-1 < local_8) {
    *(short *)((int)param_1 + 6) = (short)((ulonglong)*(uint *)((int)this + 0x62) % 0xffff);
    *(undefined2 *)(param_1 + 1) = *(undefined2 *)((int)this + 0x76);
    if (*(uint *)((int)this + 0x62) % (uint)*(ushort *)((int)this + 0x6a) == 0) {
      piVar2 = *(int **)((int)this + 0xaa);
      if (piVar2 == (int *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = piVar2[4];
      }
      if (iVar3 == 0) {
        local_8 = -0x7ffbfff7;
      }
      else {
        FUN_662ed7e0(piVar2);
        uVar4 = ftol();
        *(undefined4 *)((int)this + 0x8e) = uVar4;
      }
    }
    if (-1 < local_8) {
      if (*(int *)((int)this + 0xbe) == 0) {
        uVar4 = *(undefined4 *)((int)this + 0x8e);
      }
      else {
        uVar4 = ftol();
      }
      *param_1 = uVar4;
      *(ushort *)(param_1 + 2) =
           (-(ushort)(*(uint *)((int)this + 0x62) % (uint)*(ushort *)((int)this + 0x6a) != 0) &
           0xfffe) + 2;
      *(int *)((int)this + 0x62) = *(int *)((int)this + 0x62) + 1;
      puVar5 = (undefined4 *)FUN_662ed7e0(*(int **)((int)this + 8));
      if (puVar5 != (undefined4 *)0x0) {
        uVar1 = *(ushort *)((int)this + 0x46);
        puVar7 = puVar5;
        for (uVar6 = (uint)(uVar1 >> 2); uVar6 != 0; uVar6 = uVar6 - 1) {
          *param_2 = *puVar7;
          puVar7 = puVar7 + 1;
          param_2 = param_2 + 1;
        }
        for (uVar6 = uVar1 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined1 *)param_2 = *(undefined1 *)puVar7;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
          param_2 = (undefined4 *)((int)param_2 + 1);
        }
        *param_4 = (uint)*(ushort *)((int)this + 0x46);
        operator_delete(puVar5);
      }
    }
  }
  return local_8;
}


