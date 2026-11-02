/* Module: vidpcore.dll
   Function: FUN_5de72560
   Address: 5de72560
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5de72560(ushort *param_1,int param_2,int param_3)

{
  double dVar1;
  undefined1 uVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ushort *puVar11;
  undefined1 local_c;
  
  puVar11 = param_1;
  if ((param_1 == (ushort *)0x0) || (param_3 == 0)) {
    return 0;
  }
  dVar1 = _DAT_5df18830 / *(double *)(param_3 + 0x20);
  iVar6 = ftol();
  iVar7 = ftol();
  iVar8 = ftol();
  uVar4 = ftol();
  if (iVar7 == iVar6) {
    iVar7 = iVar7 + 1;
  }
  iVar9 = ftol();
  iVar8 = iVar8 << 0xe;
  if (param_2 == 4) {
    iVar10 = 0;
    param_1 = (ushort *)iVar8;
    do {
      if (iVar10 < iVar6) {
        *(undefined1 *)(iVar10 + (int)puVar11) = 0;
      }
      else if (iVar10 < iVar7) {
        if (dVar1 == _DAT_5df18830) {
          uVar2 = (undefined1)((int)(iVar8 + (iVar8 >> 0x1f & 0x3fffU)) >> 0xe);
        }
        else {
          _CIpow();
          uVar2 = ftol();
        }
        *(undefined1 *)(iVar10 + (int)puVar11) = uVar2;
        iVar8 = (int)param_1 + iVar9;
        param_1 = (ushort *)iVar8;
      }
      else {
        local_c = (undefined1)uVar4;
        *(undefined1 *)(iVar10 + (int)puVar11) = local_c;
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < 0x100);
    return 1;
  }
  iVar10 = 0;
  param_1 = (ushort *)iVar8;
  do {
    if (iVar10 < iVar6) {
      *puVar11 = 0;
    }
    else if (iVar10 < iVar7) {
      if (dVar1 == _DAT_5df18830) {
        uVar5 = (ushort)((int)(iVar8 + (iVar8 >> 0x1f & 0x3fffU)) >> 0xe);
      }
      else {
        _CIpow();
        bVar3 = ftol();
        uVar5 = (ushort)bVar3;
      }
      *puVar11 = uVar5;
      iVar8 = (int)param_1 + iVar9;
      param_1 = (ushort *)iVar8;
    }
    else {
      *puVar11 = uVar4;
    }
    iVar10 = iVar10 + 1;
    puVar11 = puVar11 + 1;
  } while (iVar10 < 0x10000);
  return 1;
}


