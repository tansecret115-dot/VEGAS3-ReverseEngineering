/* Module: rmbe3260.dll
   Function: FUN_660464d0
   Address: 660464d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_660464d0(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  
  if (*(int *)((int)param_1 + 0x52) != 0) {
    iVar5 = param_1[0x13] + param_1[3];
    if ((param_1[0x12] != 0) && (param_1[0xd] != 0)) {
      uVar3 = *(int *)((int)param_1 + 0x2a) * (uint)*(ushort *)((int)param_1 + 0x1a);
      puVar6 = (undefined4 *)param_1[2];
      for (uVar4 = (uVar3 & 0x7fffffff) >> 1; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      for (uVar3 = uVar3 * 2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar6 = 0;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      *(undefined2 *)param_1[2] = 1;
      if (*(short *)((int)param_1 + 0x1a) == 2) {
        *(undefined2 *)(param_1[2] + 2) = 1;
      }
      if ((uint)param_1[0x12] < *(uint *)((int)param_1 + 0x46b)) {
        do {
          _control87(0x8001f,0x8001f);
          FUN_6604b180((void *)*param_1,param_1[2],iVar5);
          iVar1 = param_1[0x12];
          param_1[0x12] = iVar1 + 1U;
          iVar2 = *(int *)((int)param_1 + 0x2e);
          iVar5 = iVar5 + iVar2;
          param_1[0x13] = param_1[0x13] + iVar2;
          param_1[0x11] = param_1[0x11] + iVar2;
        } while (iVar1 + 1U < *(uint *)((int)param_1 + 0x46b));
      }
      (**(code **)(*(int *)param_1[1] + 0x104))(param_1[3],*(undefined4 *)((int)param_1 + 0x47f));
      if (*(int *)((int)param_1 + 0x5e) != 0) {
        if (*(int *)((int)param_1 + 0x4a1) != 0) {
          *(double *)((int)param_1 + 0x48f) =
               *(double *)((int)param_1 + 0x497) + *(double *)((int)param_1 + 0x48f);
        }
        *(undefined2 *)((int)param_1 + 0x49f) = 0;
      }
    }
    (**(code **)(*(int *)param_1[1] + 0x70))(param_1[0x11]);
    if (*param_1 != 0) {
      FUN_6604b140(*param_1);
      FUN_6604af80(*param_1);
    }
    if ((param_1[7] != 0) && (*(void **)((int)param_1 + 0x4c1) != (void *)0x0)) {
      FUN_66059c60(*(void **)((int)param_1 + 0x4c1));
      *(undefined4 *)((int)param_1 + 0x4c1) = 0;
    }
    if (*(void **)((int)param_1 + 0x4c5) != (void *)0x0) {
      operator_delete(*(void **)((int)param_1 + 0x4c5));
      *(undefined4 *)((int)param_1 + 0x4c5) = 0;
    }
    return 0;
  }
  *(undefined4 *)((int)param_1 + 0x487) = 0x80040007;
  return 0x80040007;
}


