/* Module: vidcap30.exe
   Function: FUN_0044dd90
   Address: 0044dd90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0044dd90(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  CHAR *pCVar8;
  int local_110;
  int local_10c;
  int local_108;
  int local_104;
  CHAR local_100 [127];
  undefined1 local_81;
  undefined1 local_80 [128];
  
  local_110 = 0;
  local_10c = 0;
  FUN_0046ed20();
  local_108 = 0;
  local_100[0] = '\0';
  FUN_0044e2e0(param_2,local_80,0x80);
  iVar1 = FUN_0046fdd0(param_2,&local_108,0,0);
  if (-1 < iVar1) {
    if (*(LPCSTR *)(local_108 + 0x13c) != (LPCSTR)0x0) {
      lstrcpynA(local_100,*(LPCSTR *)(local_108 + 0x13c),0x80);
      local_81 = 0;
    }
    iVar2 = FUN_0044cae0(param_3);
    if (iVar2 == 4) {
      local_10c = FUN_0044c6c0(param_3);
    }
    else {
      if (local_100[0] == '\0') {
        pCVar8 = &DAT_005bb57c;
      }
      else {
        pCVar8 = local_100;
      }
      iVar1 = FUN_0044e530(param_1,pCVar8,&local_10c);
    }
    if ((-1 < iVar1) && (local_10c != 0)) {
      iVar2 = FUN_004444d0(param_1,local_10c,local_80,0);
      if (iVar2 != 0) {
        uVar4 = param_2;
        uVar3 = _SfGetString_8(DAT_005ba2a0,0xc501);
        SfErrorHandler_DetailsAddString(0x8004e032,uVar3,uVar4);
      }
      iVar2 = FUN_00444550(param_1,local_10c,param_2);
      if (iVar2 == 0) {
        iVar2 = FUN_004715a0(2);
        if ((iVar2 == 0) || (_DAT_00589f10 != *(double *)(iVar2 + 0x48))) {
          iVar5 = 0;
        }
        else {
          iVar5 = 1;
        }
        iVar1 = (-(uint)(iVar2 != 0) & 0x7ffb1fca) + 0x8004e036;
        if (-1 < iVar1) {
          puVar7 = local_80;
          uVar4 = param_2;
          iVar1 = iVar5;
          uVar6 = ftol(puVar7,param_2,iVar5);
          iVar1 = FUN_00443840(&local_110,param_1,local_10c,uVar6,puVar7,uVar4,iVar1);
          if (-1 < iVar1) {
            local_104 = iVar1;
            FUN_00443ec0(param_1,local_110,*(undefined4 *)(iVar2 + 0x80),
                         *(undefined4 *)(iVar2 + 0x84));
            FUN_00444150(param_1,local_110,*(undefined4 *)(iVar2 + 0x48),
                         *(undefined4 *)(iVar2 + 0x4c));
            FUN_004441a0(param_1,local_110,*(undefined4 *)(iVar2 + 0x50),
                         *(undefined4 *)(iVar2 + 0x54));
            FUN_00443b20(local_110,2,2);
            uVar4 = 8;
            iVar1 = FUN_00472ea0(8);
            FUN_00443b20(local_110,-(iVar1 != 0) & 8,uVar4);
            uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x30) + 4);
            FUN_00444200(param_1,local_110,uVar4,uVar4);
            FUN_00443b20(local_110,0,0x20);
            if (iVar5 != 0) {
              return local_104;
            }
            iVar1 = FUN_004715a0(2);
            FUN_00443b20(local_110,-(iVar1 != 0) & 0x40,0x40);
            iVar1 = FUN_004715a0(1);
            FUN_00443b20(local_110,-(iVar1 != 0) & 0x80,0x80);
            FUN_00443b20(local_110,0x100,0x100);
            iVar1 = FUN_0044e390(param_2,*(undefined4 *)(local_10c + 0xc),
                                 *(undefined4 *)(local_110 + 0x20),*(undefined4 *)(local_110 + 0x24)
                                 ,*(undefined4 *)(local_110 + 0x28),
                                 *(undefined4 *)(local_110 + 0x2c));
            return iVar1;
          }
        }
      }
      else {
        uVar4 = _SfGetString_8(DAT_005ba2a0,0xc501);
        SfMsgBox(0,0x30,uVar4,param_2);
      }
    }
  }
  return iVar1;
}


