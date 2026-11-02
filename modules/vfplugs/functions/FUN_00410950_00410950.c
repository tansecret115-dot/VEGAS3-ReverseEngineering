/* Module: vfplugs.dll
   Function: FUN_00410950
   Address: 00410950
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_00410950(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_bc;
  tagRECT local_b8;
  int local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  RECT local_84;
  RECT local_74;
  RECT local_64;
  int local_54 [4];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_34;
  uint local_2c;
  
  iVar1 = 0;
  if (((*(HGDIOBJ *)(param_1 + 0x14c) != (HGDIOBJ)0x0) && (*(int *)(param_1 + 0x188) != 0)) &&
     (*(int *)(param_1 + 0x1c4) != 0)) {
    iVar7 = 0;
    piVar5 = (int *)(param_1 + 0x540);
    iVar1 = 7;
    do {
      if (*piVar5 != 0) {
        iVar7 = iVar7 + 1;
      }
      piVar5 = piVar5 + 0x15;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    if (iVar7 != 0) {
      local_94 = 0x3f800000;
      local_90 = 0x3f800000;
      local_8c = 0x3f800000;
      local_88 = 0x3f800000;
      local_a4 = 0;
      local_a0 = 0;
      local_9c = 0;
      local_98 = 0;
      FUN_00441460((int *)(param_1 + 0x150),*(int **)(param_1 + 0x17c),(int *)0x0,0,
                   *(float *)(param_1 + 0x520) * *(float *)(param_1 + 0x524),
                   *(float *)(param_1 + 0x51c) * *(float *)(param_1 + 0x524),
                   *(float *)(param_1 + 0x518) * *(float *)(param_1 + 0x524),
                   *(undefined4 *)(param_1 + 0x524),3);
      SelectObject(*(HDC *)(param_1 + 0x184),*(HGDIOBJ *)(param_1 + 0x188));
      FUN_0040c5e0(*(int **)(param_1 + 0x1b8),(int *)(param_1 + 0x18c),*(short **)(param_1 + 0x790),
                   *(int *)(param_1 + 0x78c),(LOGFONTA *)(param_1 + 0x4d4),*(int *)(param_1 + 0x510)
                   ,*(int *)(param_1 + 0x514));
      local_84.right = *(LONG *)(param_1 + 0x154);
      local_84.bottom = *(int *)(param_1 + 0x158);
      uVar2 = (uint)*(ushort *)(param_1 + 0x15e) * *(int *)(param_1 + 0x154) + 0x1f;
      local_64.right = *(int *)(param_1 + 0x1cc);
      local_74.right = *(LONG *)(param_1 + 400);
      local_74.bottom = *(LONG *)(param_1 + 0x194);
      uVar3 = (uint)*(ushort *)(param_1 + 0x19a) * *(int *)(param_1 + 400) + 0x1f;
      local_84.left = 0;
      local_84.top = 0;
      local_74.left = 0;
      local_64.bottom = *(LONG *)(param_1 + 0x1d0);
      uVar4 = (uint)*(ushort *)(param_1 + 0x1d6) * local_64.right + 0x1f;
      local_74.top = 0;
      local_64.left = 0;
      local_64.top = 0;
      local_a8 = (int)((uVar4 & 0xffffffe0) + ((int)uVar4 >> 0x1f & 7U)) >> 3;
      iVar7 = (int)((uVar2 & 0xffffffe0) + ((int)uVar2 >> 0x1f & 7U)) >> 3;
      iVar8 = (int)((uVar3 & 0xffffffe0) + ((int)uVar3 >> 0x1f & 7U)) >> 3;
      InflateRect(&local_b8,2,2);
      IntersectRect(&local_b8,&local_b8,&local_74);
      local_bc = 0;
      iVar1 = (local_84.bottom - local_b8.top) - local_84.top;
      local_b8.top = (local_84.bottom - local_84.top) - local_b8.bottom;
      piVar5 = (int *)(param_1 + 0x540);
      local_b8.bottom = iVar1;
      do {
        if (*piVar5 != 0) {
          FUN_00441460((int *)(param_1 + 0x1c8),*(int **)(param_1 + 500),(int *)0x0,0,0,0,0,0,3);
          FUN_0040fb70(*(int *)(param_1 + 0x17c),&local_84,iVar7,local_b8.left,local_b8.top,
                       local_b8.right,local_b8.bottom,*(int *)(param_1 + 0x1b8),&local_74,iVar8,
                       local_b8.left,local_b8.top,local_b8.right,local_b8.bottom,
                       *(int *)(param_1 + 500),&local_64,local_a8,local_b8.left,local_b8.top,
                       local_b8.right,local_b8.bottom,4,local_bc,piVar5);
          iVar1 = local_b8.bottom;
        }
        local_bc = local_bc + 1;
        piVar5 = piVar5 + 0x15;
      } while (local_bc < 7);
      piVar5 = local_54;
      for (iVar6 = 0x15; iVar6 != 0; iVar6 = iVar6 + -1) {
        *piVar5 = 0;
        piVar5 = piVar5 + 1;
      }
      local_2c = local_2c | 4;
      local_54[3] = *(undefined4 *)(param_1 + 0x528);
      local_54[0] = 1;
      local_44 = *(undefined4 *)(param_1 + 0x52c);
      local_34 = 0x3f800000;
      local_40 = *(undefined4 *)(param_1 + 0x530);
      local_3c = *(undefined4 *)(param_1 + 0x534);
      iVar1 = FUN_0040fb70(*(int *)(param_1 + 0x17c),&local_84,iVar7,local_b8.left,local_b8.top,
                           local_b8.right,iVar1,*(int *)(param_1 + 0x1b8),&local_74,iVar8,
                           local_b8.left,local_b8.top,local_b8.right,iVar1,*(int *)(param_1 + 500),
                           &local_64,local_a8,local_b8.left,local_b8.top,local_b8.right,iVar1,4,7,
                           local_54);
      return iVar1;
    }
    SelectObject(*(HDC *)(param_1 + 0x148),*(HGDIOBJ *)(param_1 + 0x14c));
    iVar1 = FUN_0040c5e0(*(int **)(param_1 + 0x17c),(int *)(param_1 + 0x150),
                         *(short **)(param_1 + 0x790),*(int *)(param_1 + 0x78c),
                         (LOGFONTA *)(param_1 + 0x4d4),*(int *)(param_1 + 0x510),
                         *(int *)(param_1 + 0x514));
  }
  return iVar1;
}


