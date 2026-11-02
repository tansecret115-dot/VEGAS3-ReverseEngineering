/* Module: rmme3260.dll
   Function: FUN_66257d60
   Address: 66257d60
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_66257d60(void *this,uint param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  void *pvVar8;
  int *local_8;
  
  local_8 = this;
  piVar5 = FUN_6625b6b0((void *)((int)this + 0x28),param_1,&local_8);
  if ((piVar5 == (int *)0x0) || (piVar5[5] == 0)) {
    *(undefined4 *)((int)this + 0x40) = 0x16;
    return -1;
  }
  iVar6 = piVar5[5] + -1;
  piVar5[5] = iVar6;
  if (iVar6 == 0) {
    piVar1 = *(int **)((int)this + 0x38);
    if (piVar5 == piVar1) {
      iVar6 = (piVar1[1] - piVar1[3]) + *(int *)((int)this + 0x2c);
      piVar1[4] = *(int *)((int)this + 0x30);
      puVar7 = operator_new(0x18);
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)0x0;
      }
      else {
        **(undefined4 **)((int)this + 0x38) = puVar7;
        *puVar7 = 0;
        puVar7[5] = 0;
      }
      uVar2 = *(uint *)((int)this + 0x4e);
      *(undefined4 **)((int)this + 0x38) = puVar7;
      pvVar8 = operator_new(uVar2);
      iVar3 = *(int *)((int)this + 0x38);
      *(void **)(iVar3 + 0xc) = pvVar8;
      *(uint *)(iVar3 + 0x10) = uVar2 + (int)pvVar8;
      *(int *)(iVar3 + 4) = iVar6;
      *(int *)(iVar3 + 8) = iVar6;
      uVar4 = *(undefined4 *)(*(int *)((int)this + 0x38) + 0xc);
      *(undefined4 *)((int)this + 0x30) = uVar4;
      *(undefined4 *)((int)this + 0x2c) = uVar4;
    }
    iVar6 = (**(code **)(*(int *)this + 0x34))(piVar5);
    if (iVar6 < 0) {
      return -(uint)(*(int *)((int)this + 0x40) != 0);
    }
    *local_8 = *piVar5;
    operator_delete((void *)piVar5[3]);
    operator_delete(piVar5);
  }
  return 0;
}


