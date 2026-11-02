/* Module: vidcap30.exe
   Function: FUN_0044db70
   Address: 0044db70
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0044db70(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                int param_13,undefined4 *param_14,undefined4 param_15)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  int local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 local_80 [128];
  
  iVar3 = 0;
  local_8c = 0;
  local_84 = 0;
  FUN_0044e2e0(param_4,local_80,0x80);
  iVar1 = FUN_0044e530(param_1,param_3,&local_88);
  if (-1 < iVar1) {
    local_8c = FUN_004444d0(param_1,local_88,local_80,0);
    if (local_8c == 0) {
      iVar1 = FUN_00443840(&local_8c,param_1,local_88,param_5,param_6,local_80,param_4,param_15);
      if (DAT_005bb7a8 != 0) {
        iVar3 = FUN_00446520(*(undefined4 *)(DAT_005ba4c0 + 0x70));
      }
    }
    else {
      iVar1 = FUN_00443970(local_8c,param_1,local_88,param_5,param_6,local_80,param_4,param_15);
    }
    if (-1 < iVar1) {
      FUN_00443ec0(param_1,local_8c,param_7,param_8);
      FUN_00444150(param_1,local_8c,param_9,param_10);
      FUN_004441a0(param_1,local_8c,param_11,param_12);
      FUN_00443b20(local_8c,1,1);
      FUN_00443b20(local_8c,2,2);
      FUN_00443b20(local_8c,-(param_13 != 0) & 8,8);
      FUN_00444200(param_1,local_8c,*param_14,param_14[1]);
      if (iVar3 != 0) {
        FUN_0045f640(param_1,&local_84,iVar3,0xffffffff,local_8c);
        *param_2 = local_8c;
        return iVar1;
      }
      *param_2 = local_8c;
      return iVar1;
    }
  }
  puVar4 = local_80;
  uVar2 = _SfGetString_8(DAT_005ba2a0,0xc51f);
  SfErrorHandler_DetailsAddString(0,uVar2,puVar4);
  FUN_00444480(param_1,local_8c,0);
  *param_2 = 0;
  return iVar1;
}


