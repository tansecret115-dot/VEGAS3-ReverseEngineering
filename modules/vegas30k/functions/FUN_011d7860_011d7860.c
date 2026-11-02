/* Module: vegas30k.dll
   Function: FUN_011d7860
   Address: 011d7860
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_011d7860(int param_1,uint *param_2)

{
  int iVar1;
  uint *puVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint *_Dst;
  size_t _Size;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint *puVar8;
  
  if (*(int *)(param_1 + 0x28) == 0) {
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x14);
    *(uint *)(*(int *)(param_1 + 0x14) + 4) = param_2[1];
    **(uint **)(param_1 + 0x24) = *param_2;
    *(uint *)(*(int *)(param_1 + 0x24) + 8) = param_2[2];
    iVar1 = *(int *)(param_1 + 0x24);
    if ((*(uint *)(iVar1 + 8) & 0x80000000) == 0) {
      return 0;
    }
    uVar5 = param_2[2];
    puVar6 = (undefined4 *)param_2[3];
  }
  else {
    if (*param_2 < **(uint **)(param_1 + 0x24)) {
      puVar2 = *(uint **)(param_1 + 0x14);
      _Size = *(size_t *)(param_1 + 0x20);
      if (*puVar2 < *param_2) {
        do {
          if ((puVar2[2] & 0x80000000) != 0) {
            _Size = _Size - ((puVar2[2] & 0xffffff) + 3 & 0xfffffffc);
          }
          _Size = _Size - 0xc;
          puVar2 = (uint *)FUN_011d7de0(puVar2);
        } while (*puVar2 < *param_2);
      }
      if (_Size == 0) {
        return 1;
      }
      puVar8 = puVar2 + 3;
      _Dst = puVar8;
      if ((param_2[2] & 0x80000000) != 0) {
        _Dst = (uint *)((int)puVar8 + ((param_2[2] & 0xffffff) + 3 & 0xfffffffc));
      }
      memmove(_Dst,puVar2,_Size);
      puVar2[1] = param_2[1];
      *puVar2 = *param_2;
      puVar2[2] = param_2[2];
      if ((*(uint *)(*(int *)(param_1 + 0x24) + 8) & 0x80000000) != 0) {
        uVar5 = param_2[2];
        puVar2 = (uint *)param_2[3];
        for (uVar4 = (uVar5 & 0xffffff) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar8 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar8 = puVar8 + 1;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(char *)puVar8 = (char)*puVar2;
          puVar2 = (uint *)((int)puVar2 + 1);
          puVar8 = (uint *)((int)puVar8 + 1);
        }
      }
      iVar1 = 0;
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x14);
      if (0 < *(int *)(param_1 + 0x28)) {
        do {
          uVar3 = FUN_011d7de0(*(undefined4 *)(param_1 + 0x24));
          *(undefined4 *)(param_1 + 0x24) = uVar3;
          iVar1 = iVar1 + 1;
        } while (iVar1 < *(int *)(param_1 + 0x28));
      }
      return 0;
    }
    iVar1 = FUN_011d7de0(*(uint **)(param_1 + 0x24));
    *(int *)(param_1 + 0x24) = iVar1;
    *(uint *)(iVar1 + 4) = param_2[1];
    **(uint **)(param_1 + 0x24) = *param_2;
    *(uint *)(*(int *)(param_1 + 0x24) + 8) = param_2[2];
    iVar1 = *(int *)(param_1 + 0x24);
    if ((*(uint *)(iVar1 + 8) & 0x80000000) == 0) {
      return 0;
    }
    uVar5 = param_2[2];
    puVar6 = (undefined4 *)param_2[3];
  }
  puVar7 = (undefined4 *)(iVar1 + 0xc);
  for (uVar4 = (uVar5 & 0xffffff) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
    puVar7 = (undefined4 *)((int)puVar7 + 1);
  }
  return 0;
}


