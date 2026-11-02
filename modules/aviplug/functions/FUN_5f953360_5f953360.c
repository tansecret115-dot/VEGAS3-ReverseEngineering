/* Module: aviplug.dll
   Function: FUN_5f953360
   Address: 5f953360
   Source: Ghidra pseudocode (Stage 10 batch) */


uint * FUN_5f953360(uint *param_1,uint param_2,HDRVR param_3,uint param_4,uint *param_5,
                   uint *param_6)

{
  uint *puVar1;
  
  if (param_4 < 0x4005) {
    if (param_4 == 0x4004) {
      puVar1 = (uint *)FUN_5f952180(param_1,(int)param_5,param_6);
      return puVar1;
    }
    switch(param_4) {
    case 1:
      puVar1 = (uint *)FUN_5f951eb0();
      return puVar1;
    case 2:
      puVar1 = (uint *)FUN_5f951ed0();
      return puVar1;
    case 3:
      puVar1 = FUN_5f951f30(param_2,param_6);
      return puVar1;
    case 4:
      puVar1 = (uint *)FUN_5f952070(param_1);
      return puVar1;
    case 5:
      puVar1 = (uint *)FUN_5f951ee0();
      return puVar1;
    case 6:
      puVar1 = (uint *)FUN_5f951ec0();
      return puVar1;
    case 7:
      puVar1 = (uint *)FUN_5f951f20();
      return puVar1;
    case 8:
      puVar1 = (uint *)FUN_5f951f10();
      return puVar1;
    case 9:
      puVar1 = (uint *)FUN_5f951ef0();
      return puVar1;
    case 10:
      puVar1 = (uint *)FUN_5f951f00();
      return puVar1;
    }
  }
  else if (param_4 < 0x5001) {
    if (param_4 == 0x5000) {
      puVar1 = (uint *)FUN_5f9530a0(param_1,(int)param_5);
      return puVar1;
    }
    switch(param_4) {
    case 0x4005:
      puVar1 = (uint *)FUN_5f952210((int)param_1);
      return puVar1;
    case 0x4006:
      puVar1 = (uint *)FUN_5f9520e0(param_1,(int)param_5,(int)param_6);
      return puVar1;
    case 0x4007:
      puVar1 = (uint *)FUN_5f952250(param_1,(int)param_5,(int)param_6);
      return puVar1;
    case 0x4008:
      puVar1 = (uint *)FUN_5f952580(param_1,(int)param_5,(uint)param_6);
      return puVar1;
    case 0x4009:
      puVar1 = (uint *)FUN_5f952230((int)param_1);
      return puVar1;
    case 0x400a:
      puVar1 = (uint *)FUN_5f952920(param_1,(int)param_5,param_6);
      return puVar1;
    case 0x400b:
      puVar1 = (uint *)FUN_5f9527b0(param_1,(int)param_5,(int)param_6,(int *)0x0);
      return puVar1;
    case 0x400c:
      puVar1 = (uint *)FUN_5f9529c0(param_1,(int)param_5,(int)param_6);
      return puVar1;
    case 0x400d:
      puVar1 = (uint *)FUN_5f952ce0(param_1,param_5,(uint)param_6);
      return puVar1;
    case 0x400e:
      puVar1 = (uint *)FUN_5f9529a0((int)param_1);
      return puVar1;
    case 0x400f:
      puVar1 = (uint *)FUN_5f952f00();
      return puVar1;
    case 0x4010:
      puVar1 = (uint *)FUN_5f952f10();
      return puVar1;
    case 0x4012:
      puVar1 = (uint *)FUN_5f952f20();
      return puVar1;
    case 0x4013:
      puVar1 = (uint *)FUN_5f952f30();
      return puVar1;
    case 0x4015:
      puVar1 = (uint *)FUN_5f952f40();
      return puVar1;
    case 0x401d:
      puVar1 = (uint *)FUN_5f952ed0();
      return puVar1;
    case 0x401e:
      puVar1 = (uint *)FUN_5f952ee0();
      return puVar1;
    case 0x401f:
      puVar1 = (uint *)FUN_5f952ef0();
      return puVar1;
    case 0x4020:
      puVar1 = (uint *)FUN_5f952f50();
      return puVar1;
    case 0x4021:
      puVar1 = (uint *)FUN_5f952f60();
      return puVar1;
    case 0x4022:
      puVar1 = (uint *)FUN_5f952f70();
      return puVar1;
    case 0x4023:
      puVar1 = (uint *)FUN_5f952f80();
      return puVar1;
    case 0x4024:
      puVar1 = (uint *)FUN_5f952f90();
      return puVar1;
    case 0x4025:
      puVar1 = (uint *)FUN_5f952fa0();
      return puVar1;
    case 0x4026:
      puVar1 = (uint *)FUN_5f952fb0();
      return puVar1;
    case 0x4027:
      puVar1 = (uint *)FUN_5f952fc0();
      return puVar1;
    case 0x4028:
      puVar1 = (uint *)FUN_5f952fd0();
      return puVar1;
    case 0x4029:
      puVar1 = (uint *)FUN_5f953000();
      return puVar1;
    case 0x402a:
      puVar1 = (uint *)FUN_5f953010(param_1,param_5);
      return puVar1;
    case 0x4032:
      puVar1 = (uint *)FUN_5f952fe0();
      return puVar1;
    case 0x4033:
      puVar1 = (uint *)FUN_5f952ff0();
      return puVar1;
    case 0x403c:
      puVar1 = (uint *)FUN_5f953030();
      return puVar1;
    case 0x403d:
      puVar1 = (uint *)FUN_5f953040();
      return puVar1;
    case 0x403e:
      puVar1 = (uint *)FUN_5f953050();
      return puVar1;
    case 0x403f:
      puVar1 = (uint *)FUN_5f953060();
      return puVar1;
    case 0x4046:
      puVar1 = (uint *)FUN_5f953070();
      return puVar1;
    case 0x4048:
      puVar1 = (uint *)FUN_5f953080();
      return puVar1;
    }
  }
  else {
    switch(param_4) {
    case 0x5001:
      puVar1 = (uint *)FUN_5f953090();
      return puVar1;
    case 0x5002:
      puVar1 = (uint *)FUN_5f9531e0(param_1,param_2,param_5,param_6);
      return puVar1;
    case 0x500a:
      puVar1 = (uint *)FUN_5f9532f0();
      return puVar1;
    case 0x500b:
      puVar1 = (uint *)FUN_5f953300();
      return puVar1;
    case 0x501e:
      puVar1 = (uint *)FUN_5f953310(param_1,param_5);
      return puVar1;
    case 0x501f:
      puVar1 = (uint *)FUN_5f953330(param_1,param_5);
      return puVar1;
    case 0x5020:
      puVar1 = (uint *)FUN_5f953350();
      return puVar1;
    case 0x5028:
    case 0x5029:
      return (uint *)0xffffffff;
    }
  }
  puVar1 = (uint *)DefDriverProc((DWORD_PTR)param_1,param_3,param_4,(LPARAM)param_5,(LPARAM)param_6)
  ;
  return puVar1;
}


