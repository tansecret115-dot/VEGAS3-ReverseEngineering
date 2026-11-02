/* Module: vegas30k.dll
   Function: FUN_01185430
   Address: 01185430
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_01185430(int param_1)

{
  uint *puVar1;
  double *pdVar2;
  uint *puVar3;
  __int64 *p_Var4;
  uint uVar5;
  double dVar6;
  int iVar7;
  int unaff_EBP;
  undefined8 uVar8;
  ulonglong local_8;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  if ((*(int *)(param_1 + 0x80) != 0) && (*(int *)(param_1 + 0x84) == 0)) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x674));
    p_Var4 = *(__int64 **)(param_1 + 0x48);
    puVar1 = (uint *)(param_1 + 0x78);
    if (p_Var4 == (__int64 *)0x0) {
      uVar8 = ftol();
      uVar5 = *puVar1;
      *puVar1 = uVar5 + (uint)uVar8;
      iVar7 = *(int *)(param_1 + 0x7c) + (int)((ulonglong)uVar8 >> 0x20) +
              (uint)CARRY4(uVar5,(uint)uVar8);
    }
    else {
      uVar8 = ftol();
      uVar5 = *puVar1;
      *puVar1 = uVar5 - (uint)uVar8;
      iVar7 = (*(int *)(param_1 + 0x7c) - (int)((ulonglong)uVar8 >> 0x20)) -
              (uint)(uVar5 < (uint)uVar8);
    }
    *(int *)(param_1 + 0x7c) = iVar7;
    SFMixer_AdjustforLoop
              ((_tag_looppoint *)(param_1 + 0x588),CONCAT44(puVar1,*(undefined4 *)(param_1 + 0x534))
               ,p_Var4,unaff_EBP);
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0x8a8);
    *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x8ac);
    if ((*(int *)(param_1 + 0x6a4) != 0) && ((*(uint *)(param_1 + 0x20) & 0x200) != 0)) {
      p_Var4 = *(__int64 **)(param_1 + 0x48);
      puVar3 = (uint *)(param_1 + 0x808);
      if (p_Var4 == (__int64 *)0x0) {
        uVar8 = ftol();
        uVar5 = *puVar3;
        *puVar3 = uVar5 + (uint)uVar8;
        iVar7 = *(int *)(param_1 + 0x80c) + (int)((ulonglong)uVar8 >> 0x20) +
                (uint)CARRY4(uVar5,(uint)uVar8);
      }
      else {
        uVar8 = ftol();
        uVar5 = *puVar3;
        *puVar3 = uVar5 - (uint)uVar8;
        iVar7 = (*(int *)(param_1 + 0x80c) - (int)((ulonglong)uVar8 >> 0x20)) -
                (uint)(uVar5 < (uint)uVar8);
      }
      *(int *)(param_1 + 0x80c) = iVar7;
      SFMixer_AdjustforLoop
                ((_tag_looppoint *)(param_1 + 0x728),
                 CONCAT44(puVar3,*(undefined4 *)(param_1 + 0x6f4)),p_Var4,unaff_EBP);
      *(undefined4 *)(param_1 + 0x800) = *(undefined4 *)(param_1 + 0x8a8);
      *(undefined4 *)(param_1 + 0x804) = *(undefined4 *)(param_1 + 0x8ac);
    }
    pdVar2 = (double *)(param_1 + 0x58);
    FUN_01198950(pdVar2,(int *)(param_1 + 0x44));
    if (*(double *)(param_1 + 0x60) != *pdVar2) {
      dVar6 = *pdVar2 - *(double *)(param_1 + 0x60);
      if (*(uint *)(param_1 + 0x68) != 0) {
        local_8 = (ulonglong)*(uint *)(param_1 + 0x68);
        dVar6 = dVar6 / (double)local_8;
      }
      dVar6 = dVar6 + *(double *)(param_1 + 0x60);
      *(double *)(param_1 + 0x60) = dVar6;
      if (dVar6 == *pdVar2) {
        *(undefined4 *)(param_1 + 0x80) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x80) = 1;
      }
    }
    iVar7 = *(int *)(param_1 + 0x44);
    if (iVar7 != *(int *)(param_1 + 0x48)) {
      *(undefined4 *)(param_1 + 0x8b4) = 0;
      *(int *)(param_1 + 0x48) = iVar7;
      *(undefined4 *)(param_1 + 0x80) = 0;
      if (iVar7 == 0) {
        *(undefined4 *)(param_1 + 0x848) = 0;
        *(undefined4 *)(param_1 + 0x850) = 0;
        *(undefined4 *)(param_1 + 0x84c) = 0;
        *(undefined4 *)(param_1 + 0x854) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x850) = *(undefined4 *)(param_1 + 0x840);
        *(undefined4 *)(param_1 + 0x848) = *(undefined4 *)(param_1 + 0x840);
        *(undefined4 *)(param_1 + 0x854) = *(undefined4 *)(param_1 + 0x844);
        *(undefined4 *)(param_1 + 0x84c) = *(undefined4 *)(param_1 + 0x844);
      }
      *(uint *)(param_1 + 0x8a0) = *puVar1;
      *(undefined4 *)(param_1 + 0x8a4) = *(undefined4 *)(param_1 + 0x7c);
      *(undefined4 *)(param_1 + 0x858) = 0;
      *(undefined4 *)(param_1 + 0x85c) = 0;
      if ((*(int *)(param_1 + 0x6a4) != 0) && ((*(uint *)(param_1 + 0x20) & 0x200) != 0)) {
        *(undefined4 *)(param_1 + 0x700) = *(undefined4 *)(param_1 + 0x808);
        *(undefined4 *)(param_1 + 0x704) = *(undefined4 *)(param_1 + 0x80c);
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x674));
    *(undefined4 *)(param_1 + 0x84) = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return;
}


