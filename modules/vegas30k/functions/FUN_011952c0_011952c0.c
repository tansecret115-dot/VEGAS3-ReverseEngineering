/* Module: vegas30k.dll
   Function: FUN_011952c0
   Address: 011952c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x01195574) */
/* WARNING: Removing unreachable block (ram,0x011956a7) */
/* WARNING: Removing unreachable block (ram,0x0119545d) */
/* WARNING: Removing unreachable block (ram,0x011955ef) */
/* WARNING: Removing unreachable block (ram,0x01195533) */
/* WARNING: Removing unreachable block (ram,0x011956ea) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_011952c0(int param_1,undefined4 *param_2)

{
  __int64 *p_Var1;
  uint uVar2;
  long lVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  _tag_looppoint *p_Var7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  int *piVar11;
  undefined4 uVar12;
  uint uStack_50;
  int iStack_4c;
  undefined8 local_48;
  _tag_looppoint a_Stack_40 [8];
  uint uStack_38;
  int iStack_34;
  uint uStack_28;
  int iStack_24;
  longlong *plStack_4;
  
  *param_2 = 0;
  param_2[1] = 0;
  piVar11 = *(int **)(param_1 + 0x638);
  if (piVar11 == (int *)0x0) {
    return 0x8000ffff;
  }
  (**(code **)(*piVar11 + 0x48))(piVar11,&local_48);
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  FUN_01198c40(uStack_50,iStack_4c);
  p_Var1 = *(__int64 **)(param_1 + 0x40);
  if (p_Var1 == (__int64 *)0x0) {
    local_48._0_4_ = uStack_50 - *(uint *)(param_1 + 0x6f8);
    local_48._4_4_ =
         (iStack_4c - *(int *)(param_1 + 0x6fc)) - (uint)(uStack_50 < *(uint *)(param_1 + 0x6f8));
    lVar8 = ftol();
    lVar8 = lVar8 + *(longlong *)(param_1 + 0x6f0);
  }
  else {
    local_48._0_4_ = uStack_50 - *(uint *)(param_1 + 0x6f8);
    local_48._4_4_ =
         (iStack_4c - *(int *)(param_1 + 0x6fc)) - (uint)(uStack_50 < *(uint *)(param_1 + 0x6f8));
    uVar9 = ftol();
    lVar8 = CONCAT44((*(int *)(param_1 + 0x6f4) - (int)((ulonglong)uVar9 >> 0x20)) -
                     (uint)(*(uint *)(param_1 + 0x6f0) < (uint)uVar9),
                     *(uint *)(param_1 + 0x6f0) - (uint)uVar9);
  }
  puVar6 = (undefined4 *)(param_1 + 0x728);
  p_Var7 = a_Stack_40;
  for (iVar5 = 0xe; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)p_Var7 = *puVar6;
    puVar6 = puVar6 + 1;
    p_Var7 = p_Var7 + 4;
  }
  if (p_Var1 == (__int64 *)0x0) {
    lVar3 = SFMixer_AdjustforLoop
                      (a_Stack_40,CONCAT44(&stack0xffffffa8,*(undefined4 *)(param_1 + 0x6f4)),
                       (__int64 *)0x0,(int)piVar11);
    if (lVar3 == 0) {
      *(uint *)(param_1 + 0x6f8) = uStack_50;
      *(uint *)(param_1 + 0x6f0) = uStack_38;
      *(int *)(param_1 + 0x6fc) = iStack_4c;
      *(int *)(param_1 + 0x6f4) = iStack_34;
      if (*(int *)(param_1 + 0x768) != 0) {
        *(int *)(param_1 + 0x768) = *(int *)(param_1 + 0x768) + -1;
      }
      if (lVar8 < CONCAT44(iStack_34,uStack_38)) {
        uVar9 = ftol();
        *(uint *)(param_1 + 0x6f8) = uStack_50 - (uint)uVar9;
        *(undefined4 *)(param_1 + 0x6f0) = 0;
        *(uint *)(param_1 + 0x6fc) =
             (iStack_4c - (int)((ulonglong)uVar9 >> 0x20)) - (uint)(uStack_50 < (uint)uVar9);
        *(undefined4 *)(param_1 + 0x6f4) = 0;
      }
      else if (*(double *)(param_1 + 0x50) != _DAT_011db3f0) {
        local_48 = lVar8 - CONCAT44(iStack_34,uStack_38);
        uVar9 = ftol();
        *(uint *)(param_1 + 0x6f8) = uStack_50 - (uint)uVar9;
        *(uint *)(param_1 + 0x6fc) =
             (iStack_4c - (int)((ulonglong)uVar9 >> 0x20)) - (uint)(uStack_50 < (uint)uVar9);
      }
      *(undefined4 *)(param_1 + 0x800) = *(undefined4 *)(param_1 + 0x6f8);
      *(undefined4 *)(param_1 + 0x808) = *(undefined4 *)(param_1 + 0x6f0);
      *(undefined4 *)(param_1 + 0x804) = *(undefined4 *)(param_1 + 0x6fc);
      *(undefined4 *)(param_1 + 0x80c) = *(undefined4 *)(param_1 + 0x6f4);
    }
    if (*(longlong *)(param_1 + 0x720) <= lVar8) {
      lVar8 = *(longlong *)(param_1 + 0x720);
    }
    if ((0xffffffff < lVar8) || (-1 < lVar8)) goto LAB_01195521;
    uVar4 = 0;
    uVar12 = 0;
  }
  else {
    lVar3 = SFMixer_AdjustforLoop
                      (a_Stack_40,CONCAT44(&stack0xffffffa8,*(undefined4 *)(param_1 + 0x6f4)),p_Var1
                       ,(int)piVar11);
    if (lVar3 == 0) {
      *(uint *)(param_1 + 0x6f0) = uStack_28 + uStack_38;
      *(uint *)(param_1 + 0x6f8) = uStack_50;
      *(uint *)(param_1 + 0x6f4) = iStack_24 + iStack_34 + (uint)CARRY4(uStack_28,uStack_38);
      *(int *)(param_1 + 0x6fc) = iStack_4c;
      if (*(int *)(param_1 + 0x768) != 0) {
        *(int *)(param_1 + 0x768) = *(int *)(param_1 + 0x768) + -1;
      }
      uVar2 = *(uint *)(param_1 + 0x6f0);
      if (*(longlong *)(param_1 + 0x6f0) < lVar8) {
        lVar10 = ftol();
        *(longlong *)(param_1 + 0x6f8) = lVar10 + CONCAT44(iStack_4c,uStack_50);
        *(undefined4 *)(param_1 + 0x530) = 0;
        *(undefined4 *)(param_1 + 0x534) = 0;
      }
      else if (*(double *)(param_1 + 0x50) != _DAT_011db3f0) {
        local_48._0_4_ = uVar2 - (uint)lVar8;
        local_48._4_4_ =
             (*(int *)(param_1 + 0x6f4) - (int)((ulonglong)lVar8 >> 0x20)) -
             (uint)(uVar2 < (uint)lVar8);
        uVar9 = ftol();
        *(uint *)(param_1 + 0x6f8) = uStack_50 - (uint)uVar9;
        *(uint *)(param_1 + 0x6fc) =
             (iStack_4c - (int)((ulonglong)uVar9 >> 0x20)) - (uint)(uStack_50 < (uint)uVar9);
      }
      *(undefined4 *)(param_1 + 0x808) = *(undefined4 *)(param_1 + 0x6f0);
      *(undefined4 *)(param_1 + 0x800) = *(undefined4 *)(param_1 + 0x6f8);
      *(undefined4 *)(param_1 + 0x804) = *(undefined4 *)(param_1 + 0x6fc);
      *(undefined4 *)(param_1 + 0x80c) = *(undefined4 *)(param_1 + 0x6f4);
    }
    local_48 = CONCAT44(local_48._4_4_,(int)local_48);
    if ((lVar8 < 0x100000000) && (local_48 = CONCAT44(local_48._4_4_,(int)local_48), lVar8 < 0)) {
      lVar8 = 0;
      local_48 = CONCAT44(local_48._4_4_,(int)local_48);
    }
LAB_01195521:
    uVar4 = *(undefined4 *)(param_1 + 0x724);
    uVar12 = *(undefined4 *)(param_1 + 0x720);
    if (lVar8 <= *(longlong *)(param_1 + 0x720)) goto LAB_01195541;
  }
  lVar8 = CONCAT44(uVar4,uVar12);
LAB_01195541:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  lVar10 = lVar8;
  if (((*(int *)(param_1 + 0x40) == 0) &&
      (lVar10 = *(longlong *)(param_1 + 0x6f0), *(longlong *)(param_1 + 0x6f0) <= lVar8)) &&
     (lVar10 = lVar8, *(longlong *)(param_1 + 0x720) < lVar8)) {
    lVar10 = *(longlong *)(param_1 + 0x720);
  }
  *plStack_4 = lVar10;
  return 1;
}


