/* Module: encn3260.dll
   Function: FUN_66494670
   Address: 66494670
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_66494670(void *this,int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  void *extraout_ECX;
  void *pvVar4;
  
  pvVar4 = this;
  if (*(int *)((int)this + 0x20) == 0) {
    FUN_66494870(this,(short)param_1[1]);
    pvVar4 = extraout_ECX;
  }
  iVar1 = FUN_664946e0(this,CONCAT22((short)((uint)pvVar4 >> 0x10),(short)param_1[1]),0);
  if (iVar1 == 0) {
    (**(code **)*param_1)(param_1);
    uVar2 = (**(code **)(*param_1 + 0x14))();
    uVar3 = FUN_66494890(this,(uint)*(ushort *)((int)this + 0x14),uVar2);
    pvVar4 = *(void **)this;
    uVar2 = *(uint *)((int)pvVar4 + 0xc);
    while (uVar2 < uVar3) {
      FUN_664c04f0(pvVar4,0);
      pvVar4 = *(void **)this;
      uVar2 = *(uint *)((int)pvVar4 + 0xc);
    }
    FUN_664c04f0(*(void **)this,param_1);
  }
  return;
}


