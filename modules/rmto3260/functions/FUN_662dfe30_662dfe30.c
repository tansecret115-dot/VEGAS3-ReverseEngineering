/* Module: rmto3260.dll
   Function: FUN_662dfe30
   Address: 662dfe30
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_662dfe30(void *this)

{
  int iVar1;
  uint *puVar2;
  uint *in_stack_00000010;
  undefined1 auStack_28 [12];
  undefined4 uStack_1c;
  undefined4 uStack_18;
  byte *pbStack_14;
  byte local_c;
  undefined1 local_b;
  undefined1 uStack_a;
  ushort uStack_9;
  
  pbStack_14 = &local_c;
  uStack_18 = 4;
  uStack_1c = 0;
  FUN_662eeff0(auStack_28,(int *)&stack0x00000004);
  iVar1 = FUN_662dfdb0(this);
  if (iVar1 == 0) {
    puVar2 = in_stack_00000010;
    if (&stack0x00000000 != (undefined1 *)0xc) {
      puVar2 = (uint *)((((uint)local_c << 8 | CONCAT11(uStack_a,local_b) & 0xff) << 8 |
                        CONCAT21(uStack_9,uStack_a) & 0xff) << 8 | uStack_9 & 0xff);
    }
    *in_stack_00000010 = (uint)puVar2;
  }
  pbStack_14 = (byte *)0x662dfea1;
  FUN_662ef0f0((int *)&stack0x00000004);
  return iVar1;
}


