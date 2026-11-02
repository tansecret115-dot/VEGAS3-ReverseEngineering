/* Module: vegas30k.dll
   Function: FUN_01177b20
   Address: 01177b20
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 __fastcall FUN_01177b20(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  bool bVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined4 local_10;
  undefined4 uStack_c;
  double local_8;
  
  uStack_c = *(undefined4 *)(param_1 + 0x18c);
  local_10 = *(undefined4 *)(param_1 + 0x188);
  puVar1 = (undefined4 *)(param_1 + 0x188);
  if ((*(byte *)(param_1 + 0x5c) & 2) != 0) {
    if (((((*(uint *)(param_1 + 0x54) & 0x40000) != 0) &&
         ((*(uint *)(param_1 + 0x50) & 0x8000) != 0)) &&
        (iVar6 = *(int *)(param_1 + 0xb4), iVar6 != 0)) &&
       (((*(uint *)(iVar6 + 0xc) & 0x8000) != 0 && ((*(uint *)(iVar6 + 0xc) & 0x4000) != 0)))) {
      FUN_01191690(iVar6,&local_10);
      return CONCAT44(uStack_c,local_10);
    }
    if ((((*(int *)(param_1 + 0x210) != 0) && (*(int *)(param_1 + 100) == 0)) &&
        ((*(int *)(param_1 + 0x68) == 0 &&
         (((*(int *)(param_1 + 0x6c) == 0x3ff00000 && (*(int *)(param_1 + 0x7c) == 0)) &&
          (*(int *)(param_1 + 0x74) == 0)))))) &&
       (((uVar4 = *(uint *)(param_1 + 0x50) & 0x400, uVar4 != 0 && (*(int *)(param_1 + 0x78) == 0))
        || (uVar4 == 0)))) {
      uVar8 = FUN_01177a70();
      return uVar8;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
    piVar2 = *(int **)(param_1 + 0x1f0);
    if (piVar2 == (int *)0x0) {
      iVar6 = FUN_01177970(0);
      if (*(int *)(param_1 + 100) == 0) {
        uVar5 = 0;
        iVar6 = iVar6 - *(int *)(param_1 + 0x1a0);
        *(int *)(param_1 + 0x1a4) = iVar6;
        lVar9 = __allmul(iVar6,0,10000,0);
        lVar9 = lVar9 + *(longlong *)(param_1 + 400);
      }
      else {
        uVar8 = __allmul(iVar6 - *(int *)(param_1 + 0x1a0),0,10000,0);
        iVar6 = *(uint *)(param_1 + 400) - (uint)uVar8;
        iVar7 = (*(int *)(param_1 + 0x194) - (int)((ulonglong)uVar8 >> 0x20)) -
                (uint)(*(uint *)(param_1 + 400) < (uint)uVar8);
        if ((iVar7 < 1) && (iVar7 < 0)) {
          iVar6 = *(int *)(param_1 + 0x198);
          iVar7 = *(int *)(param_1 + 0x19c);
        }
        lVar9 = CONCAT44(iVar7,iVar6);
        uVar5 = 0;
      }
      FUN_01177f10(lVar9,uVar5);
      local_10 = *puVar1;
      uStack_c = *(undefined4 *)(param_1 + 0x18c);
    }
    else {
      (**(code **)(*piVar2 + 0x4c))(piVar2,&local_8);
      (**(code **)(**(int **)(param_1 + 0x1f0) + 0x198))
                (*(int **)(param_1 + 0x1f0),&stack0xffffffe8);
      uVar5 = _SfGetMillisec_0();
      *(undefined4 *)(param_1 + 0x1a8) = uVar5;
      *puVar1 = local_10;
      *(undefined4 *)(param_1 + 0x18c) = uStack_c;
      uVar5 = __alldiv(local_10,uStack_c,10000,0);
      bVar3 = _DAT_011dad58 == local_8;
      *(undefined4 *)(param_1 + 0x1a4) = uVar5;
      if (bVar3) {
        if (*(int *)(param_1 + 0x7c) != 0) {
          uVar5 = _SfGetMillisec_0();
          *(undefined4 *)(param_1 + 0x70) = uVar5;
        }
        *(undefined4 *)(param_1 + 0x7c) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x7c) = 1;
        *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x44) << 3;
        *(undefined4 *)(param_1 + 0x70) = 0;
      }
      if (*(int *)(param_1 + 0x210) != 0) {
        if (((*(int *)(param_1 + 0x74) == 0) || (*(int *)(param_1 + 0x70) == 0)) ||
           (_DAT_011dad58 != local_8)) {
          if (((*(int *)(param_1 + 0x210) != 0) && (_DAT_011dad58 == local_8)) &&
             ((*(int *)(param_1 + 0x78) != 0 &&
              (((*(uint *)(param_1 + 0x50) & 0x400) != 0 &&
               (iVar6 = _SfGetMillisec_0(),
               *(uint *)(param_1 + 0x78) <= (uint)(iVar6 - *(int *)(param_1 + 0x1a0)))))))) {
            *(undefined4 *)(param_1 + 0x78) = 0;
          }
        }
        else {
          iVar6 = _SfGetMillisec_0();
          if (*(uint *)(param_1 + 0x78) <= (uint)(iVar6 - *(int *)(param_1 + 0x70))) {
            *(undefined4 *)(param_1 + 0x78) = 0;
            *(undefined4 *)(param_1 + 0x74) = 0;
            (**(code **)(**(int **)(param_1 + 0x1f0) + 0x198))(*(int **)(param_1 + 0x1f0),puVar1);
            uVar5 = __alldiv(*puVar1,*(undefined4 *)(param_1 + 0x18c),10000,0);
            *(undefined4 *)(param_1 + 0x1a4) = uVar5;
            uVar5 = _SfGetMillisec_0();
            *(undefined4 *)(param_1 + 0x1a8) = uVar5;
            *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x44) << 3;
            *(undefined4 *)(param_1 + 0x70) = 0;
          }
        }
      }
    }
    uVar8 = ftol();
    *(undefined8 *)(param_1 + 0xa0) = uVar8;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  return CONCAT44(uStack_c,local_10);
}


