/* Module: vidcap30.exe
   Function: FUN_00436680
   Address: 00436680
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00436680(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x1c14) = 0;
  if ((((*(int *)(param_1 + 0x1600) <= (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x1608)))
      && (*(int *)(param_1 + 0x1604) <= param_3)) && (param_3 < *(int *)(param_1 + 0x160c))) {
    uVar1 = FUN_00430170(*(undefined4 *)(param_1 + 0x1514),param_2,param_3);
    *(uint *)(param_1 + 0x1c14) = uVar1 | 0x400000;
    return;
  }
  if (((*(int *)(param_1 + 0x1620) <= (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x1628)))
     && ((*(int *)(param_1 + 0x1624) <= param_3 && (param_3 < *(int *)(param_1 + 0x162c))))) {
    uVar1 = FUN_00430170(*(undefined4 *)(param_1 + 0x151c),param_2,param_3);
    *(uint *)(param_1 + 0x1c14) = uVar1 | 0x8000000;
    return;
  }
  if (((*(int *)(param_1 + 0x1610) <= (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x1618)))
     && ((*(int *)(param_1 + 0x1614) <= param_3 && (param_3 < *(int *)(param_1 + 0x161c))))) {
    uVar1 = FUN_00430170(*(undefined4 *)(param_1 + 0x1518),param_2,param_3);
    *(uint *)(param_1 + 0x1c14) = uVar1 | 0x800000;
    return;
  }
  if ((((*(int *)(param_1 + 0x148c) <= (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x1494)))
      && (*(int *)(param_1 + 0x1490) <= param_3)) && (param_3 < *(int *)(param_1 + 0x1498))) {
    uVar1 = FUN_00430170(*(undefined4 *)(param_1 + 0x13c0),param_2,param_3);
    *(uint *)(param_1 + 0x1c14) = uVar1 | 0x10000;
    return;
  }
  if (((*(int *)(param_1 + 0x149c) <= (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x14a4)))
     && ((*(int *)(param_1 + 0x14a0) <= param_3 && (param_3 < *(int *)(param_1 + 0x14a8))))) {
    uVar1 = FUN_00430170(*(undefined4 *)(param_1 + 0x13c4),param_2,param_3);
    *(uint *)(param_1 + 0x1c14) = uVar1 | 0x20000;
    return;
  }
  if (((*(int *)(param_1 + 0x14ac) <= (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x14b4)))
     && ((*(int *)(param_1 + 0x14b0) <= param_3 && (param_3 < *(int *)(param_1 + 0x14b8))))) {
    *(undefined4 *)(param_1 + 0x1c14) = 0x100000;
    return;
  }
  uVar1 = param_3 << 0x10 | param_2 & 0xffff;
  iVar2 = FUN_00453960(*(undefined4 *)(param_1 + 0x13bc),0x84,0,uVar1);
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0x1c14) = 0x80000;
    return;
  }
  iVar2 = FUN_00460850(*(undefined4 *)(param_1 + 0x13dc),0x84,0,uVar1);
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0x1c14) = 0x40000;
    return;
  }
  iVar2 = FUN_00460850(*(undefined4 *)(param_1 + 0x13e0),0x84,0,uVar1);
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0x1c14) = 0x200000;
    return;
  }
  iVar2 = FUN_00460850(*(undefined4 *)(param_1 + 0x13e4),0x84,0,uVar1);
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0x1c14) = 0x4000000;
    return;
  }
  if (((((*(byte *)(param_1 + 0x1ae8) & 2) == 0) && (*(int *)(param_1 + 0xb0) + -3 <= (int)param_2))
      && ((int)param_2 <= *(int *)(param_1 + 0xb0) + 3)) &&
     ((*(int *)(param_1 + 0xb4) <= param_3 && (param_3 <= *(int *)(param_1 + 0xbc))))) {
    *(undefined4 *)(param_1 + 0x1c14) = 0x1000000;
  }
  return;
}


