/* Module: rmbe3260.dll
   Function: FUN_66058570
   Address: 66058570
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall FUN_66058570(void *this,char *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  LSTATUS LVar4;
  undefined4 local_54 [10];
  undefined4 local_2c [10];
  
  if (*(int *)((int)this + 0x24) != 0) {
    FUN_66058440(local_2c);
    FUN_66058440(local_54);
    FUN_66058680(local_2c,*(undefined4 *)((int)this + 8));
    FUN_660586a0(local_2c,param_1);
    FUN_66058660(local_2c,0xc);
    uVar1 = FUN_660584c0((int)local_2c);
    if (-1 < (int)uVar1) {
      FUN_660586e0((int)local_2c);
      iVar2 = FUN_66058700(local_2c,local_54);
      while (iVar2 != 0) {
        puVar3 = (undefined4 *)FUN_660586d0((int)local_54);
        FUN_66058570(local_2c,(char *)*puVar3);
        FUN_660586e0((int)local_2c);
        iVar2 = FUN_66058700(local_2c,local_54);
      }
      FUN_66058540((int)local_2c);
      LVar4 = RegDeleteKeyA(*(HKEY *)((int)this + 8),param_1);
      if (LVar4 == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = RegDeleteKeyA(*(HKEY *)((int)this + 8),param_1);
        uVar1 = uVar1 & 0xffff | 0x80070000;
      }
    }
    FUN_660584a0(local_54);
    FUN_660584a0(local_2c);
    return uVar1;
  }
  return 0x80040009;
}


