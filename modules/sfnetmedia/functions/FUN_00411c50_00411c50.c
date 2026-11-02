/* Module: sfnetmedia.dll
   Function: FUN_00411c50
   Address: 00411c50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00411c50(IStream *param_1,undefined4 param_2,wchar_t *param_3,HMODULE param_4)

{
  int extraout_EAX;
  HGLOBAL pvVar1;
  undefined4 *puVar2;
  uchar *puVar3;
  int iVar4;
  undefined *puVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 uVar8;
  char *pcVar9;
  undefined4 *local_8;
  uint local_4;
  
  local_4 = 0;
  local_8 = (undefined4 *)0x0;
  FUN_00411e60(param_1,param_2,param_3,&local_4,&local_8,param_4);
  if (extraout_EAX < 0) {
    return;
  }
  pvVar1 = GlobalAlloc(0x40,0x98);
  puVar2 = GlobalLock(pvVar1);
  if ((puVar2 == (undefined4 *)0x0) || (puVar2 = FUN_00428a80(puVar2), puVar2 == (undefined4 *)0x0))
  goto LAB_00411e26;
  puVar3 = (uchar *)FUN_004012f0();
  iVar4 = FUN_00428b00(puVar2,puVar3);
  if (-1 < iVar4) {
    iVar4 = FUN_00429550(puVar2,(uchar *)s_http___stats_sonicfoundry_com_ga_0043f420,"*/*",
                         (uchar *)"Content-Type: text/xml\r\n",local_8,local_4,(uchar *)0x0);
    if (iVar4 < 0) {
      pcVar7 = "CSfInet::Post failed hr=0x%x";
      uVar8 = 0x169;
    }
    else {
      iVar4 = FUN_00427830(puVar2,15000);
      if (iVar4 < 0) {
        pcVar7 = "Error waiting for request to complete hr=0x%x";
        uVar8 = 0x164;
      }
      else {
        param_4 = (HMODULE)0x0;
        iVar4 = FUN_00428bf0(puVar2,&param_3,&param_4);
        if (-1 < iVar4) {
          if ((((int)param_3 < 0) || (param_4[2].unused < 200)) || (299 < param_4[2].unused)) {
            if (param_4 == (HMODULE)0x0) {
              pcVar9 = 
              "Could not post download media stats - hrResult=0x%x, no CSfHttpResponse object";
              uVar8 = 0x151;
              pcVar7 = "gatherstats.cpp";
              uVar6 = 1;
              puVar5 = FUN_004012b0();
              FUN_004124f0((int)puVar5,uVar6,pcVar7,uVar8,pcVar9);
            }
            else {
              pcVar9 = "Could not post download media stats - hrResult=0x%x, HTTP status code=%d";
              uVar8 = 0x14d;
              pcVar7 = "gatherstats.cpp";
              uVar6 = 1;
              puVar5 = FUN_004012b0();
              FUN_004124f0((int)puVar5,uVar6,pcVar7,uVar8,pcVar9);
            }
          }
          else {
            pcVar9 = "Successfully posted download media stats.";
            uVar8 = 0x147;
            pcVar7 = "gatherstats.cpp";
            uVar6 = 4;
            puVar5 = FUN_004012b0();
            FUN_004124f0((int)puVar5,uVar6,pcVar7,uVar8,pcVar9);
          }
          if (param_4 != (HMODULE)0x0) {
            FUN_00428190(param_4);
            FUN_00427660(puVar2);
            goto LAB_00411e26;
          }
          goto LAB_00411e18;
        }
        pcVar7 = "Could not get request result after completion hr=0x%x";
        uVar8 = 0x15f;
      }
    }
    pcVar9 = "gatherstats.cpp";
    uVar6 = 1;
    puVar5 = FUN_004012b0();
    FUN_004124f0((int)puVar5,uVar6,pcVar9,uVar8,pcVar7);
  }
LAB_00411e18:
  FUN_00427660(puVar2);
LAB_00411e26:
  pvVar1 = GlobalHandle(local_8);
  GlobalUnlock(pvVar1);
  pvVar1 = GlobalHandle(local_8);
  GlobalFree(pvVar1);
  return;
}


