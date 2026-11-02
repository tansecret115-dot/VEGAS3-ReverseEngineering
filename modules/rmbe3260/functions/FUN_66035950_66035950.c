/* Module: rmbe3260.dll
   Function: FUN_66035950
   Address: 66035950
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_66035950(void *this)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int in_stack_00000010;
  ushort in_stack_00000014;
  undefined4 *in_stack_00000018;
  byte *in_stack_ffffffe4;
  
  iVar4 = 0;
  FUN_6605b670(&stack0xffffffe4,(int *)&stack0x00000004);
  iVar2 = FUN_66035890(this,in_stack_ffffffe4);
  if (iVar2 == 0) {
    iVar4 = -0x7ffbfd7f;
  }
  if (iVar4 == 0) {
    if (iVar2 != 0) {
      if (in_stack_00000010 != *(int *)(iVar2 + 0xb)) {
        iVar4 = -0x7ffbfd7c;
      }
      if (in_stack_00000014 < *(ushort *)(iVar2 + 0xf)) {
        iVar4 = -0x7ffbfff3;
      }
    }
    if (iVar4 == 0) {
      uVar1 = *(ushort *)(iVar2 + 0xf);
      puVar5 = *(undefined4 **)(iVar2 + 0x11);
      for (uVar3 = (uint)(uVar1 >> 2); uVar3 != 0; uVar3 = uVar3 - 1) {
        *in_stack_00000018 = *puVar5;
        puVar5 = puVar5 + 1;
        in_stack_00000018 = in_stack_00000018 + 1;
      }
      for (uVar3 = uVar1 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)in_stack_00000018 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        in_stack_00000018 = (undefined4 *)((int)in_stack_00000018 + 1);
      }
    }
  }
  FUN_6605b770((int *)&stack0x00000004);
  return iVar4;
}


