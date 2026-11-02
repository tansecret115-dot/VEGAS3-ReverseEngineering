/* Module: encn3260.dll
   Function: FUN_664cb010
   Address: 664cb010
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_664cb010(void *this,uint param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  short sVar3;
  uint uVar4;
  int *this_00;
  CHAR local_68 [100];
  
  piVar1 = param_2;
  uVar4 = (uint)param_2 >> 0x10;
  iVar2 = FUN_664c3eb0(*(void **)((int)this + 0x1c),param_1,(int *)&param_2);
  this_00 = (int *)0x0;
  if (iVar2 != 0) {
    this_00 = param_2;
  }
  if (this_00 != (int *)0x0) {
    sVar3 = (short)((uint)piVar1 >> 0x10);
    if (sVar3 != 0) {
      wsprintfA(local_68,s_Got_error__d_from_Winsock_664eff4c,uVar4);
    }
    uVar4 = (uint)piVar1 & 0xffff;
    switch(uVar4) {
    case 1:
    case 2:
      FUN_664c67b0(this_00,uVar4);
      return 1;
    case 8:
      FUN_664c67f0(this_00);
      break;
    case 0x10:
      FUN_664c6760(this_00,(uint)(sVar3 == 0));
      return 1;
    case 0x20:
      FUN_664c68d0((int)this_00);
      return 1;
    }
  }
  return 1;
}


