/* Module: vegas30.exe
   Function: FUN_0044af50
   Address: 0044af50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_0044af50(int *param_1,uint param_2,int param_3,uint param_4,int param_5,uint param_6,int param_7
            )

{
  LPCVOID pMem;
  int iVar1;
  int iVar2;
  uint *puVar3;
  HGLOBAL pvVar4;
  int iVar5;
  int iVar6;
  int local_c;
  int local_8;
  int local_4;
  
  if (param_1 == (int *)0x0) {
    local_8 = 0;
  }
  else {
    local_8 = *param_1;
  }
  local_4 = 0;
  if (0 < local_8) {
    do {
      if (param_1 == (int *)0x0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *param_1;
      }
      if ((local_4 < 0) || (iVar1 + -1 < local_4)) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(param_1[2] + local_4 * 4);
      }
      if (*(int *)(iVar1 + 0x14) != 0) {
        if ((-0x80000000 <= param_5) && ((-0x80000000 < param_5 || (param_4 != 0)))) {
          _SfVideoKeyframe_InsertSmart_20
                    (iVar1,param_4 - param_2,(param_5 - param_3) - (uint)(param_4 < param_2),
                     0xffffffff,0xffffffff);
        }
        iVar5 = (param_7 - param_3) - (uint)(param_6 < param_2);
        iVar2 = FUN_00443ff0(iVar1,param_6 - param_2,iVar5);
        if ((iVar2 != 0) && ((param_7 < 0x7fffffff || (param_6 != 0xffffffff)))) {
          _SfVideoKeyframe_InsertSmart_20(iVar1,param_6 - param_2,iVar5,0xffffffff,0xffffffff);
        }
        if (*(int **)(iVar1 + 0x60) == (int *)0x0) {
          local_c = 0;
        }
        else {
          local_c = **(int **)(iVar1 + 0x60);
        }
        if ((param_2 != 0) || (param_3 != 0)) {
          iVar5 = -1;
          iVar6 = -1;
          iVar2 = local_c + -1;
          if ((param_3 < 1) && (param_3 < 0)) {
            iVar2 = 0;
            iVar6 = 1;
            iVar5 = local_c;
          }
          for (; iVar2 != iVar5; iVar2 = iVar2 + iVar6) {
            puVar3 = (uint *)(*(int *)(*(int *)(iVar1 + 0x60) + 4) * iVar2 +
                             *(int *)(*(int *)(iVar1 + 0x60) + 8));
            if (puVar3 != (uint *)0x0) {
              FUN_0044aa90(iVar1,0,0,puVar3,iVar2,*puVar3 + param_2,
                           puVar3[1] + param_3 + (uint)CARRY4(*puVar3,param_2),1,0,0);
            }
          }
        }
        while (local_c = local_c + -1, local_c != -1) {
          iVar2 = *(int *)(*(int *)(iVar1 + 0x60) + 8);
          iVar6 = *(int *)(*(int *)(iVar1 + 0x60) + 4) * local_c;
          iVar5 = *(int *)(iVar6 + 4 + iVar2);
          if (((iVar5 < param_5) || ((iVar5 <= param_5 && (*(uint *)(iVar6 + iVar2) < param_4)))) ||
             ((param_7 <= iVar5 && ((param_7 < iVar5 || (param_6 < *(uint *)(iVar6 + iVar2))))))) {
            pMem = *(LPCVOID *)(iVar6 + iVar2 + 0x14);
            if (pMem != (LPCVOID)0x0) {
              pvVar4 = GlobalHandle(pMem);
              GlobalUnlock(pvVar4);
              pvVar4 = GlobalHandle(*(LPCVOID *)(iVar6 + iVar2 + 0x14));
              GlobalFree(pvVar4);
            }
            _SfList_DeleteList_16(*(undefined4 *)(iVar1 + 0x60),local_c,1,1);
          }
        }
      }
      local_4 = local_4 + 1;
    } while (local_4 < local_8);
  }
  FUN_00453250(DAT_00647630,0);
  return 0;
}


