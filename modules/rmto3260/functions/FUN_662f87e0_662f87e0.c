/* Module: rmto3260.dll
   Function: FUN_662f87e0
   Address: 662f87e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_662f87e0(void *this,short *param_1,int param_2,undefined4 *param_3,uint *param_4,int *param_5,
            int *param_6)

{
  int *piVar1;
  bool bVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint local_c [2];
  
  iVar5 = param_2;
  if (*(int *)((int)this + 0x52) == 0) {
    return 0x80040007;
  }
  if (*(int *)((int)this + 0x4f1) != 0) {
    return 0x80004005;
  }
  if ((param_2 != 0) && (param_2 != *(int *)((int)this + 0x4b5))) {
    return 0x80004005;
  }
  param_2 = 0;
  *param_4 = 0;
  *param_6 = 0;
  if (*(int *)((int)this + 0x4e9) == 0) {
    uVar7 = *(uint *)((int)this + 0x4c);
    puVar8 = (undefined4 *)((int)*(undefined4 **)((int)this + 0xc) + uVar7);
    if (iVar5 == 0) {
      if (*(int *)((int)this + 0x34) == 0) {
        if (uVar7 == 0) {
          FUN_662f8c70(this);
          goto LAB_662f8bd8;
        }
        puVar8 = *(undefined4 **)((int)this + 0xc);
        for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *param_3 = *puVar8;
          puVar8 = puVar8 + 1;
          param_3 = param_3 + 1;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined1 *)param_3 = *(undefined1 *)puVar8;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
          param_3 = (undefined4 *)((int)param_3 + 1);
        }
        *param_4 = *(uint *)((int)this + 0x4c);
        *(undefined4 *)((int)this + 0x4c) = 0;
      }
      else if ((*(short *)((int)this + 0x49f) == -1) ||
              (uVar3 = (**(code **)(**(int **)((int)this + 4) + 0xac))(),
              (short)(*(uint *)((int)this + 0x46f) / (uint)uVar3) <= *(short *)((int)this + 0x49f)))
      {
        FUN_662f8c70(this);
        *(undefined4 *)((int)this + 0x4e9) = 1;
        param_2 = FUN_662f7bd0(this,param_3,param_4,local_c);
      }
      else {
        piVar1 = *(int **)((int)this + 4);
        uVar3 = (**(code **)(*piVar1 + 0xac))();
        uVar4 = (**(code **)(*piVar1 + 0xac))();
        puVar8 = (undefined4 *)
                 ((uint)uVar4 * (int)*(short *)((int)this + 0x49f) + *(int *)((int)this + 0x47f));
        for (uVar7 = (uint)(uVar3 >> 2); uVar7 != 0; uVar7 = uVar7 - 1) {
          *param_3 = *puVar8;
          puVar8 = puVar8 + 1;
          param_3 = param_3 + 1;
        }
        for (uVar7 = uVar3 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined1 *)param_3 = *(undefined1 *)puVar8;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
          param_3 = (undefined4 *)((int)param_3 + 1);
        }
        uVar7 = (**(code **)(**(int **)((int)this + 4) + 0xac))();
        *param_4 = uVar7 & 0xffff;
        *(short *)((int)this + 0x49f) = *(short *)((int)this + 0x49f) + 1;
      }
    }
    else {
      if (*(uint *)((int)this + 0x4dd) % *(uint *)((int)this + 0x4f9) == 0) {
        FUN_662ed8a0((void *)((int)this + 0x4c9),*param_5);
      }
      *(int *)((int)this + 0x4dd) = *(int *)((int)this + 0x4dd) + 1;
      if (*(int *)((int)this + 0x1c) == 0) {
        *(undefined4 *)((int)this + 0x4b9) = *(undefined4 *)((int)this + 0x2a);
      }
      else {
        FUN_662fd1c0(param_1,*(uint *)((int)this + 0x4b9),*(undefined4 **)((int)this + 0x4c5),
                     *(int **)((int)this + 0x4c1));
        iVar5 = FUN_662fda20(*(int *)((int)this + 0x2a),*(int *)((int)this + 0x4c1));
        param_1 = *(short **)((int)this + 0x4c5);
        *(int *)((int)this + 0x4b9) = iVar5;
      }
      iVar5 = (uint)*(ushort *)((int)this + 0x14) * *(int *)((int)this + 0x4b9) * 2;
      *(int *)((int)this + 0x4b5) = iVar5;
      *param_6 = iVar5;
      FUN_662fec60(*(void **)this,param_1,puVar8);
      iVar5 = *(int *)((int)this + 0x48) + 1;
      *(int *)((int)this + 0x48) = iVar5;
      if (*(int *)((int)this + 0x62) != 0) {
        uVar7 = *(uint *)((int)this + 0x2e);
        for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *param_3 = *puVar8;
          puVar8 = puVar8 + 1;
          param_3 = param_3 + 1;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined1 *)param_3 = *(undefined1 *)puVar8;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
          param_3 = (undefined4 *)((int)param_3 + 1);
        }
        *param_4 = *(uint *)((int)this + 0x2e);
        iVar5 = ftol();
        *param_5 = iVar5;
        return 0;
      }
      uVar7 = *(int *)((int)this + 0x4c) + *(int *)((int)this + 0x2e);
      *(uint *)((int)this + 0x4c) = uVar7;
      *(int *)((int)this + 0x44) = *(int *)((int)this + 0x44) + *(int *)((int)this + 0x2e);
      if (*(int *)((int)this + 0x34) == 0) {
        if (iVar5 == *(int *)((int)this + 0x46b)) {
          puVar8 = *(undefined4 **)((int)this + 0xc);
          for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *param_3 = *puVar8;
            puVar8 = puVar8 + 1;
            param_3 = param_3 + 1;
          }
          for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined1 *)param_3 = *(undefined1 *)puVar8;
            puVar8 = (undefined4 *)((int)puVar8 + 1);
            param_3 = (undefined4 *)((int)param_3 + 1);
          }
          *param_4 = *(uint *)((int)this + 0x4c);
          *(undefined4 *)((int)this + 0x4c) = 0;
          *(undefined4 *)((int)this + 0x48) = 0;
        }
      }
      else {
        if (iVar5 == *(int *)((int)this + 0x46b)) {
          *(undefined4 *)((int)this + 0x4a1) = 1;
          param_2 = (**(code **)(**(int **)((int)this + 4) + 0x104))
                              (*(undefined4 *)((int)this + 0xc),*(undefined4 *)((int)this + 0x47f));
          *(undefined4 *)((int)this + 0x4c) = 0;
          *(undefined4 *)((int)this + 0x48) = 0;
          *(undefined2 *)((int)this + 0x49f) = 0;
        }
        bVar2 = false;
        if (((*(int *)((int)this + 0x5e) != 0) && (*(short *)((int)this + 0x49f) != -1)) &&
           (uVar3 = (**(code **)(**(int **)((int)this + 4) + 0xac))(),
           *(uint *)((int)this + 0x4c) % (uint)uVar3 == 0)) {
          if (*(int *)((int)this + 0x62) == 0) {
            piVar1 = *(int **)((int)this + 4);
            uVar3 = (**(code **)(*piVar1 + 0xac))();
            uVar4 = (**(code **)(*piVar1 + 0xac))();
            puVar8 = (undefined4 *)
                     ((uint)uVar4 * (int)*(short *)((int)this + 0x49f) + *(int *)((int)this + 0x47f)
                     );
            for (uVar7 = (uint)(uVar3 >> 2); uVar7 != 0; uVar7 = uVar7 - 1) {
              *param_3 = *puVar8;
              puVar8 = puVar8 + 1;
              param_3 = param_3 + 1;
            }
            for (uVar7 = uVar3 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
              *(undefined1 *)param_3 = *(undefined1 *)puVar8;
              puVar8 = (undefined4 *)((int)puVar8 + 1);
              param_3 = (undefined4 *)((int)param_3 + 1);
            }
            uVar7 = (**(code **)(**(int **)((int)this + 4) + 0xac))();
            *param_4 = uVar7 & 0xffff;
          }
          bVar2 = true;
        }
        if (bVar2) {
          *(short *)((int)this + 0x49f) = *(short *)((int)this + 0x49f) + 1;
        }
      }
    }
  }
  else {
    param_2 = FUN_662f7bd0(this,param_3,param_4,local_c);
    if (*param_4 == 0) {
LAB_662f8bd8:
      *(undefined4 *)((int)this + 0x4f1) = 1;
    }
  }
  if (*param_4 == 0) {
    return param_2;
  }
  local_c[0] = *(uint *)((int)this + 0x4e1) % *(uint *)((int)this + 0x4ed);
  if ((*(int *)((int)this + 0x34) == 0) || (local_c[0] == 0)) {
    iVar5 = FUN_662ed7e0((int *)((int)this + 0x4c9));
    *(int *)((int)this + 0x4e5) = iVar5;
  }
  else {
    if (*(int *)((int)this + 0x4fd) == 0) {
      *param_5 = *(int *)((int)this + 0x4e5);
      goto LAB_662f8c56;
    }
    local_c[1] = 0;
    iVar5 = ftol();
    iVar5 = iVar5 + *(int *)((int)this + 0x4e5);
  }
  *param_5 = iVar5;
LAB_662f8c56:
  *(int *)((int)this + 0x4e1) = *(int *)((int)this + 0x4e1) + 1;
  return param_2;
}


