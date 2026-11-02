/* Module: vegas30.exe
   Function: FUN_00547560
   Address: 00547560
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00547560(int param_1,double *param_2)

{
  double dVar1;
  longlong lVar2;
  double dVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  undefined4 local_10;
  undefined4 uStack_c;
  
  if (param_2 != (double *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1e0));
    if (*(int *)(param_1 + 0x44) == 0) {
      local_10 = *(undefined4 *)(param_1 + 0x200);
      uStack_c = *(undefined4 *)(param_1 + 0x204);
    }
    else {
      local_10 = *(undefined4 *)(param_1 + 0x50);
      uStack_c = *(undefined4 *)(param_1 + 0x54);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1e0));
    if (*(int *)(param_1 + 0x14) == 1) {
      WaitForSingleObject(*(HANDLE *)(param_1 + 0xa8),0xffffffff);
      uVar7 = *(uint *)(param_1 + 0xc4);
      if (uVar7 == 0) {
        *(undefined4 *)(param_2 + 1) = local_10;
        *(undefined4 *)((int)param_2 + 0xc) = uStack_c;
      }
      else {
        uVar5 = 0;
        iVar6 = 0;
        if (0x1f < uVar7) {
          uVar7 = 0x20;
        }
        if (uVar7 != 0) {
          puVar4 = (uint *)(param_1 + 200);
          uVar8 = uVar7;
          do {
            bVar9 = CARRY4(uVar5,*puVar4);
            uVar5 = uVar5 + *puVar4;
            iVar6 = iVar6 + puVar4[1] + (uint)bVar9;
            puVar4 = puVar4 + 2;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        if (uVar7 == 0) {
          *(undefined4 *)(param_2 + 1) = local_10;
          *(undefined4 *)((int)param_2 + 0xc) = uStack_c;
        }
        else {
          lVar2 = __alldiv(uVar5,iVar6,uVar7,0);
          dVar3 = _DAT_00613618;
          dVar1 = (double)lVar2 * _DAT_006106c8;
          param_2[1] = dVar1;
          if (dVar1 <= dVar3) {
            *(undefined4 *)(param_2 + 1) = local_10;
            *(undefined4 *)((int)param_2 + 0xc) = uStack_c;
          }
          else {
            param_2[1] = _DAT_006106d0 / dVar1;
          }
        }
      }
      ReleaseMutex(*(HANDLE *)(param_1 + 0xa8));
    }
    else {
      param_2[1] = (double)CONCAT44(uStack_c,local_10);
    }
    dVar1 = (double)CONCAT44(uStack_c,local_10);
    if (dVar1 < param_2[1] + _DAT_006129c0) {
      param_2[1] = dVar1;
    }
    *param_2 = dVar1;
    return 0;
  }
  return 0x80004003;
}


