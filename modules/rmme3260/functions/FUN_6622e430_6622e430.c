/* Module: rmme3260.dll
   Function: FUN_6622e430
   Address: 6622e430
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6622e430(void *this,undefined4 *param_1,uint param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = *(ushort *)((int)this + 0x14);
  iVar4 = *(int *)((int)this + 0xc) - *(int *)((int)this + 8);
  uVar3 = (uint)uVar2;
  if (-1 < iVar4) {
    uVar3 = 0;
  }
  uVar1 = (*(code *)**(undefined4 **)this)();
  if ((ushort)((ulonglong)(((uint)uVar2 - (iVar4 + uVar3)) - 1 & 0xffff) /
              (ulonglong)(longlong)(int)(uint)uVar1) < (ushort)param_2) {
    FUN_66254fa0(this,(ushort)param_2);
  }
  uVar2 = (*(code *)**(undefined4 **)this)();
  if (uVar2 < 2) {
    FUN_662550b0(this,param_1,param_2);
    return;
  }
  iVar4 = (*(code *)**(undefined4 **)this)();
  FUN_662550b0(this,param_1,iVar4 * param_2);
  return;
}


