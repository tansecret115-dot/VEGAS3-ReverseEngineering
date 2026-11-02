/* Module: sfpublish.dll
   Function: FUN_00413f30
   Address: 00413f30
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00413f30(HMODULE param_1,undefined4 param_2,undefined4 param_3,int param_4,
                undefined4 *param_5)

{
  int iVar1;
  HGLOBAL pvVar2;
  undefined4 *puVar3;
  uchar *puVar4;
  undefined *puVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 uVar8;
  char *pcVar9;
  undefined4 *local_8;
  uint local_4;
  
  local_4 = 0;
  local_8 = (undefined4 *)0x0;
  iVar1 = FUN_00414140(param_1,param_2,param_3,param_4,(int)param_5,&local_4,&local_8);
  if (iVar1 < 0) {
    return iVar1;
  }
  pvVar2 = GlobalAlloc(0x40,0x98);
  puVar3 = GlobalLock(pvVar2);
  if ((puVar3 == (undefined4 *)0x0) || (puVar3 = FUN_004218b0(puVar3), puVar3 == (undefined4 *)0x0))
  {
    iVar1 = -0x7ff8fff2;
  }
  else {
    puVar4 = (uchar *)FUN_004012f0();
    iVar1 = FUN_00421930(puVar3,puVar4);
    if (-1 < iVar1) {
      iVar1 = FUN_00422380(puVar3,(uchar *)s_http___stats_sonicfoundry_com_ga_0043f41c,"*/*",
                           (uchar *)"Content-Type: text/xml\r\n",local_8,local_4,(uchar *)0x0);
      if (iVar1 < 0) {
        pcVar7 = "CSfInet::Post failed hr=0x%x";
        uVar8 = 0x171;
LAB_004140e4:
        pcVar9 = "gatherstats.cpp";
        uVar6 = 1;
        puVar5 = FUN_004012b0();
        FUN_00415b60((int)puVar5,uVar6,pcVar9,uVar8,pcVar7);
      }
      else {
        param_5 = (undefined4 *)0x0;
        do {
          if (-1 < iVar1) goto LAB_00413ff9;
          do {
            if (iVar1 != -0x7ffb1f54) {
              if (-1 < iVar1) goto LAB_00414029;
              pcVar7 = "Could not get http request result hr=0x%x";
              uVar8 = 0x16c;
              goto LAB_004140e4;
            }
LAB_00413ff9:
            iVar1 = FUN_00420620(puVar3,0xffffffff);
          } while (iVar1 < 0);
          iVar1 = FUN_00421a20(puVar3,&param_4,&param_5);
        } while (iVar1 < 0);
LAB_00414029:
        if (((param_4 < 0) || ((int)param_5[2] < 200)) || (299 < (int)param_5[2])) {
          if (param_5 == (undefined4 *)0x0) {
            pcVar9 = "Could not post publishing stats - hrResult=0x%x, no CSfHttpResponse object";
            uVar8 = 0x15e;
            pcVar7 = "gatherstats.cpp";
            uVar6 = 1;
            puVar5 = FUN_004012b0();
            FUN_00415b60((int)puVar5,uVar6,pcVar7,uVar8,pcVar9);
          }
          else {
            pcVar9 = "Could not post publishing stats - hrResult=0x%x, HTTP status code=%d";
            uVar8 = 0x15a;
            pcVar7 = "gatherstats.cpp";
            uVar6 = 1;
            puVar5 = FUN_004012b0();
            FUN_00415b60((int)puVar5,uVar6,pcVar7,uVar8,pcVar9);
          }
          iVar1 = -0x7ffb1f14;
        }
        else {
          pcVar9 = "Successfully posted publishing stats.";
          uVar8 = 0x154;
          pcVar7 = "gatherstats.cpp";
          uVar6 = 4;
          puVar5 = FUN_004012b0();
          FUN_00415b60((int)puVar5,uVar6,pcVar7,uVar8,pcVar9);
        }
        if (param_5 != (undefined4 *)0x0) {
          FUN_00420fc0(param_5);
          FUN_00420490(puVar3);
          goto LAB_00414107;
        }
      }
    }
    FUN_00420490(puVar3);
  }
LAB_00414107:
  pvVar2 = GlobalHandle(local_8);
  GlobalUnlock(pvVar2);
  pvVar2 = GlobalHandle(local_8);
  GlobalFree(pvVar2);
  return iVar1;
}


