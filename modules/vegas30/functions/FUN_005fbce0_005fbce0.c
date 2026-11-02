/* Module: vegas30.exe
   Function: FUN_005fbce0
   Address: 005fbce0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_005fbce0(undefined4 param_1,uint param_2,uint *param_3,undefined4 param_4,int *param_5,
            undefined4 param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 0x80004001;
  if (0x30 < param_2) {
    if (param_2 < 0x4001) {
      if (param_2 == 0x4000) {
        uVar4 = FUN_005fc110(param_4,*param_5,param_5[1],param_3);
        return uVar4;
      }
      if (param_2 < 0x701) {
        if (param_2 == 0x700) {
          uVar4 = FUN_005fc420(*param_3);
          return uVar4;
        }
        if (param_2 < 0x401) {
          if (param_2 == 0x400) {
            uVar4 = FUN_005fc0b0(param_4,*param_5,param_5[1],param_3);
            return uVar4;
          }
          if (param_2 == 0x40) {
            _SfHelp_ContextPopupHelp_24(0,DAT_00647624,0,*(undefined4 *)(*param_5 + 8),param_5[1],0)
            ;
            return 0x80004001;
          }
          if (param_2 == 0xf0) {
            return 0;
          }
        }
        else if (param_2 == 0x600) {
          uVar4 = FUN_005fc2c0();
          return uVar4;
        }
      }
      else {
        if (param_2 == 0x800) {
          FUN_005fb860(param_6);
          return 0x80004001;
        }
        if (param_2 == 0x2000) {
          uVar4 = FUN_005fc100(param_4,*param_5,param_5[1],param_3);
          return uVar4;
        }
        if (param_2 == 0x2500) {
          uVar4 = FUN_005fc0f0(param_4,*param_5,param_5[1],param_3);
          return uVar4;
        }
      }
    }
    else if (param_2 < 0x8001) {
      if (param_2 == 0x8000) {
        uVar4 = FUN_005fc290(param_4,*param_5,param_5[1],param_3);
        return uVar4;
      }
      if (param_2 < 0x4008) {
        if (param_2 == 0x4007) {
          if (param_3 == (uint *)0x0) {
            uVar1 = 0;
          }
          else {
            uVar1 = *param_3;
          }
          if (param_5 == (int *)0x0) {
            iVar2 = -1;
            iVar3 = -1;
          }
          else {
            iVar2 = *param_5;
            iVar3 = param_5[1];
          }
          uVar4 = FUN_005fba80(param_4,iVar2,iVar3,uVar1 | 0x8000,param_6);
          return uVar4;
        }
        if (param_2 == 0x4001) goto switchD_005fbd02_caseD_1;
        if (param_2 == 0x4006) {
          return 0;
        }
      }
      else if (param_2 == 0x4800) {
        FUN_005fb800(param_6);
        return 0x80004001;
      }
    }
    else if (param_2 == 0x8001) {
      if (param_3 == (uint *)0x0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *param_3;
      }
      uVar4 = FUN_005fbb30(param_4,*param_5,param_5[1],uVar1);
    }
    else {
      if (param_2 == 0x8006) {
        return 0;
      }
      if (param_2 == 0x8007) {
        if (param_3 == (uint *)0x0) {
          uVar1 = 0;
        }
        else {
          uVar1 = *param_3;
        }
        if (param_5 == (int *)0x0) {
          iVar2 = -1;
          iVar3 = -1;
        }
        else {
          iVar2 = *param_5;
          iVar3 = param_5[1];
        }
        uVar4 = FUN_005fbc10(param_4,iVar2,iVar3,uVar1,param_6);
        return uVar4;
      }
    }
switchD_005fbd02_caseD_2:
    return uVar4;
  }
  if (param_2 == 0x30) {
switchD_005fbd02_caseD_3:
    return 0;
  }
  switch(param_2) {
  case 0:
    uVar4 = FUN_005fc170(param_4,*param_5,param_5[1],param_3);
    return uVar4;
  case 1:
switchD_005fbd02_caseD_1:
    if (param_3 == (uint *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *param_3;
    }
    uVar4 = FUN_005fb8f0(param_4,*param_5,param_5[1],uVar1);
    return uVar4;
  default:
    goto switchD_005fbd02_caseD_2;
  case 3:
  case 4:
  case 5:
  case 10:
  case 0xc:
  case 0x10:
    goto switchD_005fbd02_caseD_3;
  case 6:
    return 0;
  case 7:
    if (param_3 == (uint *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *param_3;
    }
    if (param_5 == (int *)0x0) {
      iVar2 = -1;
      iVar3 = -1;
    }
    else {
      iVar2 = *param_5;
      iVar3 = param_5[1];
    }
    uVar4 = FUN_005fba80(param_4,iVar2,iVar3,uVar1,param_6);
    return uVar4;
  case 8:
    PostMessageA(DAT_00647624,0x614,0,0);
    return 0x80004001;
  case 0xb:
    if (param_3 == (uint *)0x0) {
      uVar4 = FUN_005fc220(param_4,0);
      return uVar4;
    }
    uVar4 = FUN_005fc220(param_4,*param_3);
    return uVar4;
  case 0xd:
    if (param_3 == (uint *)0x0) {
      uVar4 = FUN_005fc260(param_4,0);
      return uVar4;
    }
    uVar4 = FUN_005fc260(param_4,*param_3);
    return uVar4;
  }
}


