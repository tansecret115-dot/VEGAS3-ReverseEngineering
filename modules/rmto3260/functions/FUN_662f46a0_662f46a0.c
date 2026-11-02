/* Module: rmto3260.dll
   Function: FUN_662f46a0
   Address: 662f46a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_662f46a0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_24 [5];
  char *local_10 [3];
  
  iVar1 = (**(code **)(*(int *)this + 0xc))();
  if (iVar1 != 0) {
    if (param_1 != 0) {
      FUN_662eefd0(local_10);
      iVar1 = *(int *)this;
      uVar3 = 0x104;
      iVar2 = FUN_662ef590(local_10,0x105);
      iVar1 = (**(code **)(iVar1 + 0x28))(&DAT_6630b5cc,iVar2,uVar3);
      FUN_662ef610(local_10,-1);
      while (iVar1 != 2) {
        if (iVar1 == 0) {
          (**(code **)(*(int *)this + 0x14))(local_10[0]);
        }
        else if (iVar1 == 1) {
          FUN_662f30d0(local_24);
          FUN_662f3120(local_24,local_10[0]);
          FUN_662f46a0(local_24,1);
          FUN_662f30f0(local_24);
        }
        iVar1 = *(int *)this;
        uVar3 = 0x104;
        iVar2 = FUN_662ef590(local_10,0x105);
        iVar1 = (**(code **)(iVar1 + 0x2c))(iVar2,uVar3);
        FUN_662ef610(local_10,-1);
      }
      FUN_662ef0f0((int *)local_10);
    }
    uVar3 = (**(code **)(*(int *)this + 0x34))();
    return uVar3;
  }
  return 1;
}


