/* Module: vegas30k.dll
   Function: FUN_0114eb70
   Address: 0114eb70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0114eb70(int param_1,uint *param_2,uint param_3,int param_4)

{
  uint uVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  
  uVar4 = param_3;
  puVar3 = param_2;
  uVar7 = *param_2;
  uVar1 = param_2[2];
  if (uVar7 == uVar1) {
    piVar2 = *(int **)(param_1 + 0x44);
    iVar5 = 0;
    if (0 < *piVar2) {
      puVar6 = (undefined4 *)piVar2[2];
      do {
        if ((uint *)*puVar6 == param_2) {
          _SfList_DeleteList_16(piVar2,iVar5,1,0);
          return;
        }
        iVar5 = iVar5 + 1;
        puVar6 = puVar6 + 1;
      } while (iVar5 < *piVar2);
      return;
    }
  }
  else {
    if (uVar7 == param_3) {
      if (uVar1 < uVar7) {
        *param_2 = uVar7 - 1;
        return;
      }
      *param_2 = uVar7 + 1;
      return;
    }
    if (uVar1 == param_3) {
      if (uVar7 < uVar1) {
        param_2[2] = uVar1 - 1;
        return;
      }
      param_2[2] = uVar1 + 1;
      return;
    }
    param_2 = (uint *)0x0;
    iVar5 = _SfList_AllocItem_12(*(undefined4 *)(param_1 + 0x44),0x10,&param_2);
    if (-1 < iVar5) {
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[3] = 0;
      if (*puVar3 < puVar3[2]) {
        uVar7 = uVar4 - 1;
        *param_2 = uVar4 + 1;
        param_2[2] = puVar3[2];
      }
      else {
        uVar7 = uVar4 + 1;
        *param_2 = uVar4 - 1;
        param_2[2] = puVar3[2];
      }
      puVar3[2] = uVar7;
      param_2[1] = param_4;
      param_2[3] = param_4;
      _SfList_InsertList_16(*(undefined4 *)(param_1 + 0x44),0xffffffff,0,0xffffffff);
    }
  }
  return;
}


