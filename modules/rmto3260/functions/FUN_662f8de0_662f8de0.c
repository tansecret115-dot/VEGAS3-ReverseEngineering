/* Module: rmto3260.dll
   Function: FUN_662f8de0
   Address: 662f8de0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall
FUN_662f8de0(void *this,short *param_1,uint param_2,short *param_3,uint param_4)

{
  int *piVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  
  piVar1 = (int *)((int)this + 4);
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(uint *)((int)this + 0x18) = param_2;
  *(short *)((int)this + 0x1c) = param_1[4];
  *(short *)((int)this + 0x1e) = param_3[4];
  uVar2 = *(ushort *)((int)this + 0x1c);
  sVar3 = param_3[3];
  *(short *)((int)this + 0x20) = sVar3;
  if (((((uVar2 == 1) && (1 < *(ushort *)((int)this + 0x1e))) || (*param_1 != 1)) ||
      ((*param_3 != 1 || (param_1[3] != 0x10)))) || ((sVar3 != 0x10 && (sVar3 != 8)))) {
    *(undefined4 *)this = 0x80040004;
  }
  else {
    iVar4 = FUN_662fd010(*(int *)(param_1 + 1),(uint)uVar2,*(int *)(param_3 + 1),
                         (uint)*(ushort *)((int)this + 0x1e),(param_2 >> 1) / (uint)uVar2,piVar1);
    uVar5 = iVar4 * (uint)*(ushort *)((int)this + 0x1e) * 2;
    *(uint *)((int)this + 0xc) = uVar5;
    if ((uVar5 == 0) || (*piVar1 == 0)) {
      *(undefined4 *)this = 0x8007000e;
      return this;
    }
    if (*(short *)((int)this + 0x20) == 8) {
      param_4 = param_4 * 2;
    }
    if (uVar5 < param_4) {
      *(uint *)((int)this + 0xc) = param_4;
    }
    uVar5 = *(int *)((int)this + 0xc) << 1;
    *(uint *)((int)this + 0xc) = uVar5;
    pvVar6 = operator_new(uVar5);
    *(void **)((int)this + 8) = pvVar6;
    if (pvVar6 == (void *)0x0) {
      *(undefined4 *)this = 0x8007000e;
      return this;
    }
  }
  return this;
}


