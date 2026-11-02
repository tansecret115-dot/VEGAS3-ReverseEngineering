/* Module: sfppack1.dll
   Function: FUN_5cdb85e0
   Address: 5cdb85e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_5cdb85e0(void *this,undefined4 param_1,int *param_2,undefined4 param_3,undefined4 *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  uVar4 = (uint)*(ushort *)(*(int *)((int)this + 0x60) + 2);
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xf0) = 0;
  if (((*param_2 == 0) && (*(int *)((int)this + 0xe4) == 0)) && (*(int *)((int)this + 0x100) != 0))
  {
    *param_4 = 0;
    return 1;
  }
  do {
    if (*(int *)((int)this + 0xe4) == 1) {
      (**(code **)((int)this + 0x10c))(param_3,param_4);
      if (*(int *)((int)this + 0xf4) != *(int *)((int)this + 0xf8)) {
LAB_5cdb88b3:
        *param_2 = *(int *)((int)this + 0xe8);
        *param_4 = *(undefined4 *)((int)this + 0xf0);
        return 0;
      }
      *(undefined4 *)((int)this + 0xf4) = 0;
      if (*(int *)((int)this + 0x70) == 0) {
        *(undefined4 *)((int)this + 0xec) = *(undefined4 *)((int)this + 0xfc);
      }
      *(undefined4 *)((int)this + 0xe4) = 0;
      puVar5 = *(undefined4 **)((int)this + 0xc4) + *(int *)((int)this + 0xb0) * uVar4 * 2;
      puVar6 = *(undefined4 **)((int)this + 0xc4);
      for (iVar2 = ((*(int *)((int)this + 0xa8) - *(int *)((int)this + 0xb0)) * uVar4 & 0x1fffffff)
                   << 1; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      puVar5 = *(undefined4 **)((int)this + 200) + *(int *)((int)this + 0xac) * uVar4 * 2;
      puVar6 = *(undefined4 **)((int)this + 200);
      for (iVar2 = (*(int *)((int)this + 0xb4) * uVar4 & 0x1fffffff) << 1; iVar2 != 0;
          iVar2 = iVar2 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      puVar5 = (undefined4 *)(*(int *)((int)this + 200) + *(int *)((int)this + 0xb4) * uVar4 * 8);
      for (iVar2 = ((*(int *)((int)this + 0xa8) - *(int *)((int)this + 0xb4)) * uVar4 & 0x1fffffff)
                   << 1; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(undefined1 *)puVar5 = 0;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
    }
    (**(code **)((int)this + 0x108))(param_1,param_2);
    if (*(int *)((int)this + 0x70) != 0) {
      iVar2 = *(int *)((int)this + 0xec);
      if (iVar2 < *(int *)((int)this + 0xac)) {
        if ((*(int *)((int)this + 0x100) != 0) ||
           (*(undefined4 *)((int)this + 0x100) = 1, iVar2 < 1)) goto LAB_5cdb88b3;
        puVar5 = (undefined4 *)(*(int *)((int)this + 0xc4) + iVar2 * uVar4 * 8);
        for (iVar3 = ((*(int *)((int)this + 0xa8) - iVar2) * uVar4 & 0x1fffffff) << 1; iVar3 != 0;
            iVar3 = iVar3 + -1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
        for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
          *(undefined1 *)puVar5 = 0;
          puVar5 = (undefined4 *)((int)puVar5 + 1);
        }
        iVar2 = *(int *)((int)this + 0xec);
        iVar3 = ftol();
        *(int *)((int)this + 0xf8) = iVar3;
        if (iVar3 < 0) {
          iVar3 = 0;
        }
        else if (*(int *)((int)this + 0xa8) < iVar3) {
          iVar3 = *(int *)((int)this + 0xa8);
        }
        *(int *)((int)this + 0xf8) = iVar3;
      }
      *(int *)((int)this + 0xec) = iVar2 - *(int *)((int)this + 0xb0);
    }
    if ((*(int *)((int)this + 0xec) != *(int *)((int)this + 0xa8)) &&
       (*(int *)((int)this + 0x70) == 0)) goto LAB_5cdb88b3;
    if (uVar4 < 2) {
      uVar1 = FUN_5cdb7fc0(this,*(int *)((int)this + 0xc4),*(double **)((int)this + 200),
                           *(undefined4 *)((int)this + 0xcc),
                           (uint)*(ushort *)(*(int *)((int)this + 0x60) + 2),
                           *(undefined4 *)((int)this + 0xb4),*(uint *)((int)this + 0xd0),
                           *(uint *)((int)this + 0xd4));
      FUN_5cdb80b0(this,*(int *)((int)this + 0xc4),*(double **)((int)this + 200),
                   *(int *)((int)this + 0xcc),uVar1);
      *(undefined4 *)((int)this + 0xe4) = 1;
    }
    else {
      uVar1 = FUN_5cdb7e40(this,*(double **)((int)this + 0xc4),*(double **)((int)this + 200),
                           *(undefined4 *)((int)this + 0xcc),
                           (uint)*(ushort *)(*(int *)((int)this + 0x60) + 2),
                           *(undefined4 *)((int)this + 0xb4),*(int *)((int)this + 0xd0),
                           *(uint *)((int)this + 0xd4));
      FUN_5cdb8190(this,*(int *)((int)this + 0xc4),*(double **)((int)this + 200),
                   *(double **)((int)this + 0xcc),uVar1);
      *(undefined4 *)((int)this + 0xe4) = 1;
    }
  } while( true );
}


