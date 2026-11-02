/* Module: aifplug.dll
   Function: FUN_5fbd32c0
   Address: 5fbd32c0
   Source: Ghidra pseudocode (Stage 10 batch) */


longlong __fastcall
FUN_5fbd32c0(int param_1,uint param_2,uint param_3,int param_4,int param_5,uint *param_6)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar2 = param_3;
  if (param_5 != 0) {
    if (param_5 == 1) {
      param_4 = *(int *)(param_1 + 0x2c) + param_4 + (uint)CARRY4(*(uint *)(param_1 + 0x28),param_3)
      ;
      uVar2 = *(uint *)(param_1 + 0x28) + param_3;
      param_2 = param_3;
    }
    else {
      if (param_5 != 2) {
        return CONCAT44(param_2,0x80070057);
      }
      param_4 = (*(int *)(param_1 + 0x34) - param_4) - (uint)(*(uint *)(param_1 + 0x30) < param_3);
      uVar2 = *(uint *)(param_1 + 0x30) - param_3;
      param_2 = param_3;
    }
  }
  if ((uVar2 != *(uint *)(param_1 + 0x28)) || (param_4 != *(int *)(param_1 + 0x2c))) {
    iVar1 = *(int *)(param_1 + 0x50);
    *(uint *)(param_1 + 0x28) = uVar2;
    *(int *)(param_1 + 0x2c) = param_4;
    if (iVar1 != 0) {
      lVar3 = __allmul((uint)*(ushort *)(iVar1 + 0xc),0,uVar2,param_4);
      param_2 = (uint)((ulonglong)lVar3 >> 0x20);
      *(longlong *)(param_1 + 0x48) = lVar3;
      if (iVar1 != 0) {
        uVar4 = __alldiv(*(uint *)(param_1 + 0x48),*(uint *)(param_1 + 0x4c),
                         (uint)*(ushort *)(iVar1 + 0xc),0);
        param_2 = (uint)((ulonglong)uVar4 >> 0x20);
        *(int *)(param_1 + 0x84) = (int)uVar4;
      }
    }
  }
  if (param_6 != (uint *)0x0) {
    param_2 = *(uint *)(param_1 + 0x28);
    *param_6 = param_2;
    param_6[1] = *(uint *)(param_1 + 0x2c);
  }
  return (ulonglong)param_2 << 0x20;
}


