/* Module: rmbe3260.dll
   Function: FUN_6601d7f0
   Address: 6601d7f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_6601d7f0(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *this;
  undefined4 local_24 [5];
  int local_10 [3];
  
  uVar5 = 0;
  FUN_660522e0(local_24);
  piVar1 = FUN_6604fb50(0);
  if (piVar1 == (int *)0x0) {
    uVar5 = 0x8007000e;
  }
  else {
    this = (undefined4 *)(param_1 + 0xd8);
    iVar2 = FUN_6605bc10(this,0x104);
    if (iVar2 == 0) {
      uVar5 = 0x8007000e;
    }
    else {
      (**(code **)(*piVar1 + 8))(&DAT_6606dbd8,iVar2);
      FUN_6605bc90(this,-1);
      FUN_66052ae0(local_24,(char *)*this);
      uVar3 = FUN_6605bf70(this,'\\');
      if (-1 < (int)uVar3) {
        piVar4 = FUN_6605bf20(this,local_10,uVar3);
        FUN_6605b900(this,piVar4);
        FUN_6605b770(local_10);
      }
    }
  }
  if (piVar1 != (int *)0x0) {
    (**(code **)*piVar1)(1);
  }
  FUN_66052300(local_24);
  return uVar5;
}


