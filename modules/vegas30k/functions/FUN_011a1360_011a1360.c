/* Module: vegas30k.dll
   Function: FUN_011a1360
   Address: 011a1360
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_011a1360(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int unaff_retaddr;
  int iVar4;
  
  piVar1 = param_1 + 0x10c;
  param_1[5] = param_2;
  param_1[6] = param_3;
  (**(code **)(*(int *)param_1[0x8a] + 0x84))((int *)param_1[0x8a],6,piVar1);
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  if (param_1[2] == 0) {
    if ((int *)param_1[0x10e] == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)param_1[0x10e];
    }
    iVar3 = 0;
    iVar2 = unaff_retaddr;
    if (0 < iVar4) {
      do {
        iVar2 = FUN_011b3c10(param_1[0x8a] + 0x4be,*piVar1,param_1[0x10d],param_2,unaff_retaddr);
        if (iVar2 < 0) {
          return iVar2;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar4);
    }
  }
  else {
    iVar2 = FUN_011b3c10(param_1[0x8a] + 0x4be,*piVar1,param_1[0x10d],param_2,param_3);
  }
  if (-1 < iVar2) {
    param_1[3] = param_1[3] | 2;
    iVar2 = (*(code *)param_1[5])
                      (param_1,-(param_1[2] != 0) & 0xe,param_1[6],0xffffffff,0,0,0,0,0,0,0);
    if (iVar2 < 0) {
      (**(code **)(*param_1 + 0x90))(param_1,0);
    }
  }
  return iVar2;
}


