/* Module: rmto3260.dll
   Function: FUN_662dfd50
   Address: 662dfd50
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_662dfd50(void *this)

{
  int iVar1;
  int iVar2;
  undefined4 *in_stack_00000010;
  undefined2 *in_stack_00000014;
  byte *in_stack_ffffffe8;
  
  iVar2 = 0;
  FUN_662eeff0(&stack0xffffffe8,(int *)&stack0x00000004);
  iVar1 = FUN_662dfc90(this,in_stack_ffffffe8);
  if (iVar1 == 0) {
    iVar2 = -0x7ffbfd7f;
  }
  if (iVar2 == 0) {
    if (in_stack_00000010 != (undefined4 *)0x0) {
      *in_stack_00000010 = *(undefined4 *)(iVar1 + 0xb);
    }
    if (in_stack_00000014 != (undefined2 *)0x0) {
      *in_stack_00000014 = *(undefined2 *)(iVar1 + 0xf);
    }
  }
  FUN_662ef0f0((int *)&stack0x00000004);
  return iVar2;
}


