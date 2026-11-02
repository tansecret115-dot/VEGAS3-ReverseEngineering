/* Module: aviplug.dll
   Function: FUN_5f958be0
   Address: 5f958be0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint * FUN_5f958be0(int *param_1,uint param_2,HDRVR param_3,uint param_4,uint *param_5,uint *param_6
                   )

{
  uint *puVar1;
  undefined4 local_4;
  
  puVar1 = (uint *)0xffffffff;
  local_4 = 0xffffffff;
  if (param_4 == 0x4008) {
    local_4 = 0xfffffffa;
    if (param_5 == (uint *)0x0) {
      return (uint *)0xfffffffa;
    }
    if (param_6 < (uint *)0x30) {
      return (uint *)0xfffffffa;
    }
    if (param_1 == (int *)0x0) {
      return (uint *)0xfffffffa;
    }
    puVar1 = (uint *)(**(code **)(*param_1 + 0x4c))
                               (param_1,*param_5,param_5[1],param_5[2],param_5[3],param_5[4],
                                param_5[6],param_5[7],param_5[8],param_5[9],param_5[10],param_5[0xb]
                               );
    return puVar1;
  }
  if (param_4 != 0x400d) {
    if (param_4 < 0x4005) {
      if (param_4 == 0x4004) {
        if (param_6 != (uint *)0x0) {
          puVar1 = (uint *)(**(code **)(*param_1 + 0x38))(param_1,param_5,param_6,0);
          return puVar1;
        }
        (**(code **)(*param_1 + 0x34))(param_1,param_5,&local_4);
        return param_5;
      }
      switch(param_4) {
      case 1:
      case 2:
      case 7:
      case 9:
        return (uint *)0x1;
      case 3:
        puVar1 = (uint *)FUN_5f9586b0(param_2,param_6);
        return puVar1;
      case 4:
        if (param_1 == (int *)0x0) {
          return (uint *)0x1;
        }
        if (param_1 == (int *)0xffffffff) {
          return (uint *)0x1;
        }
        puVar1 = (uint *)(**(code **)(*param_1 + 8))(param_1);
        return puVar1;
      case 5:
      case 6:
      case 8:
      case 10:
        return (uint *)0x0;
      }
    }
    else if (param_4 < 0x402b) {
      if (0x4028 < param_4) {
        if (param_5 == (uint *)0x0) {
          return (uint *)0xffffffff;
        }
        *param_5 = 1;
        return puVar1;
      }
      switch(param_4) {
      case 0x4005:
        (**(code **)(*param_1 + 0x3c))(param_1,param_5,param_6,&local_4);
        return param_5;
      case 0x4006:
        puVar1 = (uint *)(**(code **)(*param_1 + 0x40))(param_1,param_5,param_6);
        return puVar1;
      case 0x4007:
        puVar1 = (uint *)(**(code **)(*param_1 + 0x48))(param_1,param_5,param_6);
        return puVar1;
      case 0x4009:
        puVar1 = (uint *)(**(code **)(*param_1 + 0x50))(param_1);
        return puVar1;
      case 0x400a:
        if (param_6 != (uint *)0x0) {
          puVar1 = (uint *)(**(code **)(*param_1 + 0x58))(param_1,param_5,param_6,0);
          return puVar1;
        }
        (**(code **)(*param_1 + 0x54))(param_1,param_5,&local_4);
        return param_5;
      case 0x400b:
        puVar1 = (uint *)(**(code **)(*param_1 + 0x5c))(param_1,param_5,param_6);
        return puVar1;
      case 0x400c:
        puVar1 = (uint *)(**(code **)(*param_1 + 0x60))(param_1,param_5,param_6);
        return puVar1;
      case 0x400e:
        puVar1 = (uint *)(**(code **)(*param_1 + 0x68))(param_1);
        return puVar1;
      }
    }
    else {
      switch(param_4) {
      case 0x5001:
        if (param_5 != (uint *)0x0) {
          return (uint *)0xffffffff;
        }
        return (uint *)0x0;
      case 0x5002:
        puVar1 = (uint *)FUN_5f9530b0(param_2,param_5,(uint)param_6);
        return puVar1;
      case 0x501e:
      case 0x501f:
        if (param_5 == (uint *)0x0) {
          return (uint *)0xffffffff;
        }
        *param_5 = 0xffffffff;
        return puVar1;
      }
    }
    if ((((param_4 < 0x5000) && (0x5029 < param_4)) && (param_4 < 0x4004)) && (0x4048 < param_4)) {
      puVar1 = (uint *)DefDriverProc((DWORD_PTR)param_1,param_3,param_4,(LPARAM)param_5,
                                     (LPARAM)param_6);
    }
    return puVar1;
  }
  local_4 = 0xfffffffa;
  if (param_5 == (uint *)0x0) {
    return (uint *)0xfffffffa;
  }
  if (param_6 < (uint *)0x18) {
    return (uint *)0xfffffffa;
  }
  if (param_1 == (int *)0x0) {
    return (uint *)0xfffffffa;
  }
  puVar1 = (uint *)(**(code **)(*param_1 + 100))
                             (param_1,*param_5,param_5[1],param_5[2],param_5[3],param_5[4]);
  return puVar1;
}


