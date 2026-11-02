/* Module: vegas30.exe
   Function: FUN_00429130
   Address: 00429130
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00429130(int param_1,uint param_2,int param_3,int *param_4,int param_5,uint param_6,
                 int param_7)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int local_8;
  int local_4;
  
  uVar1 = (uint)param_4;
  if (DAT_0064762c == 0) {
    local_8 = DAT_0064762c;
  }
  else {
    local_8 = *(int *)(DAT_0064762c + 0x80);
  }
  if ((-1 < param_3) && (-1 < param_5)) {
    iVar2 = param_5 + param_7 + (uint)CARRY4((uint)param_4,param_6);
    if ((iVar2 <= param_3) && ((iVar2 < param_3 || ((int)param_4 + param_6 < param_2)))) {
      param_1 = 0;
    }
  }
  if (local_8 != 0) {
    param_4 = (int *)(local_8 + 0x94);
    local_4 = 2;
    do {
      if ((int *)*param_4 != (int *)0x0) {
        (**(code **)(*(int *)*param_4 + 0x80))(param_1,uVar1,param_5,param_6,param_7);
      }
      param_4 = param_4 + 2;
      local_4 = local_4 + -1;
    } while (local_4 != 0);
    if (*(int *)(local_8 + 0x80) != 0) {
      if (param_1 != 0) {
        iVar2 = param_5 + param_7 + (uint)CARRY4(uVar1,param_6);
        if ((iVar2 <= param_3) && ((iVar2 < param_3 || (uVar1 + param_6 < param_2)))) {
          param_1 = 0;
        }
      }
      uVar4 = 0;
      uVar3 = FUN_005ba4b0(*(int *)(local_8 + 0x80),0);
      iVar2 = FUN_005b9fc0(*(undefined4 *)(local_8 + 0x80),uVar3,uVar4);
      FUN_005a5b50(iVar2 + 0x108,param_1,uVar1,param_5,param_6,param_7,0);
      FUN_005ba030(*(undefined4 *)(local_8 + 0x80),iVar2,0,1);
    }
  }
  return;
}


