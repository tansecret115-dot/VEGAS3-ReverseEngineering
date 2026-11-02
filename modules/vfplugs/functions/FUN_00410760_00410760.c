/* Module: vfplugs.dll
   Function: FUN_00410760
   Address: 00410760
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00410760(ushort *param_1,int param_2)

{
  double dVar1;
  undefined1 uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iStack0000000c;
  undefined1 uStack00000014;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000030;
  
  if (param_1 == (ushort *)0x0) {
    return 0;
  }
  dVar1 = _DAT_00487590 / (double)CONCAT44(in_stack_00000030,in_stack_0000002c);
  iVar4 = ftol();
  iVar5 = ftol();
  iVar6 = ftol();
  _uStack00000014 = ftol();
  if (iVar5 == iVar4) {
    iVar5 = iVar5 + 1;
  }
  iStack0000000c = ftol();
  iVar6 = iVar6 << 0xe;
  if (param_2 == 4) {
    iVar7 = 0;
    do {
      if (iVar7 < iVar4) {
        *(undefined1 *)(iVar7 + (int)param_1) = 0;
      }
      else if (iVar7 < iVar5) {
        if (dVar1 == _DAT_00487590) {
          *(char *)(iVar7 + (int)param_1) = (char)((int)(iVar6 + (iVar6 >> 0x1f & 0x3fffU)) >> 0xe);
          iVar6 = iVar6 + iStack0000000c;
        }
        else {
          _CIpow();
          uVar2 = ftol();
          *(undefined1 *)(iVar7 + (int)param_1) = uVar2;
          iVar6 = iVar6 + iStack0000000c;
        }
      }
      else {
        *(undefined1 *)(iVar7 + (int)param_1) = uStack00000014;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 0x100);
    return 1;
  }
  iVar7 = 0;
  do {
    if (iVar7 < iVar4) {
      *param_1 = 0;
    }
    else if (iVar7 < iVar5) {
      if (dVar1 == _DAT_00487590) {
        *param_1 = (ushort)((int)(iVar6 + (iVar6 >> 0x1f & 0x3fffU)) >> 0xe);
        iVar6 = iVar6 + iStack0000000c;
      }
      else {
        _CIpow();
        bVar3 = ftol();
        iVar6 = iVar6 + iStack0000000c;
        *param_1 = (ushort)bVar3;
      }
    }
    else {
      *param_1 = _uStack00000014;
    }
    iVar7 = iVar7 + 1;
    param_1 = param_1 + 1;
  } while (iVar7 < 0x10000);
  return 1;
}


