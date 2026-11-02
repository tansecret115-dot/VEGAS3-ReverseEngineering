/* Module: vegas30k.dll
   Function: FUN_011a10b0
   Address: 011a10b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_011a10b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  int local_30;
  uint local_28;
  int local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  int local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 local_4;
  
  iVar3 = 1;
  do {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x414));
    iVar5 = 0;
    bVar1 = false;
    if (*(int **)(param_1 + 0x438) == (int *)0x0) {
      local_30 = 0;
    }
    else {
      local_30 = **(int **)(param_1 + 0x438);
    }
    if (0 < local_30) {
      do {
        iVar3 = FUN_011b2fd0(param_2,param_3,param_4,param_5,param_6,param_7);
        bVar1 = (bool)(bVar1 | iVar3 == 1);
        iVar5 = iVar5 + 1;
      } while (iVar5 < local_30);
      if (bVar1) {
        iVar3 = *(int *)(*(int *)(param_1 + 0x228) + 0x4c2);
        if (iVar3 == 0) {
          uVar6 = 0;
        }
        else {
          uStack_1c = 0;
          local_20 = param_7;
          uStack_14 = 0;
          local_18 = iVar3;
          uVar6 = ftol();
        }
        local_4 = (undefined4)((ulonglong)uVar6 >> 0x20);
        uVar4 = (uint)uVar6;
        local_24 = 0;
        local_28 = uVar4;
        (**(code **)(**(int **)(param_1 + 0x43c) + 0x18))(*(int **)(param_1 + 0x43c),0,0);
        (**(code **)(**(int **)(param_1 + 0x43c) + 0x34))
                  (*(int **)(param_1 + 0x43c),*(undefined4 *)(param_1 + 0x248),
                   *(undefined4 *)(param_1 + 0x24c));
        iVar3 = (**(code **)(param_1 + 0x14))
                          (param_1,0xd,*(undefined4 *)(param_1 + 0x18),0xffffffff,
                           *(undefined4 *)(param_1 + 0x43c),0,0,*(undefined4 *)(param_1 + 0x248),
                           *(undefined4 *)(param_1 + 0x24c),uVar4,0);
        if (-1 < iVar3) {
          if (iVar3 == 0) {
            iVar3 = (**(code **)(**(int **)(param_1 + 0x43c) + 0x30))
                              (*(int **)(param_1 + 0x43c),&local_28);
            if (iVar3 == 0x4e012) {
LAB_011a1219:
              local_24 = 0;
              local_28 = uVar4;
            }
          }
          else if ((iVar3 == 0x4e012) || (iVar3 == 0x4e014)) goto LAB_011a1219;
          uVar4 = *(uint *)(param_1 + 0x248);
          *(uint *)(param_1 + 0x248) = uVar4 + local_28;
          uStack_c = 0;
          *(uint *)(param_1 + 0x24c) =
               *(int *)(param_1 + 0x24c) + local_24 + (uint)CARRY4(uVar4,local_28);
          uStack_10 = *(undefined4 *)(*(int *)(param_1 + 0x228) + 0x4c2);
          uVar2 = ftol();
          iVar5 = 0;
          do {
            iVar3 = FUN_011b2a70(uVar2);
            iVar5 = iVar5 + 1;
          } while (iVar5 < local_30);
        }
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x414));
    if (!bVar1) {
      return iVar3;
    }
  } while( true );
}


