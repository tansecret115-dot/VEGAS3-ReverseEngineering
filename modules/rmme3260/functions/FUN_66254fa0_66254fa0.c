/* Module: rmme3260.dll
   Function: FUN_66254fa0
   Address: 66254fa0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66254fa0(void *this,ushort param_1)

{
  ushort uVar1;
  short sVar2;
  void *pvVar3;
  uint extraout_EDX;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  
  if (*(ushort *)((int)this + 0x14) == *(ushort *)((int)this + 0x18)) {
    return 0;
  }
  iVar5 = *(int *)((int)this + 0xc) - *(int *)((int)this + 8);
  if (iVar5 < 0) {
    uVar6 = (uint)*(ushort *)((int)this + 0x14);
  }
  else {
    uVar6 = 0;
  }
  uVar6 = iVar5 + uVar6;
  sVar2 = (*(code *)**(undefined4 **)this)();
  uVar4 = sVar2 * param_1 + 1 + (short)uVar6;
  if (uVar4 < *(ushort *)((int)this + 0x14)) {
    return 0;
  }
  uVar1 = *(ushort *)((int)this + 0x18);
  if ((uVar1 != 0) && (uVar1 < uVar4)) {
    return 0;
  }
  param_1 = 0xffff;
  do {
    if (param_1 < uVar4) break;
    param_1 = param_1 >> 1;
  } while (param_1 != 0);
  if (param_1 == 0) {
    return 0;
  }
  uVar4 = param_1 * 2 + 1;
  if ((uVar1 != 0) && (uVar1 < uVar4)) {
    uVar4 = uVar1;
  }
  pvVar3 = operator_new((uint)uVar4);
  FUN_66254f50((int)this,extraout_EDX,(undefined4 *)((int)pvVar3 + 1),uVar6);
  operator_delete(*(void **)((int)this + 4));
  *(ushort *)((int)this + 0x14) = uVar4;
  *(void **)((int)this + 4) = pvVar3;
  *(void **)((int)this + 8) = pvVar3;
  *(uint *)((int)this + 0x10) = (int)pvVar3 + (uint)uVar4;
  *(uint *)((int)this + 0xc) = (int)pvVar3 + (uVar6 & 0xffff);
  return 1;
}


