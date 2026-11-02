/* Module: erv23260.dll
   Function: FUN_63805740
   Address: 63805740
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x63805834) */

undefined4 * __thiscall FUN_63805740(void *this,int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  
  FUN_637f22e0(this,param_1,param_2);
  *(undefined ***)((int)this + 100) = &PTR_LAB_6382d9c8;
  *(undefined ***)((int)this + 0x68) = &PTR_LAB_6382d9b8;
  *(undefined ***)((int)this + 0x6c) = &PTR_LAB_6382d9a8;
  *(undefined ***)((int)this + 0x70) = &PTR_LAB_6382d990;
  *(undefined ***)((int)this + 0x74) = &PTR_LAB_6382d978;
  *(undefined4 *)((int)this + 0x78) = 1;
  *(undefined4 *)((int)this + 0x7c) = 0;
  FUN_63808d80((undefined4 *)((int)this + 0x84));
  *(undefined4 *)((int)this + 0x804) = 0;
  FUN_63807430((uint *)((int)this + 0x808));
  *(undefined4 *)((int)this + 0x8a4) = 0;
  *(uint *)((int)this + 0x808) = (uint)(param_1 == 0x14);
  *(undefined4 *)((int)this + 0x8a8) = 0;
  *(undefined4 *)((int)this + 0x8ac) = 0;
  *(undefined4 *)((int)this + 0x8b0) = 0;
  *(undefined4 *)((int)this + 0x8b4) = 0;
  *(undefined4 *)((int)this + 0x8b8) = 0;
  *(undefined4 *)((int)this + 0x8c4) = 0;
  *(undefined4 *)((int)this + 0x8cc) = 0;
  *(undefined4 *)((int)this + 0x8d0) = 0;
  *(undefined ***)this = &PTR_FUN_6382d918;
  *(undefined ***)((int)this + 100) = &PTR_FUN_6382d8f0;
  *(undefined ***)((int)this + 0x68) = &PTR_LAB_6382d8e0;
  *(undefined ***)((int)this + 0x6c) = &PTR_FUN_6382d8d0;
  *(undefined ***)((int)this + 0x70) = &PTR_FUN_6382d8b8;
  *(undefined ***)((int)this + 0x74) = &PTR_LAB_6382d8a0;
  *(void **)((int)this + 0x644) = this;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0x8a0) = 0;
  *(undefined4 *)((int)this + 0x800) = 1;
  *(undefined4 *)((int)this + 0x80) = 1;
  iVar2 = *(int *)((int)this + 4);
  if ((*(char *)(iVar2 + 0x1c) == '\0') || (*(char *)(iVar2 + 0x18) == '\0')) {
    *(uint *)((int)this + 0x78) = -(uint)(*(char *)(iVar2 + 0x18) != '\0') & 3;
  }
  else {
    *(undefined4 *)((int)this + 0x78) = 3;
  }
  FUN_63806080((int)this);
  iVar2 = FUN_6380b040((undefined4 *)((int)this + 0x648),*(int *)((int)this + 0x78));
  *param_3 = iVar2;
  if (iVar2 == 0) {
    (**(code **)(**(int **)((int)this + 0x648) + 0x40))((int)this + 0x788);
  }
  if (*param_3 == 0) {
    pvVar3 = (void *)FUN_637f2000(0x598);
    if (pvVar3 == (void *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      iVar2 = *(int *)((int)this + 0x78);
      if (iVar2 == 0) {
        iVar2 = 1;
      }
      piVar4 = FUN_637f2cc0(pvVar3,1,iVar2,*(int *)((int)this + 8),*(undefined4 *)((int)this + 4),
                            param_3);
    }
    if (piVar4 != (int *)0x0) {
      if (*param_3 != 0) {
        (**(code **)*piVar4)(1);
        return this;
      }
      *(int **)((int)this + 0x8a8) = piVar4;
      if ((*(int *)(*(int *)((int)this + 4) + 8) == 1) &&
         (*(int *)(*(int *)((int)this + 4) + 0xc) < 4)) {
        *param_3 = 9;
        return this;
      }
      pvVar3 = (void *)FUN_637f2000(0xf8);
      if (pvVar3 == (void *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        iVar2 = *(int *)((int)this + 4);
        iVar1 = *(int *)(iVar2 + 8);
        if (((iVar1 == 1) && (*(char *)(iVar2 + 0x18) != '\0')) && (*(char *)(iVar2 + 0x1c) == '\0')
           ) {
          uVar5 = 1;
        }
        else {
          uVar5 = 0;
        }
        if ((iVar1 == 1) && (*(char *)(iVar2 + 0x1c) != '\0')) {
          uVar7 = 1;
        }
        else {
          uVar7 = 0;
        }
        if ((iVar1 == 1) && (*(char *)(iVar2 + 0x18) != '\0')) {
          puVar6 = FUN_63804e50(pvVar3,1,uVar7,uVar5);
        }
        else {
          puVar6 = FUN_63804e50(pvVar3,0,uVar7,uVar5);
        }
      }
      *(undefined4 **)((int)this + 0x8d0) = puVar6;
      if (puVar6 != (undefined4 *)0x0) {
        return this;
      }
    }
    *param_3 = 2;
  }
  return this;
}


