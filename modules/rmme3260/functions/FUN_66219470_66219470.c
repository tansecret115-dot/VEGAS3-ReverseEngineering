/* Module: rmme3260.dll
   Function: FUN_66219470
   Address: 66219470
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_66219470(void *this)

{
  int iVar1;
  int iVar2;
  undefined4 *in_stack_00000010;
  undefined2 *in_stack_00000014;
  byte *in_stack_ffffffe8;
  
  iVar2 = 0;
  FUN_66250110(&stack0xffffffe8,(int *)&stack0x00000004);
  iVar1 = FUN_662193b0(this,in_stack_ffffffe8);
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
  FUN_66250210((int *)&stack0x00000004);
  return iVar2;
}


