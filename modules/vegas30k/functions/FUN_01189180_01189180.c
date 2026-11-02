/* Module: vegas30k.dll
   Function: FUN_01189180
   Address: 01189180
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall
FUN_01189180(int *param_1,undefined4 param_2,code *param_3,int param_4,undefined4 param_5,
            uint param_6,int param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10,
            undefined4 param_11,uint param_12,undefined4 param_13,undefined4 param_14,
            undefined4 param_15)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  longlong lVar6;
  uint local_10;
  uint local_8;
  int local_4;
  
  lVar1 = CONCAT44(param_11,param_10);
  ResetEvent((HANDLE)param_1[0x199]);
  local_10 = FUN_01188be0(param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                          param_11,param_12,param_13,param_14,param_15);
  if (local_10 != 0xfffffffd) {
    local_8 = param_12;
    local_10 = 0;
    lVar2 = 0;
    local_4 = 0;
    if (param_12 != 0) {
      while( true ) {
        local_10 = (uint)lVar2;
        param_10 = (undefined4)lVar1;
        lVar6 = FUN_011a06f0(*(ushort *)(param_4 + 0xc) * local_10 + param_7,param_4,local_8,local_4
                            );
        if (lVar6 == 0) break;
        if ((param_6 & 0x20000000) != 0) {
          FUN_011973b0(param_10);
        }
        iVar3 = (*param_3)(param_1,0x33,param_1[0x148],param_4,
                           *(ushort *)(param_4 + 0xc) * local_10 + param_7,0,param_8,param_9,lVar1,
                           lVar6,param_13,param_14,param_15);
        if (iVar3 == -3) break;
        if ((param_1[100] == 0) && (param_1[0x65] == 0)) {
          uVar4 = 0;
        }
        else {
          uVar4 = 1;
        }
        (**(code **)(*param_1 + 0xa8))
                  (param_1,lVar1,*(ushort *)(param_4 + 0xc) * local_10 + param_7,lVar6,0,0x3ff00000,
                   0,param_6 & 0x10000000,uVar4);
        param_6 = param_6 & 0xefffffff;
        lVar1 = lVar6 + lVar1;
        bVar5 = local_8 < (uint)lVar6;
        local_8 = local_8 - (uint)lVar6;
        local_4 = (local_4 - (int)((ulonglong)lVar6 >> 0x20)) - (uint)bVar5;
        lVar2 = lVar6 + lVar2;
        local_10 = (uint)lVar2;
        if ((-1 < lVar2) && ((0xffffffff < lVar2 || (param_12 <= local_10)))) break;
      }
    }
  }
  SetEvent((HANDLE)param_1[0x199]);
  return local_10;
}


