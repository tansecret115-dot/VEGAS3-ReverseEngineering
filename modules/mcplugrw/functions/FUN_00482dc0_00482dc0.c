/* Module: mcplugrw.dll
   Function: FUN_00482dc0
   Address: 00482dc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00482dc0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int local_184;
  byte local_180 [128];
  undefined1 local_100 [256];
  
  iVar3 = *(int *)(*(int *)(param_1 + 0x1d1) + 0x18);
  iVar5 = (param_4 >> 2) * 0x20 + 4;
  iVar8 = (param_3 >> 3) * 0x20 + 2;
  iVar7 = (param_2 >> 2) * 0x20 + 4;
  iVar1 = FUN_00482ee0(param_1,iVar7,iVar8,iVar5,(int)local_100);
  FUN_004830e0(param_1,iVar7,iVar8,iVar5,iVar1,(int)local_100,local_180);
  pbVar4 = local_180;
  piVar6 = (int *)(iVar3 + (param_2 >> 2) * 0x10);
  local_184 = 4;
  do {
    iVar1 = 8;
    iVar3 = ((param_3 >> 3) * 0x100 + (param_4 >> 2) * 4) * 2;
    do {
      iVar5 = 4;
      psVar2 = (short *)(*piVar6 + iVar3);
      do {
        *psVar2 = *pbVar4 + 1;
        psVar2 = psVar2 + 1;
        pbVar4 = pbVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      iVar3 = iVar3 + 0x40;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    piVar6 = piVar6 + 1;
    local_184 = local_184 + -1;
  } while (local_184 != 0);
  return;
}


