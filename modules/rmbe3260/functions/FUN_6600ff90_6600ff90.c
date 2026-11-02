/* Module: rmbe3260.dll
   Function: FUN_6600ff90
   Address: 6600ff90
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6600ff90(XPNTimer *param_1)

{
  uint uVar1;
  bool bVar2;
  DWORD DVar3;
  int iVar4;
  
  if ((((*(int *)(param_1 + 0x28) != 0) && (*(int *)(param_1 + 0x2c) != 0)) &&
      (*(int *)(param_1 + 0x30) != 0)) && (*(int *)(param_1 + 0x34) != 0)) {
    bVar2 = true;
    DVar3 = GetTickCount();
    uVar1 = *(uint *)(param_1 + 0x3c);
    if (DVar3 < uVar1) {
      iVar4 = (DVar3 - uVar1) + -1;
    }
    else {
      iVar4 = DVar3 - uVar1;
    }
    if ((-1 < *(int *)(param_1 + 0x38)) && (*(int *)(param_1 + 0x38) <= iVar4 / 10)) {
      bVar2 = false;
    }
    if (bVar2) {
      **(int **)(param_1 + 0x2c) = iVar4 + *(int *)(param_1 + 0x4e);
      (**(code **)(**(int **)(param_1 + 0x28) + 0x2c))
                (*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30),
                 *(undefined4 *)(param_1 + 0x34));
      if (DAT_66075068 != 0) {
        FUN_6600f010(s_CResendRepeater__OnTimer__6606c97c,*(undefined4 *)(param_1 + 0x2c),
                     *(int *)(param_1 + 0x30),*(int *)(param_1 + 0x34));
        return;
      }
    }
    else {
      XPNTimer::SetPending(param_1,0);
    }
  }
  return;
}


