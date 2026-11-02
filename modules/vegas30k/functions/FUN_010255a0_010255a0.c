/* Module: vegas30k.dll
   Function: FUN_010255a0
   Address: 010255a0
   Source: Ghidra pseudocode (Stage 10 batch) */


HRESULT FUN_010255a0(int *param_1)

{
  LARGE_INTEGER dlibMove;
  HRESULT HVar1;
  int *unaff_EDI;
  undefined4 unaff_retaddr;
  int *piStack_58;
  int *in_stack_ffffffac;
  uint uVar2;
  undefined4 uVar3;
  LPSTREAM This;
  undefined4 uVar4;
  ULARGE_INTEGER *plibNewPosition;
  LPSTREAM local_8;
  LPSTREAM local_4;
  
  local_8 = (LPSTREAM)0x0;
  local_4 = (IStream *)0x0;
  HVar1 = CreateStreamOnHGlobal((HGLOBAL)0x0,1,&local_8);
  if (-1 < HVar1) {
    HVar1 = CreateStreamOnHGlobal((HGLOBAL)0x0,1,&local_4);
    if (-1 < HVar1) {
      (**(code **)(*param_1 + 0xc))(param_1,1);
      plibNewPosition = (ULARGE_INTEGER *)0x0;
      (**(code **)(*unaff_EDI + 0x10))(unaff_EDI,unaff_retaddr,param_1);
      uVar4 = 0;
      This = local_4;
      (**(code **)((plibNewPosition->s).LowPart + 0x10))(plibNewPosition,local_8,local_4,0);
      dlibMove.s.HighPart = 0;
      dlibMove.s.LowPart = DAT_011db9c4;
      (*This->lpVtbl->Seek)(This,dlibMove,0,plibNewPosition);
      uVar3 = 0;
      uVar2 = DAT_011db9c4;
      (**(code **)(*unaff_EDI + 0x14))(unaff_EDI,DAT_011db9c0,DAT_011db9c4,0,0);
      in_stack_ffffffac = param_1;
      piStack_58 = unaff_EDI;
      (**(code **)(*param_1 + 0x1c))(param_1,uVar2,uVar3);
      (**(code **)(*param_1 + 0x20))(param_1,uVar4);
      goto LAB_01025683;
    }
  }
  (**(code **)(*param_1 + 0xc))(param_1,0);
LAB_01025683:
  if (piStack_58 != (int *)0x0) {
    (**(code **)(*piStack_58 + 8))(piStack_58);
  }
  if (in_stack_ffffffac != (int *)0x0) {
    (**(code **)(*in_stack_ffffffac + 8))(in_stack_ffffffac);
  }
  return HVar1;
}


