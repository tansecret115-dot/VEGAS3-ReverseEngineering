/* Module: vidcap30.exe
   Function: FUN_0040f8f0
   Address: 0040f8f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0040f8f0(undefined4 *param_1,uint param_2,int param_3,int param_4)

{
  uint *puVar1;
  HWND pHVar2;
  int iVar3;
  bool bVar4;
  char *pcVar5;
  int local_808;
  undefined4 local_804;
  undefined1 local_800 [2048];
  
  iVar3 = DAT_005bb808;
  pHVar2 = (HWND)*param_1;
  local_808 = 1;
  local_804 = 0;
  if (((((0x9d2c < param_2) && (param_2 < 0x9d3c)) || ((0x9d65 < param_2 && (param_2 < 0x9d75)))) ||
      ((0x9d12 < param_2 && (param_2 < 0x9d1d)))) || ((0x9d22 < param_2 && (param_2 < 0x9d2d)))) {
    if (((param_1 != (undefined4 *)0x0) && (param_1[0x1b] != 0)) &&
       (pHVar2 = *(HWND *)(param_1[0x1b] + 8), pHVar2 != (HWND)0x0)) {
      SendMessageA(pHVar2,0x111,param_4 << 0x10 | param_2 & 0xffff,param_3);
    }
    goto switchD_0040faaa_caseD_40b;
  }
  if (0x439 < param_2) {
    if (param_2 < 0x9caf) {
      if (param_2 == 0x9cae) {
        FUN_00409b90(DAT_005ba4c0,0x615);
        goto switchD_0040faaa_caseD_40b;
      }
      if (0x453 < param_2) {
        if (0x456 < param_2) {
          if (param_2 == 0x5dc) {
            FUN_00408d40();
          }
          else if (param_2 == 0x9cad) {
            FUN_00409b90(DAT_005ba4c0,0x61d);
          }
          goto switchD_0040faaa_caseD_40b;
        }
        if (param_2 != 0x456) {
          if (param_2 == 0x454) {
            DAT_005ba9a0 = (uint)(DAT_005ba9a0 == 0);
            FUN_00404f10(param_1);
            FUN_00409be0(DAT_005ba4c0);
            goto switchD_0040faaa_caseD_40b;
          }
          if (param_2 != 0x455) goto switchD_0040faaa_caseD_40b;
          DAT_005ba9ac = (uint)(DAT_005ba9ac == 0);
        }
        FUN_00409be0(DAT_005ba4c0);
        goto switchD_0040faaa_caseD_40b;
      }
      if (param_2 == 0x453) {
        FUN_00409b90(DAT_005ba4c0,0x619);
        goto switchD_0040faaa_caseD_40b;
      }
      switch(param_2) {
      case 0x43a:
        pcVar5 = 
        "http://www.sonicfoundry.com/productinfo.asp?Product=sfvidcap&Version=%d.%d&Build=%d&Place=Support"
        ;
        goto LAB_0040fd51;
      case 0x43b:
        pcVar5 = 
        "http://www.sonicfoundry.com/productinfo.asp?Product=sfvidcap&Version=%d.%d&Build=%d&Place=Updates"
        ;
        goto LAB_0040ff7c;
      case 0x43c:
        FUN_0041ee70(param_1);
        break;
      case 0x43e:
        local_804 = 0;
        iVar3 = FUN_0041d280(pHVar2,&DAT_005ba530,0);
        if (iVar3 == 0) {
          local_808 = -0x7ff8fff2;
        }
        FUN_00411120(1);
        break;
      case 0x44a:
        if ((param_1 != (undefined4 *)0x0) && (param_1[0x1b] != 0)) {
          FUN_00434720(param_1[0x1b]);
        }
        break;
      case 1099:
        FUN_00446050(pHVar2,param_4 == 0);
      }
      goto switchD_0040faaa_caseD_40b;
    }
    switch(param_2) {
    case 0x9caf:
      FUN_00409b90(DAT_005ba4c0,0x616);
      break;
    case 0x9cdc:
    case 0x9cdd:
    case 0x9cde:
    case 0x9d1f:
    case 0x9d20:
    case 0x9d21:
    case 0x9d22:
    case 0x9d43:
    case 0x9d64:
    case 0x9d65:
      goto switchD_0040fe46_caseD_9cdc;
    case 0x9d44:
    case 0x9d45:
    case 0x9d46:
      if (param_2 - 0x9d44 != DAT_005bb560) {
        DAT_005ba50c = DAT_005ba50c | 4;
        DAT_005bb560 = param_2 - 0x9d44;
      }
      break;
    case 0x9d4e:
      DAT_005bb55c = (uint)(DAT_005bb55c == 0);
      DAT_005ba50c = DAT_005ba50c | 2;
      break;
    case 0x9d50:
      pcVar5 = "http://www.sonicfoundry.com/productinfo.asp?place=support&product=vidcap";
      goto LAB_0040ff7c;
    case 0x9d83:
      FUN_00462230(pHVar2);
      break;
    case 0x9d84:
      if (DAT_005bba60 != 0) {
        FUN_00464c20(DAT_005ba4bc,2);
      }
      break;
    case 0x9d88:
      if ((*(int *)(DAT_005ba4c0 + 0x70) != 0) && (*(int *)(*(int *)(DAT_005ba4c0 + 0x70) + 8) != 0)
         ) {
        SendMessageA(*(HWND *)(param_1[0x1c] + 8),0x111,param_4 << 0x10 | param_2 & 0xffff,param_3);
      }
    }
    goto switchD_0040faaa_caseD_40b;
  }
  if (param_2 == 0x439) {
    pcVar5 = 
    "http://www.sonicfoundry.com/productinfo.asp?Product=sfvidcap&Version=%d.%d&Build=%d&Place=News"
    ;
LAB_0040fd51:
    SfPrintF(local_800,pcVar5,3,0,0x3f);
    goto LAB_0040ff8e;
  }
  if (param_2 < 0x418) {
    if (param_2 == 0x417) {
      local_804 = 0x16;
      local_808 = FUN_0040f740(param_1);
      goto switchD_0040faaa_caseD_40b;
    }
    if (0x406 < param_2) {
      switch(param_2) {
      case 0x40a:
        FUN_00409b90(DAT_005ba4c0,0x614);
        break;
      case 0x40c:
        FUN_00409b90(DAT_005ba4c0,0x617);
        break;
      case 0x411:
        FUN_00409b90(DAT_005ba4c0,0x61a);
        break;
      case 0x414:
        PostMessageA(pHVar2,0x10,0,0);
        break;
      case 0x415:
      case 0x416:
        iVar3 = FUN_0042e1e0(1,0);
        if (iVar3 != 0) {
          local_804 = 0x10;
          local_808 = FUN_0042f720();
        }
      }
      goto switchD_0040faaa_caseD_40b;
    }
    if (param_2 == 0x406) {
LAB_0040fa72:
      pHVar2 = (HWND)FUN_00404c20();
      if (pHVar2 != (HWND)0x0) {
        SendMessageA(pHVar2,0x112,param_2,0);
      }
    }
    else {
      if (param_2 < 0x1de) {
        if (param_2 != 0x1dd) {
          if (param_2 < 0x1d3) {
            if (param_2 < 0x1ce) {
              if (param_2 == 2) {
                *(undefined4 *)(DAT_005bb808 + 0x5c) = 1;
                if (*(int *)(iVar3 + 0x6c) != 0) {
                  puVar1 = (uint *)(*(int *)(iVar3 + 0x6c) + 0x18);
                  *puVar1 = *puVar1 | 1;
                }
                FUN_00416c90();
              }
              goto switchD_0040faaa_caseD_40b;
            }
          }
          else if ((param_2 < 0x1d6) || (0x1db < param_2)) goto switchD_0040faaa_caseD_40b;
        }
      }
      else if (param_2 != 0x1df) {
        if ((param_2 < 0x403) || (0x404 < param_2)) goto switchD_0040faaa_caseD_40b;
        goto LAB_0040fa72;
      }
switchD_0040fe46_caseD_9cdc:
      if ((*(int *)(DAT_005ba4c0 + 0x6c) != 0) && (*(int *)(*(int *)(DAT_005ba4c0 + 0x6c) + 8) != 0)
         ) {
        SendMessageA(*(HWND *)(param_1[0x1b] + 8),0x111,param_4 << 0x10 | param_2 & 0xffff,param_3);
      }
    }
    goto switchD_0040faaa_caseD_40b;
  }
  switch(param_2) {
  case 0x41b:
    FUN_00452520(DAT_005ba4bc,0,&LAB_00453030,&LAB_00452e50,FUN_004530d0,DAT_005bb838);
    break;
  case 0x41c:
  case 0x41d:
  case 0x41e:
  case 0x41f:
  case 0x420:
  case 0x421:
  case 0x422:
  case 0x423:
  case 0x424:
  case 0x425:
    local_804 = 0x16;
    local_808 = FUN_00417f60(pHVar2,param_2 - 0x41c,&DAT_005bb848);
    break;
  case 0x427:
    local_804 = 0x17;
    local_808 = FUN_0040f8b0(param_1);
    break;
  case 0x428:
    local_804 = 0x17;
    local_808 = FUN_0040f8d0(param_1);
    break;
  case 0x42c:
    FUN_00401000(pHVar2);
    break;
  case 0x42d:
    if (param_3 == 0) {
      FUN_0041f650(1,pHVar2,0,0,0);
    }
    else {
      FUN_0041f650(1,pHVar2,param_3,0xf,0);
    }
    break;
  case 0x42f:
    FUN_0041f650(1,pHVar2,0x3e9,0xf,0);
    break;
  case 0x435:
    pcVar5 = 
    "http://www.sonicfoundry.com/productinfo.asp?Product=sfvidcap&Version=%d.%d&Build=%d&Place=FAQ";
    goto LAB_0040ff7c;
  case 0x436:
    pcVar5 = "http://www.sonicfoundry.com/";
LAB_0040ff7c:
    SfPrintF(local_800,pcVar5,3,0,0x3f);
LAB_0040ff8e:
    FUN_0040f890(pHVar2,local_800);
    break;
  case 0x437:
    pcVar5 = 
    "http://www.sonicfoundry.com/productinfo.asp?Product=sfvidcap&Version=%d.%d&Build=%d&Place=Home"
    ;
    goto LAB_0040fd51;
  case 0x438:
    SfPrintF(local_800,
             "http://www.sonicfoundry.com/productinfo.asp?Product=sfvidcap&Version=%d.%d&Build=%d&Place=Feedback"
             ,3,0,0x3f);
    goto LAB_0040ff8e;
  }
switchD_0040faaa_caseD_40b:
  bVar4 = -1 < local_808;
  if (bVar4) {
    local_808 = _SfErrorHandler_GetLastError_0();
  }
  if ((local_808 < 0) || (local_808 == 0x4e005)) {
    _SfErrorHandler_MsgBox_24(0,0x30,local_804,local_808,0,bVar4);
  }
  return;
}


