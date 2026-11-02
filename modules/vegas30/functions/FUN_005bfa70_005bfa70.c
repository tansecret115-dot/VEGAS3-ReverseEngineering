/* Module: vegas30.exe
   Function: FUN_005bfa70
   Address: 005bfa70
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_005bfa70(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20 [32];
  
  piVar1 = param_2;
  if (*(int *)(param_1 + 4) == 3) {
    iVar5 = 0;
    if (param_2 == (int *)0x0) {
      param_2 = (int *)0x0;
    }
    else {
      param_2 = (int *)*param_2;
    }
    if (((int)param_2 + -1 < 0) || (puVar3 = (undefined4 *)piVar1[2], puVar3 == (undefined4 *)0x0))
    {
      local_30 = 0;
      local_2c = 0;
      local_28 = 0xffffffff;
      local_24 = 0x7fffffff;
      puVar3 = &local_30;
      param_2 = (int *)0x1;
    }
    local_3c = FUN_005be610(0,local_20);
    if (0 < local_3c) {
      do {
        FUN_005c0400();
        local_40 = FUN_005be910(iVar5,local_20);
        iVar4 = 0;
        if (0 < local_40) {
          do {
            iVar2 = FUN_005bec40(iVar5,iVar4,local_20,0,&local_38,0,0,0);
            if (iVar2 != 0) {
              local_44 = FUN_005bfa00(local_38,local_34,puVar3,param_2);
              local_48 = 0;
              FUN_005bee80(iVar5,iVar4,local_20,0,0,&local_44,&local_48,&local_38);
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < local_40);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < local_3c);
    }
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x800000;
  }
  return;
}


