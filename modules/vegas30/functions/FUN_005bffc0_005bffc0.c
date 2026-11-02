/* Module: vegas30.exe
   Function: FUN_005bffc0
   Address: 005bffc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005bffc0(uint param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_34;
  int local_30;
  int local_2c;
  uint local_28;
  int local_24;
  undefined1 local_20 [32];
  
  iVar1 = FUN_005be610(0,local_20);
  iVar4 = 0;
  local_2c = iVar1;
  if (0 < iVar1) {
    do {
      iVar2 = FUN_005be910(iVar4,local_20);
      while (iVar2 = iVar2 + -1, -1 < iVar2) {
        iVar3 = FUN_005bec40(iVar4,iVar2,local_20,0,&local_28,&local_30,0,0);
        iVar1 = local_2c;
        if (iVar3 != 0) {
          if ((local_24 < param_2) || ((local_24 <= param_2 && (local_28 < param_1)))) {
LAB_005c0058:
            local_34 = 0;
          }
          else {
            iVar3 = param_2 + param_4 + (uint)CARRY4(param_1,param_3);
            if ((iVar3 < local_24) || ((iVar3 <= local_24 && (param_1 + param_3 <= local_28))))
            goto LAB_005c0058;
            local_34 = 1;
          }
          if (local_30 != local_34) {
            FUN_005bee80(iVar4,iVar2,local_20,0,0,&local_34,0,0);
            iVar1 = local_2c;
          }
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  return;
}


