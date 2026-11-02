/* Module: rmto3260.dll
   Function: FUN_662dfbf0
   Address: 662dfbf0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_662dfbf0(void *this)

{
  int iVar1;
  undefined4 in_stack_00000010;
  undefined4 *in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  undefined4 in_stack_ffffffe8;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  puVar4 = &stack0x00000010;
  uVar3 = 4;
  uVar2 = 0;
  in_stack_00000010 =
       CONCAT13((char)in_stack_00000010,
                CONCAT12((char)((uint)in_stack_00000010 >> 8),
                         (short)CONCAT21((short)((uint)in_stack_00000010 >> 0x10),
                                         (char)((uint)in_stack_00000010 >> 0x18))));
  FUN_662eeff0(&stack0xffffffe0,(int *)&stack0x00000004);
  iVar1 = FUN_662dfa80(this,in_stack_ffffffe0,in_stack_ffffffe4,in_stack_ffffffe8,uVar2,uVar3,puVar4
                      );
  FUN_662ef0f0((int *)&stack0x00000004);
  return iVar1;
}


