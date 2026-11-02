/* Module: vegas30.exe
   Function: FUN_0048d440
   Address: 0048d440
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0048d440(int param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  HGLOBAL pvVar3;
  int iVar4;
  uint uVar5;
  
  if ((*(byte *)(param_1 + 0x80) & 2) != 0) {
    iVar4 = *(int *)(param_1 + 0x94);
    if (iVar4 == 1) {
      uVar5 = 0;
      if (param_3 != 0) {
        do {
          iVar4 = FUN_005c8d80(*(undefined4 *)(param_1 + 0x130),
                               *(undefined4 *)
                                (*(int *)(*(int *)(param_1 + 0x134) + 8) + param_2 * 4),0);
          if (iVar4 < 0) {
            return iVar4;
          }
          _SfList_DeleteList_16(*(undefined4 *)(param_1 + 0x134),param_2,1,0);
          uVar5 = uVar5 + 1;
        } while (uVar5 < param_3);
      }
    }
    else if ((2 < iVar4) && (iVar4 < 8)) {
      uVar1 = FUN_0048d640(param_1);
      for (; param_3 != 0; param_3 = param_3 - 1) {
        iVar4 = *(int *)(*(int *)(*(int *)(param_1 + 0x134) + 8) + param_2 * 4);
        uVar2 = _SfList_FindSpecificItemRange_16(uVar1,0,0xffffffff,iVar4);
        if ((*(int *)(param_1 + 0x94) == 5) && (*(LPCVOID *)(iVar4 + 0x24) != (LPCVOID)0x0)) {
          pvVar3 = GlobalHandle(*(LPCVOID *)(iVar4 + 0x24));
          GlobalUnlock(pvVar3);
          pvVar3 = GlobalHandle(*(LPCVOID *)(iVar4 + 0x24));
          GlobalFree(pvVar3);
          *(undefined4 *)(iVar4 + 0x24) = 0;
        }
        if (*(LPCVOID *)(iVar4 + 0x28) != (LPCVOID)0x0) {
          pvVar3 = GlobalHandle(*(LPCVOID *)(iVar4 + 0x28));
          GlobalUnlock(pvVar3);
          pvVar3 = GlobalHandle(*(LPCVOID *)(iVar4 + 0x28));
          GlobalFree(pvVar3);
          *(undefined4 *)(iVar4 + 0x28) = 0;
        }
        _SfList_DeleteList_16(uVar1,uVar2,1,1);
        _SfList_DeleteList_16(*(undefined4 *)(param_1 + 0x134),param_2,1,0);
      }
      if (DAT_00647630 != 0) {
        iVar4 = *(int *)(param_1 + 0x94);
        if (iVar4 == 6) {
          uVar2 = 1;
          uVar1 = FUN_005b8990(*(undefined4 *)(param_1 + 0x130));
          FUN_004c3470(DAT_00647630,uVar1,uVar2);
        }
        else if (iVar4 == 5) {
          uVar2 = 0;
          uVar1 = FUN_005b8980(*(undefined4 *)(param_1 + 0x130));
          FUN_004c3470(DAT_00647630,uVar1,uVar2);
        }
        else if (iVar4 == 7) {
          uVar2 = 2;
          uVar1 = FUN_005b89b0(*(undefined4 *)(param_1 + 0x130));
          FUN_004c3470(DAT_00647630,uVar1,uVar2);
        }
        else {
          uVar2 = 1;
          uVar1 = FUN_005b8970(*(undefined4 *)(param_1 + 0x130));
          FUN_004c33d0(DAT_00647630,uVar1,uVar2);
        }
      }
      *(uint *)**(undefined4 **)(param_1 + 0x130) =
           *(uint *)**(undefined4 **)(param_1 + 0x130) | 0x10000;
      return 0;
    }
  }
  return 0;
}


