/* Module: pngu3266.dll
   Function: FUN_6061af80
   Address: 6061af80
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_6061af80(void *this,undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  DWORD DVar4;
  DWORD DVar5;
  int iVar6;
  uint uVar7;
  
  uVar7 = 0;
  puVar2 = *(undefined4 **)((int)this + 0x18);
  if ((puVar2 != (undefined4 *)0x0) && (*(int *)((int)this + 0xc) == 0)) {
    (**(code **)*puVar2)(puVar2,&DAT_6062bf28,(int)this + 0xc);
  }
  piVar1 = (int *)((int)this + 0x10);
  if ((*(int *)((int)this + 0x10) == 0) &&
     (piVar3 = *(int **)((int)this + 0xc), piVar3 != (int *)0x0)) {
    (**(code **)(*piVar3 + 0xc))(piVar3,piVar1);
  }
  piVar3 = (int *)*piVar1;
  if (piVar3 != (int *)0x0) {
    *(undefined4 *)((int)this + 0x1c) = 0;
    *(undefined4 *)((int)this + 0x20) = 0;
    if (this == (void *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = (int)this + 8;
    }
    (**(code **)(*piVar3 + 0xc))(piVar3,iVar6);
    (**(code **)(*(int *)*piVar1 + 0x18))((int *)*piVar1,param_1,param_2);
    DVar4 = GetTickCount();
    iVar6 = *(int *)((int)this + 0x20);
    while (((iVar6 == 0 && (*(int *)((int)this + 0x1c) == 0)) && (uVar7 < *(uint *)((int)this + 4)))
          ) {
      (**(code **)(*(int *)this + 8))(1000);
      DVar5 = GetTickCount();
      if (DVar5 < DVar4) {
        uVar7 = (DVar5 - DVar4) - 1;
      }
      else {
        uVar7 = DVar5 - DVar4;
      }
      iVar6 = *(int *)((int)this + 0x20);
    }
    iVar6 = *(int *)((int)this + 0x1c);
    (**(code **)(*(int *)*piVar1 + 8))((int *)*piVar1);
    *piVar1 = 0;
    return iVar6;
  }
  return 0;
}


