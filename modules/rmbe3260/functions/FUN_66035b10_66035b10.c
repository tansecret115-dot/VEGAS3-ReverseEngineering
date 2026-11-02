/* Module: rmbe3260.dll
   Function: FUN_66035b10
   Address: 66035b10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_66035b10(void *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *in_stack_ffffffe0;
  int local_10 [3];
  
  iVar1 = FUN_6605bfa0(&stack0x00000004,s_logical__6606e160);
  if (iVar1 != 0) {
    in_stack_ffffffe0 = local_10;
    piVar2 = FUN_6605bab0(in_stack_ffffffe0,s_logical__6606e160,(undefined4 *)&stack0x00000004);
    FUN_6605b900(&stack0x00000004,piVar2);
    FUN_6605b770(local_10);
  }
  FUN_6605b670(&stack0xffffffe0,(int *)&stack0x00000004);
  uVar3 = FUN_66034930(param_1,in_stack_ffffffe0);
  FUN_6605b770((int *)&stack0x00000004);
  return uVar3;
}


