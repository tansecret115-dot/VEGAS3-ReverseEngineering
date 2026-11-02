/* Module: oggplug.dll
   Function: FUN_00416480
   Address: 00416480
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00416480(HANDLE param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  BOOL BVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int local_20 [8];
  
  piVar2 = param_2;
  iVar4 = 0;
  iVar6 = 0;
  BVar3 = ReadFile(param_1,param_2,0x1c,(LPDWORD)&param_2,(LPOVERLAPPED)0x0);
  if ((BVar3 == 0) || (param_2 != (int *)0x1c)) {
LAB_0041651c:
    iVar6 = -0x7ffb1ff8;
  }
  else {
    iVar1 = *piVar2;
    iVar4 = 0x1c;
    if (iVar1 != 0x1c) {
      SetFilePointer(param_1,iVar1 + -0x1c,(PLONG)0x0,1);
      iVar4 = iVar1;
    }
    uVar5 = 0;
    if (piVar2[1] != 0) {
      do {
        BVar3 = ReadFile(param_1,local_20,0x20,(LPDWORD)&param_2,(LPOVERLAPPED)0x0);
        if ((BVar3 == 0) || (param_2 != (int *)0x20)) goto LAB_0041651c;
        iVar4 = iVar4 + 0x20;
        iVar6 = FUN_00413db0(param_3,local_20,0x20,-1,(int *)0x0);
        uVar5 = uVar5 + 1;
      } while (uVar5 < (uint)piVar2[1]);
    }
  }
  if (param_4 != (int *)0x0) {
    *param_4 = iVar4;
  }
  return iVar6;
}


