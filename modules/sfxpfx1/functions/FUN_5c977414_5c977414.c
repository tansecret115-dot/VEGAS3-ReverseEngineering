/* Module: sfxpfx1.dll
   Function: FUN_5c977414
   Address: 5c977414
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __thiscall
FUN_5c977414(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            short *param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  
  FUN_5c97a66e(this,param_1,0);
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  FUN_5c97c485((undefined4 *)((int)this + 0x1c));
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 100) = param_6;
  *(undefined4 *)((int)this + 0x68) = param_3;
  *(undefined4 *)((int)this + 0x70) = param_2;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 1;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0xffffffff;
  *(undefined4 *)((int)this + 0x8c) = 0x7fffffff;
  *(undefined8 *)((int)this + 0x90) = 0x3ff0000000000000;
  if (param_5 != (short *)0x0) {
    iVar1 = FUN_5c97b7d2(param_5);
    uVar4 = (iVar1 + 1U) * 2;
    puVar2 = (undefined4 *)FUN_5c942900(uVar4);
    *(undefined4 **)((int)this + 0x14) = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      for (uVar3 = (iVar1 + 1U & 0x7fffffff) >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar2 = *(undefined4 *)param_5;
        param_5 = param_5 + 2;
        puVar2 = puVar2 + 1;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(char *)puVar2 = (char)*param_5;
        param_5 = (short *)((int)param_5 + 1);
        puVar2 = (undefined4 *)((int)puVar2 + 1);
      }
    }
  }
  return this;
}


