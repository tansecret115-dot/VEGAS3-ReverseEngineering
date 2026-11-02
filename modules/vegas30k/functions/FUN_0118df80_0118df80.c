/* Module: vegas30k.dll
   Function: FUN_0118df80
   Address: 0118df80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0118df80(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  uVar5 = FUN_0118e3a0(param_2,param_3);
  iVar3 = *(uint *)(param_1 + 0x48) + (uint)uVar5;
  iVar2 = *(int *)(param_1 + 0x4c) + (int)((ulonglong)uVar5 >> 0x20) +
          (uint)CARRY4(*(uint *)(param_1 + 0x48),(uint)uVar5);
  *(int *)(param_1 + 0x40) = iVar3;
  *(int *)(param_1 + 0x44) = iVar2;
  lVar6 = __allrem(iVar3,iVar2,0x18,0);
  if (lVar6 != 0) {
    uVar4 = 0x18 - (uint)lVar6;
    uVar1 = *(uint *)(param_1 + 0x40);
    *(uint *)(param_1 + 0x40) = uVar1 + uVar4;
    *(uint *)(param_1 + 0x44) =
         *(int *)(param_1 + 0x44) + (-(uint)(0x18 < (uint)lVar6) - (int)((ulonglong)lVar6 >> 0x20))
         + (uint)CARRY4(uVar1,uVar4);
  }
  uVar5 = __alldiv(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),0x18,0);
  *(undefined8 *)(param_1 + 0x40) = uVar5;
  uVar5 = __allmul(*(undefined4 *)(param_1 + 0x40),(int)((ulonglong)uVar5 >> 0x20),0x18,0);
  *(undefined8 *)(param_1 + 0x40) = uVar5;
  uVar5 = __alldiv(*(undefined4 *)(param_1 + 0x40),(int)((ulonglong)uVar5 >> 0x20),6,0);
  *(undefined8 *)(param_1 + 0x40) = uVar5;
  uVar5 = __allmul(*(undefined4 *)(param_1 + 0x40),(int)((ulonglong)uVar5 >> 0x20),6,0);
  *(undefined8 *)(param_1 + 0x40) = uVar5;
  uVar5 = __alldiv(*(undefined4 *)(param_1 + 0x40),(int)((ulonglong)uVar5 >> 0x20),0x18,0);
  *(undefined8 *)(param_1 + 0x40) = uVar5;
  uVar5 = __allmul(*(undefined4 *)(param_1 + 0x40),(int)((ulonglong)uVar5 >> 0x20),0x18,0);
  *(undefined8 *)(param_1 + 0x40) = uVar5;
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x40);
  *(int *)(param_1 + 0x54) = (int)((ulonglong)uVar5 >> 0x20);
  return 0;
}


