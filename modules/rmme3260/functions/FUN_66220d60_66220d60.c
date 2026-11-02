/* Module: rmme3260.dll
   Function: FUN_66220d60
   Address: 66220d60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x66220d91) */

int __thiscall FUN_66220d60(void *this,int *param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  int *piVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_8;
  
  local_8 = 4;
  piVar2 = *(int **)((int)this + 4);
  iVar5 = piVar2[5];
  if ((uint)piVar2[6] < iVar5 + 4U) {
    pcVar4 = (char *)(**(code **)(*piVar2 + 0x24))(&local_8);
  }
  else {
    *(int *)(piVar2[8] + 0x14) = *(int *)(piVar2[8] + 0x14) + 1;
    pcVar4 = (char *)piVar2[5];
    piVar2[5] = iVar5 + 4U;
  }
  iVar5 = FUN_6620af60(this,(int)pcVar4,4,local_8);
  if (iVar5 != 0) {
    if (iVar5 == 0x40040) {
      (**(code **)(**(int **)((int)this + 4) + 8))(param_3,0);
    }
    return iVar5;
  }
  cVar1 = *pcVar4;
  iVar5 = CONCAT22(CONCAT11(cVar1,pcVar4[1]),CONCAT11(pcVar4[2],pcVar4[3]));
  piVar2 = *(int **)((int)this + 4);
  if (pcVar4 != (char *)0x0) {
    pcVar3 = *(char **)(piVar2[8] + 0xc);
    if ((pcVar3 == pcVar4) || ((pcVar3 < pcVar4 && (pcVar4 < (char *)piVar2[6])))) {
      piVar2 = (int *)(piVar2[8] + 0x14);
      *piVar2 = *piVar2 + -1;
    }
    else {
      (**(code **)(*piVar2 + 0x28))(pcVar4);
    }
  }
  (**(code **)(**(int **)((int)this + 4) + 8))(param_3,0);
  piVar2 = *(int **)((int)this + 4);
  local_8 = iVar5;
  if (cVar1 < '\0') {
    piVar2[0x10] = 0x16;
    iVar6 = 0;
  }
  else {
    iVar7 = piVar2[5];
    if ((uint)piVar2[6] < (uint)(iVar5 + iVar7)) {
      iVar6 = (**(code **)(*piVar2 + 0x24))(&local_8);
    }
    else {
      *(int *)(piVar2[8] + 0x14) = *(int *)(piVar2[8] + 0x14) + 1;
      if (iVar5 == 0) {
        iVar6 = *(int *)(piVar2[8] + 0xc);
      }
      else {
        iVar6 = piVar2[5];
        piVar2[5] = iVar5 + iVar7;
      }
    }
  }
  *param_1 = iVar6;
  iVar7 = FUN_6620af60(this,iVar6,iVar5,local_8);
  if (iVar7 == 0) {
    *param_2 = iVar5;
    return 0;
  }
  if (iVar7 == 0x40040) {
    (**(code **)(**(int **)((int)this + 4) + 8))(param_3,0);
  }
  return iVar7;
}


