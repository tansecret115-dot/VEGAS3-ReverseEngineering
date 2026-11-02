/* Module: vegas30.exe
   Function: FUN_004357f0
   Address: 004357f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004357f0(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  
  iVar2 = param_2;
  iVar5 = 0;
  uVar4 = ~*(uint *)(param_2 + 0x10) & 1;
  if (param_3 == 0) {
    FUN_00435730(param_1,param_2,uVar4);
  }
  else {
    piVar3 = (int *)FUN_005b87b0(param_1);
    if (piVar3 == (int *)0x0) {
      param_2 = 0;
    }
    else {
      param_2 = *piVar3;
    }
    if (0 < param_2) {
      do {
        iVar1 = *(int *)(piVar3[2] + iVar5 * 4);
        if (iVar1 == iVar2) {
          bVar6 = uVar4 != 0;
LAB_0043584f:
          FUN_005cb070(iVar1,bVar6,3);
        }
        else if ((*(byte *)(iVar1 + 0x10) & 1) != 0) {
          bVar6 = false;
          goto LAB_0043584f;
        }
        iVar5 = iVar5 + 1;
        if (param_2 <= iVar5) {
          FUN_005b4010(param_1);
          return;
        }
      } while( true );
    }
  }
  FUN_005b4010(param_1);
  return;
}


