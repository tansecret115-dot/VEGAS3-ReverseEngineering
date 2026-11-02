/* Module: vegas30.exe
   Function: FUN_005b3970
   Address: 005b3970
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005b3970(ushort *param_1,int param_2)

{
  double dVar1;
  undefined1 uVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 uStack00000014;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000030;
  
  if (param_1 == (ushort *)0x0) {
    return 0;
  }
  dVar1 = _DAT_006106d0 / (double)CONCAT44(in_stack_00000030,in_stack_0000002c);
  iVar5 = ftol();
  iVar6 = ftol();
  iVar7 = ftol();
  uVar4 = ftol();
  if (iVar6 == iVar5) {
    iVar6 = iVar6 + 1;
  }
  iVar8 = ftol();
  iVar7 = iVar7 << 0xe;
  if (param_2 == 4) {
    iVar9 = 0;
    do {
      if (iVar9 < iVar5) {
        *(undefined1 *)(iVar9 + (int)param_1) = 0;
      }
      else if (iVar9 < iVar6) {
        if (dVar1 == _DAT_006106d0) {
          *(char *)(iVar9 + (int)param_1) = (char)((int)(iVar7 + (iVar7 >> 0x1f & 0x3fffU)) >> 0xe);
          iVar7 = iVar7 + iVar8;
        }
        else {
          _CIpow();
          uVar2 = ftol();
          *(undefined1 *)(iVar9 + (int)param_1) = uVar2;
          iVar7 = iVar7 + iVar8;
        }
      }
      else {
        uStack00000014 = (undefined1)uVar4;
        *(undefined1 *)(iVar9 + (int)param_1) = uStack00000014;
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < 0x100);
    return 1;
  }
  iVar9 = 0;
  do {
    if (iVar9 < iVar5) {
      *param_1 = 0;
    }
    else if (iVar9 < iVar6) {
      if (dVar1 == _DAT_006106d0) {
        *param_1 = (ushort)((int)(iVar7 + (iVar7 >> 0x1f & 0x3fffU)) >> 0xe);
        iVar7 = iVar7 + iVar8;
      }
      else {
        _CIpow();
        bVar3 = ftol();
        iVar7 = iVar7 + iVar8;
        *param_1 = (ushort)bVar3;
      }
    }
    else {
      *param_1 = uVar4;
    }
    iVar9 = iVar9 + 1;
    param_1 = param_1 + 1;
  } while (iVar9 < 0x10000);
  return 1;
}


