/* Module: vegas30k.dll
   Function: FUN_011a0ee0
   Address: 011a0ee0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_011a0ee0(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  bool bVar4;
  undefined8 uVar5;
  uint local_28;
  int local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  int local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 local_4;
  
  if ((param_3 == 0x10) && (*(int *)(param_1 + 8) != 0)) {
    do {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x414));
      iVar1 = FUN_011b2fd0(param_2,0x10,param_4,param_5,param_6,param_7);
      bVar4 = iVar1 == 1;
      if (bVar4) {
        iVar1 = *(int *)(*(int *)(param_1 + 0x228) + 0x4c2);
        if (iVar1 == 0) {
          uVar5 = 0;
        }
        else {
          local_20 = param_7;
          uStack_1c = 0;
          uStack_14 = 0;
          local_18 = iVar1;
          uVar5 = ftol();
        }
        local_4 = (undefined4)((ulonglong)uVar5 >> 0x20);
        uVar3 = (uint)uVar5;
        local_24 = 0;
        local_28 = uVar3;
        (**(code **)(**(int **)(param_1 + 0x43c) + 0x18))(*(int **)(param_1 + 0x43c),0,0);
        (**(code **)(**(int **)(param_1 + 0x43c) + 0x34))
                  (*(int **)(param_1 + 0x43c),*(undefined4 *)(param_1 + 0x248),
                   *(undefined4 *)(param_1 + 0x24c));
        iVar1 = (**(code **)(param_1 + 0x14))
                          (param_1,0x1b,*(undefined4 *)(param_1 + 0x18),0xffffffff,
                           *(undefined4 *)(param_1 + 0x43c),0,0,*(undefined4 *)(param_1 + 0x248),
                           *(undefined4 *)(param_1 + 0x24c),uVar3,0);
        if (-1 < iVar1) {
          if ((iVar1 == 0) &&
             (iVar1 = (**(code **)(**(int **)(param_1 + 0x43c) + 0x30))
                                (*(int **)(param_1 + 0x43c),&local_28), iVar1 == 0x4e012)) {
            local_24 = 0;
            local_28 = uVar3;
          }
          uVar3 = *(uint *)(param_1 + 0x248);
          *(uint *)(param_1 + 0x248) = uVar3 + local_28;
          uStack_c = 0;
          *(uint *)(param_1 + 0x24c) =
               *(int *)(param_1 + 0x24c) + local_24 + (uint)CARRY4(uVar3,local_28);
          uStack_10 = *(undefined4 *)(*(int *)(param_1 + 0x228) + 0x4c2);
          uVar2 = ftol();
          iVar1 = FUN_011b2a70(uVar2);
        }
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x414));
    } while (bVar4);
    return iVar1;
  }
  return -0x7fff0001;
}


