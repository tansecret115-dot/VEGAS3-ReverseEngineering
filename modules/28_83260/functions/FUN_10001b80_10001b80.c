/* Module: 28_83260.dll
   Function: FUN_10001b80
   Address: 10001b80
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_10001b80(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  FUN_10001dc0(param_3,0x24,0x28,0x23,(float *)((int)this + 0x484),param_1,
               (float *)((int)this + 0x640),0x10008ce0,(float *)((int)this + 0x3f0),0.5625);
  iVar1 = FUN_10002040((float *)((int)this + 0x640),(undefined4 *)((int)this + 0x768),param_3);
  if (iVar1 != 0) {
    puVar3 = (undefined4 *)((int)this + 0x768);
    puVar4 = (undefined4 *)((int)this + 0x6d4);
    for (uVar2 = param_3 * 4 + 4U >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    FUN_100021c0((int)this + 0x6d4,param_2,param_3,(int)this + 0x1d4);
  }
  return;
}


