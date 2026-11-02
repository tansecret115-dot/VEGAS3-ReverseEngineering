/* Module: vegas30.exe
   Function: FUN_005eb260
   Address: 005eb260
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005eb260(int param_1,uint param_2,ushort *param_3,uint param_4,int *param_5)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int local_4;
  
  local_4 = 0;
  if ((((param_1 == 0) || (param_3 == (ushort *)0x0)) || (param_5 == (int *)0x0)) ||
     (uVar2 = FUN_005eb250(param_1,param_2), param_4 < uVar2)) {
    local_4 = -0x7ff8ffa9;
  }
  else {
    if (param_2 == 0) {
      *param_5 = 0;
      return 0;
    }
    iVar3 = 0;
    uVar2 = param_2;
    iVar4 = param_1;
    do {
      if (uVar2 < 0x4001) {
        uVar1 = FUN_005eb380(iVar4,param_3 + 1,uVar2);
        *param_3 = uVar1;
        iVar4 = iVar4 + uVar2;
        uVar2 = 0;
      }
      else {
        uVar1 = FUN_005eb380(iVar4,param_3 + 1,0x4000);
        *param_3 = uVar1;
        iVar4 = iVar4 + 0x4000;
        uVar2 = uVar2 - 0x4000;
      }
      param_3 = (ushort *)((int)param_3 + uVar1 + 2);
      iVar3 = uVar1 + 2 + iVar3;
      if (iVar4 - param_1 < iVar3) {
        local_4 = -0x7fffbffb;
        break;
      }
    } while (uVar2 != 0);
    *param_5 = iVar3;
    DAT_0065e0e4 = DAT_0065e0e4 + param_2;
    if (-1 < local_4) {
      DAT_0065e0e0 = DAT_0065e0e0 + (param_2 - *param_5);
      return local_4;
    }
  }
  return local_4;
}


