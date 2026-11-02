/* Module: vegas30.exe
   Function: FUN_005a4080
   Address: 005a4080
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005a4080(undefined4 param_1,int param_2,int *param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6,int param_7,int param_8,int param_9)

{
  byte *pbVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  tagPOINT local_10 [2];
  
  iVar5 = param_2;
  puVar2 = DAT_0064b138;
  iVar6 = 0;
  if (param_7 != 0) {
    FUN_005b83b0(DAT_0064b138,1);
  }
  local_18 = 0;
  if (*(int **)(param_2 + 0x78) != (int *)0x0) {
    local_18 = **(int **)(param_2 + 0x78);
  }
  iVar4 = *param_3;
  if (0x20 - local_18 <= *param_3) {
    iVar4 = 0x20 - local_18;
  }
  local_20 = 2;
  local_1c = param_2;
  local_14 = 0;
  param_2 = 0;
  if (0 < iVar4) {
    do {
      pbVar1 = *(byte **)(*(int *)(param_3[2] + param_2 * 4) + 0x20c);
      if (((pbVar1 != (byte *)0x0) && ((*pbVar1 & 4) == 0)) && (*(int *)(iVar5 + 4) == 3)) {
        iVar3 = *(int *)(pbVar1 + 4);
        if (*(int *)(iVar3 + 0x10) == 5) {
          iVar6 = FUN_005a2ed0(puVar2,param_1,iVar5,param_4,param_5,param_6,iVar3);
          break;
        }
        if (param_8 == 0) {
          param_3 = (int *)0x0;
          if (*(int *)(DAT_0064762c + 0xa0) != 0) {
            param_3 = (int *)SendMessageA(*(HWND *)(*(int *)(DAT_0064762c + 0xa0) + 8),0x66b,1,iVar5
                                         );
          }
          iVar6 = FUN_004e9f70(puVar2,0x22a,0);
          if ((iVar6 < 0) || (iVar6 = FUN_004ea250(puVar2,iVar5,0x29,0), iVar6 < 0))
          goto LAB_005a4307;
          iVar4 = FUN_005a24e0(iVar5 + 0x7c,iVar3,DAT_0064b50c,param_2 + param_9,
                               *(undefined4 *)(pbVar1 + 0xc));
          if (iVar4 == 0) {
            iVar6 = -0x7ff8fff2;
          }
          else {
            FUN_005a5060(iVar4,iVar5,3,0xffffffff,0x7fffffff);
            FUN_004eb2b0(puVar2);
          }
          local_20 = 3;
          FUN_004ea040(puVar2,0);
          if ((param_3 != (int *)0x0) && (*(int *)(DAT_0064762c + 0xa0) != 0)) {
            SendMessageA(*(HWND *)(*(int *)(DAT_0064762c + 0xa0) + 8),0x66a,0,iVar5);
          }
          break;
        }
        iVar6 = FUN_004e9f70(puVar2,0x229,0);
        if ((iVar6 < 0) || (iVar6 = FUN_004ea250(puVar2,iVar5,0x29,0), iVar6 < 0))
        goto LAB_005a4307;
        iVar3 = FUN_005a24e0(iVar5 + 0x78,iVar3,DAT_0064b50c,param_2 + param_9,
                             *(undefined4 *)(pbVar1 + 0xc));
        if (iVar3 == 0) {
          iVar6 = -0x7ff8fff2;
        }
        else {
          FUN_005a5060(iVar3,iVar5,2,0xffffffff,0x7fffffff);
          FUN_004eb2b0(puVar2);
        }
        FUN_004ea040(puVar2,0);
      }
      param_2 = param_2 + 1;
    } while (param_2 < iVar4);
    if (iVar6 < 0) goto LAB_005a4307;
  }
  *(uint *)*puVar2 = *(uint *)*puVar2 | 8;
  DAT_0064767c = DAT_0064767c | 0x400;
LAB_005a4307:
  if (param_7 != 0) {
    FUN_005b84d0(puVar2,1);
  }
  if (-1 < iVar6) {
    iVar5 = FUN_004c3510(iVar5,0,local_10);
    if (iVar5 != 0) {
      MapWindowPoints(*(HWND *)(DAT_00647630 + 4),(HWND)0x0,local_10,2);
    }
    FUN_0044e590(&local_20,0,-(uint)(iVar5 != 0) & (uint)local_10);
  }
  return iVar6;
}


