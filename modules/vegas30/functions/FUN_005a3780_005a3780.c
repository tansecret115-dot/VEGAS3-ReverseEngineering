/* Module: vegas30.exe
   Function: FUN_005a3780
   Address: 005a3780
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005a3780(int param_1,int param_2,int param_3,uint *param_4,int param_5,undefined4 param_6)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  tagPOINT local_20;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  puVar3 = DAT_0064b138;
  iVar4 = 0;
  if (param_5 != 0) {
    FUN_005b83b0(DAT_0064b138,1);
  }
  local_10 = 0;
  local_8 = 0;
  local_c = param_2;
  local_4 = 0;
  if ((((param_4 != (uint *)0x0) && ((*param_4 & 4) == 0)) && ((*param_4 & 1) != 0)) &&
     ((*(int *)(param_2 + 4) == 3 && (uVar1 = param_4[1], *(int *)(uVar1 + 0x10) == 5)))) {
    FUN_004e9f70(puVar3,0x227,0);
    FUN_004ea750(puVar3,param_2,2,0);
    piVar5 = (int *)(param_2 + 0x200);
    if (param_3 != 1) {
      piVar5 = (int *)(param_2 + 0x204);
    }
    if ((DAT_0064762c != 0) && (*(int *)(DAT_0064762c + 0xa0) != 0)) {
      FUN_0044c6f0(*(int *)(DAT_0064762c + 0xa0));
    }
    if (*piVar5 != 0) {
      _SfVideoPlugin_DestroyCacheList_4(*piVar5);
      *piVar5 = 0;
    }
    iVar4 = FUN_005a24e0(piVar5,uVar1,DAT_0064b50c,0xffffffff,param_4[3]);
    if (iVar4 == 0) {
      iVar4 = -0x7ff8fff2;
    }
    else {
      FUN_005a3510(puVar3,param_2,param_3);
      FUN_005a2630(uVar1);
      if (param_3 == 1) {
        iVar2 = *(int *)(param_2 + 0x218);
        local_14 = *(undefined4 *)(iVar2 + 0x2c);
        local_20.x = *(int *)(iVar2 + 0x20);
        local_20.y = *(LONG *)(iVar2 + 0x24);
        local_18 = local_20.x + 10;
        FUN_005a5060(iVar4,param_2,7,*(undefined4 *)(param_2 + 0x78),*(undefined4 *)(param_2 + 0x7c)
                    );
        local_10 = 7;
      }
      else if (param_3 == 2) {
        iVar2 = *(int *)(param_2 + 0x218);
        local_14 = *(undefined4 *)(iVar2 + 0x2c);
        local_18 = *(int *)(iVar2 + 0x28);
        local_20.y = *(LONG *)(iVar2 + 0x24);
        local_20.x = local_18 + -10;
        FUN_005a5060(iVar4,param_2,8,*(undefined4 *)(param_2 + 0x80),*(undefined4 *)(param_2 + 0x84)
                    );
        local_10 = 8;
      }
      iVar4 = FUN_005a32f0(puVar3,param_6);
      if (-1 < iVar4) {
        FUN_004eb2b0(puVar3);
      }
    }
    FUN_004ea040(puVar3,0);
    *(uint *)*puVar3 = *(uint *)*puVar3 | 0x100;
    DAT_0064767c = DAT_0064767c | 0x400;
  }
  if (param_5 != 0) {
    FUN_005b84d0(puVar3,1);
  }
  if (-1 < iVar4) {
    MapWindowPoints(*(HWND *)(param_1 + 4),(HWND)0x0,&local_20,2);
    FUN_0044e590(&local_10,0,&local_20);
  }
  return iVar4;
}


