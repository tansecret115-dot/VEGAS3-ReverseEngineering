/* Module: vegas30.exe
   Function: FUN_005a3d30
   Address: 005a3d30
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005a3d30(int param_1,int *param_2,int param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  byte *pbVar3;
  undefined4 uVar4;
  int lParam;
  int iVar5;
  int iVar6;
  int local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  undefined4 local_4;
  
  lParam = param_1;
  uVar4 = DAT_0064b138;
  local_14 = FUN_004e9f70(DAT_0064b138,0x229,0);
  if ((-1 < local_14) && (local_14 = FUN_004eb0f0(uVar4,0x25,param_1), -1 < local_14)) {
    if (param_3 != 0) {
      FUN_005b83b0(uVar4,1);
    }
    piVar1 = (int *)(param_1 + 0x138);
    piVar2 = (int *)*piVar1;
    local_8 = 0;
    if (piVar2 != (int *)0x0) {
      local_8 = *piVar2;
    }
    param_1 = *param_2;
    if (0x20 - local_8 <= *param_2) {
      param_1 = 0x20 - local_8;
    }
    iVar6 = 0;
    local_10 = 6;
    local_c = lParam;
    local_4 = 0;
    if (0 < param_1) {
      do {
        pbVar3 = *(byte **)(*(int *)(param_2[2] + iVar6 * 4) + 0x20c);
        if (((pbVar3 != (byte *)0x0) && ((*pbVar3 & 4) == 0)) &&
           (*(int *)(*(int *)(pbVar3 + 4) + 0x10) != 5)) {
          iVar5 = FUN_005a24e0(piVar1,*(int *)(pbVar3 + 4),DAT_0064b50c,iVar6 + param_4,
                               *(undefined4 *)(pbVar3 + 0xc));
          if (iVar5 == 0) {
            local_14 = -0x7ff8fff2;
            break;
          }
          FUN_005a5060(iVar5,lParam,6,0xffffffff,0x7fffffff);
          if (*(int *)(DAT_0064762c + 0xa0) != 0) {
            SendMessageA(*(HWND *)(*(int *)(DAT_0064762c + 0xa0) + 8),0x66e,1,lParam);
          }
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < param_1);
    }
    if (param_3 != 0) {
      FUN_005b84d0(uVar4,1);
    }
    if (-1 < local_14) {
      FUN_004eb2b0(uVar4);
      DAT_0064767c = DAT_0064767c | 0x400;
    }
    FUN_004ea040(uVar4,0);
    if (-1 < local_14) {
      FUN_0044e590(&local_10,0,0);
    }
  }
  return local_14;
}


