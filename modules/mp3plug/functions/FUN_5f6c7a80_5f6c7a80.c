/* Module: mp3plug.dll
   Function: FUN_5f6c7a80
   Address: 5f6c7a80
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5f6c7a80(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = 0xffff;
  if (param_1[3] - 5U < 0xffff) {
    uVar6 = param_1[3] - 5U;
  }
  do {
    uVar5 = *(uint *)((int)param_1 + 0x6a);
    if (uVar5 < 2) {
      FUN_5f6c7be0(param_1);
      uVar5 = *(uint *)((int)param_1 + 0x6a);
      if (uVar5 == 0) {
        if (param_2 == 0) {
          return 0;
        }
        iVar1 = *(int *)((int)param_1 + 0x52);
        if (iVar1 < 0) {
          puVar4 = (undefined1 *)0x0;
        }
        else {
          puVar4 = (undefined1 *)(*(int *)((int)param_1 + 0x2e) + iVar1);
        }
        FUN_5f6c9b00(param_1,puVar4,*(int *)((int)param_1 + 0x62) - iVar1,(uint)(param_2 == 4));
        *(undefined4 *)((int)param_1 + 0x52) = *(undefined4 *)((int)param_1 + 0x62);
        FUN_5f6c7710(*param_1);
        if (*(int *)(*param_1 + 0x10) != 0) {
          return (-(uint)(param_2 != 4) & 0xfffffffe) + 3;
        }
        return (param_2 != 4) - 1 & 2;
      }
    }
    *(undefined4 *)((int)param_1 + 0x6a) = 0;
    iVar3 = *(int *)((int)param_1 + 0x62) + uVar5;
    *(int *)((int)param_1 + 0x62) = iVar3;
    iVar1 = *(int *)((int)param_1 + 0x52);
    uVar2 = *(uint *)((int)param_1 + 0x62);
    uVar5 = iVar1 + uVar6;
    if ((iVar3 == 0) || (uVar5 <= uVar2)) {
      *(uint *)((int)param_1 + 0x62) = uVar5;
      *(uint *)((int)param_1 + 0x6a) = uVar2 - uVar5;
      if (iVar1 < 0) {
        puVar4 = (undefined1 *)0x0;
      }
      else {
        puVar4 = (undefined1 *)(*(int *)((int)param_1 + 0x2e) + iVar1);
      }
      FUN_5f6c9b00(param_1,puVar4,uVar5 - iVar1,0);
      *(undefined4 *)((int)param_1 + 0x52) = *(undefined4 *)((int)param_1 + 0x62);
      FUN_5f6c7710(*param_1);
      if (*(int *)(*param_1 + 0x10) == 0) {
        return 0;
      }
    }
    iVar1 = *(int *)((int)param_1 + 0x52);
    uVar5 = *(int *)((int)param_1 + 0x62) - iVar1;
    if (*(int *)((int)param_1 + 0x22) - 0x106U <= uVar5) {
      if (iVar1 < 0) {
        puVar4 = (undefined1 *)0x0;
      }
      else {
        puVar4 = (undefined1 *)(*(int *)((int)param_1 + 0x2e) + iVar1);
      }
      FUN_5f6c9b00(param_1,puVar4,uVar5,0);
      *(undefined4 *)((int)param_1 + 0x52) = *(undefined4 *)((int)param_1 + 0x62);
      FUN_5f6c7710(*param_1);
      if (*(int *)(*param_1 + 0x10) == 0) {
        return 0;
      }
    }
  } while( true );
}


