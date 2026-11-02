/* Module: rmbe3260.dll
   Function: FUN_66001430
   Address: 66001430
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66001430(void *this,uint param_1)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 1;
  if ((param_1 != DAT_66075000) && (iVar3 = (**(code **)(*(int *)this + 0x17c))(), iVar3 != 0)) {
    (**(code **)(*(int *)this + 0x188))();
    DAT_66075000 = param_1;
  }
  if ((DAT_66075000 < 9) &&
     (iVar1 = (**(code **)(**(int **)((int)this + 0x108) + 0x134))(),
     DAT_66075000 != *(uint *)((int)this + iVar1 * 4 + 0x12a))) {
    iVar1 = 0;
    puVar2 = (uint *)((int)this + 0x12a);
    do {
      iVar4 = iVar1;
      if (*puVar2 == DAT_66075000) break;
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 1;
      iVar4 = 0;
    } while (iVar1 < 9);
    (**(code **)(**(int **)((int)this + 0x108) + 0x13c))(iVar4);
  }
  if (iVar3 != 0) {
    (**(code **)(*(int *)this + 0x184))(param_1);
  }
  return 1;
}


