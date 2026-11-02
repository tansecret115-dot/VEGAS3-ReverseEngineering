/* Module: rmbe3260.dll
   Function: FUN_6603ee40
   Address: 6603ee40
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_6603ee40(void *this,int param_1,int param_2,uint *param_3,undefined4 param_4)

{
  uint uVar1;
  BOOL BVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  if ((DAT_660752c8 == 0) && (DAT_660752cc == 0)) {
    BVar2 = QueryPerformanceFrequency((LARGE_INTEGER *)&DAT_660752c8);
    if ((BVar2 != 0) &&
       (BVar2 = QueryPerformanceCounter((LARGE_INTEGER *)&DAT_660752d0), BVar2 != 0))
    goto LAB_6603eef7;
LAB_6603ef14:
    uVar3 = GetTickCount();
  }
  else {
    BVar2 = QueryPerformanceCounter((LARGE_INTEGER *)&DAT_660752d0);
    if (BVar2 == 0) goto LAB_6603ef14;
LAB_6603eef7:
    uVar3 = ftol();
  }
  *(undefined2 *)((int)param_3 + 6) = *(undefined2 *)((int)this + 0x3e);
  *(short *)((int)this + 0x3e) = *(short *)((int)this + 0x3e) + 1;
  *(undefined2 *)(param_3 + 1) = *(undefined2 *)((int)this + 0x40);
  uVar6 = *param_3;
  uVar1 = *(uint *)((int)this + 0x72);
  if (uVar6 < uVar1) {
    iVar4 = (uVar6 - uVar1) + -1;
  }
  else {
    iVar4 = uVar6 - uVar1;
  }
  if (iVar4 != 0) {
    *(uint *)((int)this + 0x76) = uVar1;
    *(uint *)((int)this + 0x72) = *param_3;
    *(undefined4 *)((int)this + 0x6e) = 0;
  }
  *(int *)((int)this + 0x6e) = *(int *)((int)this + 0x6e) + param_2;
  iVar4 = FUN_6603e3b0(*(void **)((int)this + 0x52),param_1,param_2,(int *)param_3,param_4);
  if ((DAT_660752c8 == 0) && (DAT_660752cc == 0)) {
    BVar2 = QueryPerformanceFrequency((LARGE_INTEGER *)&DAT_660752c8);
    if (BVar2 != 0) {
      iVar5 = QueryPerformanceCounter((LARGE_INTEGER *)&DAT_660752d0);
      goto joined_r0x6603efec;
    }
  }
  else {
    iVar5 = QueryPerformanceCounter((LARGE_INTEGER *)&DAT_660752d0);
joined_r0x6603efec:
    if (iVar5 != 0) {
      uVar6 = ftol();
      goto LAB_6603f044;
    }
  }
  uVar6 = GetTickCount();
LAB_6603f044:
  if (uVar6 < uVar3) {
    uVar6 = (uVar6 - uVar3) - 1;
  }
  else {
    uVar6 = uVar6 - uVar3;
  }
  *(double *)((int)this + 0x5a) = (double)uVar6 + *(double *)((int)this + 0x5a);
  return iVar4;
}


