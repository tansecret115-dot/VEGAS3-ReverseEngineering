/* Module: vegas30k.dll
   Function: _SfVideoKeyframe_Insert@36
   Address: 010275a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int _SfVideoKeyframe_Insert_36
              (int param_1,uint param_2,int param_3,int param_4,undefined4 param_5,int *param_6,
              undefined4 *param_7,SIZE_T param_8,int *param_9)

{
  int *piVar1;
  int *piVar2;
  HGLOBAL hMem;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 *puVar6;
  int local_2c;
  uint local_28 [4];
  SIZE_T local_18;
  undefined4 *local_14;
  int local_10;
  undefined4 local_8;
  
                    /* 0x275a0  1259  _SfVideoKeyframe_Insert@36 */
  piVar1 = (int *)(param_1 + 0x60);
  *param_9 = -1;
  local_2c = 0;
  if ((*piVar1 == 0) &&
     (local_2c = _SfList_CreateExZ_32(piVar1,0x28,0xffffffff,0xffffffff,0x40000004,0,0,0),
     local_2c < 0)) {
    return local_2c;
  }
  piVar2 = (int *)*piVar1;
  puVar5 = local_28;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  local_18 = param_8;
  hMem = GlobalAlloc(2,param_8);
  local_14 = GlobalLock(hMem);
  local_28[0] = param_2;
  local_28[1] = param_3;
  local_10 = param_4;
  local_8 = param_5;
  if (local_14 == (undefined4 *)0x0) {
    return -0x7ff8fff2;
  }
  if (param_6 == (int *)0x0) {
    puVar6 = local_14;
    for (uVar4 = local_18 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar6 = *param_7;
      param_7 = param_7 + 1;
      puVar6 = puVar6 + 1;
    }
    for (uVar4 = local_18 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)param_7;
      param_7 = (undefined4 *)((int)param_7 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
  }
  else {
    (**(code **)(*param_6 + 0xc))(param_6,local_14,local_18,0);
  }
  iVar3 = 0;
  if (0 < *piVar2) {
    puVar5 = (uint *)piVar2[2];
    do {
      if ((param_3 < (int)puVar5[1]) || ((param_3 <= (int)puVar5[1] && (param_2 < *puVar5)))) break;
      iVar3 = iVar3 + 1;
      puVar5 = (uint *)((int)puVar5 + piVar2[1]);
    } while (iVar3 < *piVar2);
  }
  if (param_4 == 7) {
    if (iVar3 < 1) {
      local_10 = DAT_012099e8;
    }
    else {
      local_10 = *(int *)((iVar3 + -1) * piVar2[1] + 0x18 + piVar2[2]);
    }
  }
  *param_9 = iVar3;
  _SfList_InsertList_16(*piVar1,iVar3,local_28,1);
  return local_2c;
}


