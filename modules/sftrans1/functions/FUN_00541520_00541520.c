/* Module: sftrans1.dll
   Function: FUN_00541520
   Address: 00541520
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00541520(int param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  double in_stack_00000028;
  
  in_stack_00000028 = _DAT_00555908 / in_stack_00000028;
  iVar3 = ftol();
  iVar4 = ftol();
  iVar5 = ftol();
  uVar1 = ftol();
  if (iVar4 == iVar3) {
    iVar4 = iVar4 + 1;
  }
  iVar6 = ftol();
  iVar5 = iVar5 << 0xe;
  iVar7 = 0;
  do {
    if (iVar7 < iVar3) {
      *(undefined1 *)(iVar7 + param_1) = 0;
    }
    else if (iVar7 < iVar4) {
      if (in_stack_00000028 == _DAT_00555908) {
        *(char *)(iVar7 + param_1) = (char)((int)(iVar5 + (iVar5 >> 0x1f & 0x3fffU)) >> 0xe);
        iVar5 = iVar5 + iVar6;
      }
      else {
        _CIpow();
        uVar2 = ftol();
        *(undefined1 *)(iVar7 + param_1) = uVar2;
        iVar5 = iVar5 + iVar6;
      }
    }
    else {
      *(undefined1 *)(iVar7 + param_1) = uVar1;
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x100);
  return 0;
}


