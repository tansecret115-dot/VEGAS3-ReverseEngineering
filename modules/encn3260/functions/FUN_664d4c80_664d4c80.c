/* Module: encn3260.dll
   Function: FUN_664d4c80
   Address: 664d4c80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_664d4c80(void *this,int *param_1)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 uVar4;
  void *pvVar5;
  
  if (param_1 != (int *)0x0) {
    uVar1 = *(uint *)param_1[7];
    uVar2 = *(uint *)(uVar1 + 4);
    if ((-(uint)(uVar2 != uVar1) & uVar2) != 0) {
      pvVar5 = (void *)(-(uint)(uVar2 != uVar1) & uVar2);
      pvVar3 = *(void **)((int)pvVar5 + 8);
      if (pvVar3 != (void *)0x0) {
        operator_delete(pvVar3);
      }
      uVar4 = FUN_664d4ce0(this,param_1,pvVar5);
      return uVar4;
    }
  }
  return 0;
}


