/* Module: vegas30.exe
   Function: FUN_005b4c90
   Address: 005b4c90
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_005b4c90(int param_1,int param_2,int *param_3,uint *param_4)

{
  int lDistanceToMove;
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  HGLOBAL pvVar4;
  LPVOID pvVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  LONG local_b0;
  undefined1 local_ac [168];
  int local_4;
  
  iVar8 = 0;
  *param_4 = 0;
  *param_3 = 0;
  iVar3 = FUN_005b51d0();
  if ((iVar3 == 0) || (param_2 != *(int *)(param_1 + 0x134))) {
    iVar3 = 0;
  }
  else {
    lDistanceToMove = *(int *)(param_1 + 0x1c0);
    local_b0 = 0;
    SetFilePointer(*(HANDLE *)(param_1 + 0x118),lDistanceToMove,&local_b0,0);
    iVar3 = FUN_005b5a00(local_ac);
    if (-1 < iVar3) {
      uVar1 = *(uint *)(param_1 + 0x13c);
      if (uVar1 != 0) {
        iVar8 = FUN_005b7a20(uVar1);
        if (iVar8 == 0) {
          return -0x7ff8fff2;
        }
        pvVar4 = GlobalAlloc(0x42,uVar1 * 8);
        pvVar5 = GlobalLock(pvVar4);
        *param_3 = (int)pvVar5;
        if (pvVar5 == (LPVOID)0x0) {
          FUN_005b7a40(iVar8);
          return -0x7ff8fff2;
        }
      }
      iVar3 = FUN_005b7410((local_4 - lDistanceToMove) + -0xac,iVar8,uVar1);
      if (-1 < iVar3) {
        uVar6 = 0;
        if (uVar1 != 0) {
          puVar7 = (undefined4 *)(iVar8 + 0x10);
          do {
            uVar2 = *puVar7;
            uVar6 = uVar6 + 1;
            puVar7 = puVar7 + 8;
            *(undefined4 *)(*param_3 + -8 + uVar6 * 8) = uVar2;
          } while (uVar6 < uVar1);
        }
        *param_4 = uVar1;
      }
      if (iVar8 != 0) {
        FUN_005b7a40(iVar8);
      }
      if (iVar3 < 0) {
        pvVar4 = GlobalHandle((LPCVOID)*param_3);
        GlobalUnlock(pvVar4);
        pvVar4 = GlobalHandle((LPCVOID)*param_3);
        GlobalFree(pvVar4);
        *param_3 = 0;
      }
      return iVar3;
    }
  }
  return iVar3;
}


