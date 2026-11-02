/* Module: sftrans1.dll
   Function: FUN_0048a900
   Address: 0048a900
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_0048a900(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 *param_5)

{
  undefined4 uVar1;
  
  switch(param_3) {
  case 0xb0a:
    uVar1 = FUN_0048aaa0();
    return uVar1;
  case 0xb0b:
    uVar1 = FUN_0048b850();
    return uVar1;
  case 0xb0c:
    uVar1 = FUN_0048b890();
    return uVar1;
  case 0xb0d:
    uVar1 = FUN_0048bbc0();
    return uVar1;
  case 0xb0e:
    if ((param_4 < 0) || (**(int **)(param_1 + 0xa4) <= param_4)) {
      param_4 = *(int *)(param_1 + 0x100);
    }
    uVar1 = FUN_0048c380(param_4,param_5);
    return uVar1;
  case 0xb0f:
    uVar1 = FUN_0048aab0(param_4);
    return uVar1;
  case 0xb10:
    uVar1 = FUN_0048aae0(param_4,(uint)param_5 >> 0x10,(uint)param_5 & 0xffff);
    return uVar1;
  case 0xb11:
    uVar1 = FUN_0048ab50((uint)param_5 >> 0x10,(uint)param_5 & 0xffff);
    return uVar1;
  case 0xb12:
    uVar1 = FUN_0048aba0();
    return uVar1;
  case 0xb13:
    uVar1 = FUN_0048abd0(param_5);
    return uVar1;
  case 0xb14:
    uVar1 = FUN_0048abb0();
    return uVar1;
  case 0xb15:
    uVar1 = FUN_0048acb0(param_5);
    return uVar1;
  case 0xb16:
    break;
  case 0xb17:
    if (param_5 != (undefined4 *)0x0) {
      uVar1 = FUN_0048ae40(*param_5,param_5[1],param_5[4],param_5[3]);
      return uVar1;
    }
    return 0;
  case 0xb18:
    if (param_5 != (undefined4 *)0x0) {
      uVar1 = FUN_0048b030(*param_5,param_5[1],param_5[3]);
      return uVar1;
    }
    return 0;
  case 0xb19:
    uVar1 = FUN_0048b280(param_4,param_5);
    return uVar1;
  default:
    return 1;
  }
  if (param_5 != (undefined4 *)0x0) {
    uVar1 = FUN_0048ace0(*param_5,param_5[1],param_5 + 2);
    param_5[4] = uVar1;
    return uVar1;
  }
  return 0;
}


