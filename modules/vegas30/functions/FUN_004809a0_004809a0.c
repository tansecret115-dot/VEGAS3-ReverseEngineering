/* Module: vegas30.exe
   Function: FUN_004809a0
   Address: 004809a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int ** FUN_004809a0(byte param_1,int *param_2)

{
  int iVar1;
  int *unaff_EBX;
  int **ppiVar2;
  undefined4 uVar3;
  int **ppiVar4;
  int *piVar5;
  int *piStack_18;
  undefined4 uStack_4;
  
  ppiVar2 = (int **)0x0;
  if ((param_1 & 2) == 0) {
    if ((param_1 & 1) == 0) {
      return (int **)0x0;
    }
    uVar3 = 3;
  }
  else {
    uVar3 = 4;
  }
  piStack_18 = param_2;
  (**(code **)(*param_2 + 0x10))();
  piVar5 = DAT_0064b510;
  iVar1 = (**(code **)*DAT_0064b510)(DAT_0064b510,&DAT_0060f048,&stack0x00000000);
  if (-1 < iVar1) {
    ppiVar4 = &piStack_18;
    piStack_18 = (int *)0x0;
    iVar1 = (**(code **)(*unaff_EBX + 0x18))(unaff_EBX,param_2,uStack_4,ppiVar4,8,uVar3);
    if (-1 < iVar1) {
      ppiVar2 = ppiVar4;
    }
    (**(code **)(*piVar5 + 8))(piVar5);
  }
  return ppiVar2;
}


