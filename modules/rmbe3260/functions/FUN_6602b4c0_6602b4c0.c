/* Module: rmbe3260.dll
   Function: FUN_6602b4c0
   Address: 6602b4c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_6602b4c0(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar2 = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  piVar1 = &DAT_6606dee0;
  do {
    if (*piVar1 == param_1) {
      *(int *)((int)this + 0x20) = iVar2 * 0x14 + 0x6606dee4;
      break;
    }
    piVar1 = piVar1 + 5;
    iVar2 = iVar2 + 1;
  } while (piVar1 < s__duplicate_6606df44);
  puVar3 = *(undefined4 **)((int)this + 0x20);
  if (puVar3 == (undefined4 *)0x0) {
switchD_6602b507_default:
    return -0x7fffbffb;
  }
  do {
    switch(*puVar3) {
    case 0:
    case 4:
      goto switchD_6602b507_caseD_0;
    case 1:
    case 5:
      *(undefined4 *)((int)this + 0x60) = 1;
      goto switchD_6602b507_caseD_0;
    case 2:
      *(undefined4 *)((int)this + 0x78) = 1;
      break;
    case 3:
      *(undefined4 *)((int)this + 0x60) = 1;
      *(undefined4 *)((int)this + 0x78) = 1;
      break;
    case 6:
      *(undefined4 *)((int)this + 0x70) = 1;
      *(undefined4 *)((int)this + 0x58) = 1;
      *(undefined4 *)((int)this + 0x88) = 1;
      goto switchD_6602b507_caseD_0;
    case 7:
      *(undefined4 *)((int)this + 0x70) = 1;
      *(undefined4 *)((int)this + 0x58) = 1;
      *(undefined4 *)((int)this + 0x88) = 1;
      *(undefined4 *)((int)this + 0x80) = 1;
      break;
    case 8:
      *(undefined4 *)((int)this + 0x60) = 1;
      *(undefined4 *)((int)this + 0x48) = 1;
      goto LAB_6602b54d;
    case 9:
      *(undefined4 *)((int)this + 0x60) = 1;
LAB_6602b54d:
      *(undefined4 *)((int)this + 0x68) = 1;
      break;
    default:
      goto switchD_6602b507_default;
    }
    *(undefined4 *)((int)this + 0x50) = 1;
switchD_6602b507_caseD_0:
    iVar4 = iVar4 + 1;
    puVar3 = puVar3 + 1;
    if (3 < iVar4) {
      iVar2 = FUN_6602b200(this);
      return iVar2;
    }
  } while( true );
}


