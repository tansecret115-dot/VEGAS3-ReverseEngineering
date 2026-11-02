/* Module: vegas30k.dll
   Function: _SfAudio_Reverse@24
   Address: 010c2ad0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
_SfAudio_Reverse_24(int param_1,undefined4 *param_2,int param_3,undefined4 *param_4,int param_5,
                   float param_6)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined2 *puVar9;
  undefined4 *puVar10;
  int local_108;
  
                    /* 0xc2ad0  776  _SfAudio_Reverse@24 */
  if (param_5 == 0) {
    return 0;
  }
  if ((param_2 == param_4) && (param_6 == (float)_DAT_011dad58)) {
    iVar6 = _SfAudio_GetSampleType_4(param_1);
    iVar7 = _SfAudio_GetSampleType_4(param_3);
    if (iVar7 == iVar6) goto LAB_010c2b57;
  }
  _SfAudio_Copy_24(param_1,param_2,param_3,param_4,param_5,param_6);
LAB_010c2b57:
  iVar6 = (int)((ulonglong)*(ushort *)(param_1 + 0xc) /
               (ulonglong)(longlong)(int)(uint)*(ushort *)(param_1 + 2)) *
          (uint)*(ushort *)(param_3 + 2);
  switch(iVar6) {
  case 1:
    iVar6 = param_5 / 2;
    if (0 < iVar6) {
      puVar8 = (undefined1 *)(param_5 + -1 + (int)param_2);
      do {
        uVar1 = *(undefined1 *)param_2;
        *(undefined1 *)param_2 = *puVar8;
        *puVar8 = uVar1;
        param_2 = (undefined4 *)((int)param_2 + 1);
        puVar8 = puVar8 + -1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      return 0;
    }
    break;
  case 2:
    iVar6 = param_5 / 2;
    if (0 < iVar6) {
      puVar9 = (undefined2 *)((int)param_2 + param_5 * 2 + -2);
      do {
        uVar2 = *(undefined2 *)param_2;
        *(undefined2 *)param_2 = *puVar9;
        *puVar9 = uVar2;
        param_2 = (undefined4 *)((int)param_2 + 2);
        puVar9 = puVar9 + -1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      return 0;
    }
    break;
  case 3:
    local_108 = param_5 / 2;
    if (0 < local_108) {
      puVar9 = (undefined2 *)((int)param_2 + (param_5 + -1) * 3);
      do {
        uVar2 = *(undefined2 *)param_2;
        uVar1 = *(undefined1 *)((int)param_2 + 2);
        *(undefined2 *)param_2 = *puVar9;
        *(undefined1 *)((int)param_2 + 2) = *(undefined1 *)(puVar9 + 1);
        *puVar9 = uVar2;
        *(undefined1 *)(puVar9 + 1) = uVar1;
        local_108 = local_108 + -1;
        param_2 = (undefined4 *)((int)param_2 + 3);
        puVar9 = (undefined2 *)((int)puVar9 + -3);
      } while (local_108 != 0);
      return 0;
    }
    break;
  case 4:
    iVar6 = param_5 / 2;
    if (0 < iVar6) {
      puVar10 = param_2 + param_5 + -1;
      do {
        uVar3 = *param_2;
        *param_2 = *puVar10;
        *puVar10 = uVar3;
        param_2 = param_2 + 1;
        puVar10 = puVar10 + -1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      return 0;
    }
    break;
  default:
    FUN_010c2e00(iVar6,param_2,param_5);
    break;
  case 6:
    local_108 = param_5 / 2;
    if (0 < local_108) {
      puVar10 = (undefined4 *)((int)param_2 + (param_5 * 3 + -3) * 2);
      do {
        uVar3 = *param_2;
        uVar2 = *(undefined2 *)(param_2 + 1);
        *param_2 = *puVar10;
        *(undefined2 *)(param_2 + 1) = *(undefined2 *)(puVar10 + 1);
        *puVar10 = uVar3;
        local_108 = local_108 + -1;
        *(undefined2 *)(puVar10 + 1) = uVar2;
        param_2 = (undefined4 *)((int)param_2 + 6);
        puVar10 = (undefined4 *)((int)puVar10 + -6);
      } while (local_108 != 0);
      return 0;
    }
    break;
  case 8:
    local_108 = param_5 / 2;
    if (0 < local_108) {
      puVar10 = param_2 + param_5 * 2 + -2;
      do {
        uVar3 = *param_2;
        uVar4 = param_2[1];
        *param_2 = *puVar10;
        param_2[1] = puVar10[1];
        *puVar10 = uVar3;
        local_108 = local_108 + -1;
        puVar10[1] = uVar4;
        param_2 = param_2 + 2;
        puVar10 = puVar10 + -2;
      } while (local_108 != 0);
      return 0;
    }
    break;
  case 0x10:
    local_108 = param_5 / 2;
    if (0 < local_108) {
      puVar10 = param_2 + param_5 * 3 + -3;
      do {
        uVar3 = *param_2;
        uVar4 = param_2[1];
        uVar5 = param_2[2];
        *param_2 = *puVar10;
        param_2[1] = puVar10[1];
        param_2[2] = puVar10[2];
        *puVar10 = uVar3;
        puVar10[1] = uVar4;
        puVar10[2] = uVar5;
        local_108 = local_108 + -1;
        param_2 = param_2 + 3;
        puVar10 = puVar10 + -3;
      } while (local_108 != 0);
      return 0;
    }
  }
  return 0;
}


