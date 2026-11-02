/* Module: rmto3260.dll
   Function: FUN_662e0010
   Address: 662e0010
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_662e0010(void *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *in_stack_ffffffe0;
  int local_10 [3];
  
  iVar1 = FUN_662ef820(&stack0x00000004,s_logical__6630a12c);
  if (iVar1 != 0) {
    in_stack_ffffffe0 = local_10;
    piVar2 = FUN_662ef430(in_stack_ffffffe0,s_logical__6630a12c,(undefined4 *)&stack0x00000004);
    FUN_662ef280(&stack0x00000004,piVar2);
    FUN_662ef0f0(local_10);
  }
  FUN_662eeff0(&stack0xffffffe0,(int *)&stack0x00000004);
  uVar3 = FUN_662ded20(param_1,in_stack_ffffffe0);
  FUN_662ef0f0((int *)&stack0x00000004);
  return uVar3;
}


