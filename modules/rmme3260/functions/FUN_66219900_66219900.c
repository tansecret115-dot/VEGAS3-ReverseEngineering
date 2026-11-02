/* Module: rmme3260.dll
   Function: FUN_66219900
   Address: 66219900
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_66219900(void *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *in_stack_ffffffe0;
  int local_10 [3];
  
  iVar1 = FUN_66250890(&stack0x00000004,s_logical__6626f798);
  if (iVar1 != 0) {
    in_stack_ffffffe0 = local_10;
    piVar2 = FUN_66250550(in_stack_ffffffe0,s_logical__6626f798,(undefined4 *)&stack0x00000004);
    FUN_662503a0(&stack0x00000004,piVar2);
    FUN_66250210(local_10);
  }
  FUN_66250110(&stack0xffffffe0,(int *)&stack0x00000004);
  uVar3 = FUN_662181a0(param_1,in_stack_ffffffe0);
  FUN_66250210((int *)&stack0x00000004);
  return uVar3;
}


