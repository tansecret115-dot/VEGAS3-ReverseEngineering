/* Module: vegas30.exe
   Function: FUN_00435570
   Address: 00435570
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00435570(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = ~*(uint *)(param_2 + 0x10) >> 1 & 1;
  if (param_3 == 0) {
    FUN_004354b0(param_1,param_2,uVar6);
  }
  else {
    piVar2 = (int *)FUN_005b87b0(param_1);
    if (piVar2 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *piVar2;
    }
    iVar5 = 0;
    if (0 < iVar4) {
      do {
        iVar1 = *(int *)(piVar2[2] + iVar5 * 4);
        if (iVar1 == param_2) {
          bVar3 = -(uVar6 != 0) & 2;
LAB_004355cd:
          FUN_005cb070(iVar1,bVar3,3);
        }
        else if ((*(byte *)(iVar1 + 0x10) & 2) != 0) {
          bVar3 = 0;
          goto LAB_004355cd;
        }
        iVar5 = iVar5 + 1;
        if (iVar4 <= iVar5) {
          FUN_005b4010(param_1);
          return;
        }
      } while( true );
    }
  }
  FUN_005b4010(param_1);
  return;
}


