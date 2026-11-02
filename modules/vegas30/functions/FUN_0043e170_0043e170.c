/* Module: vegas30.exe
   Function: FUN_0043e170
   Address: 0043e170
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0043e170(int param_1,int *param_2,int *param_3)

{
  byte *pbVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  puVar2 = (uint *)FUN_005b89b0(DAT_0064b138);
  iVar5 = 0;
  uVar3 = 0;
  iVar4 = 1;
  if (*puVar2 != 0) {
    piVar6 = (int *)puVar2[2];
    do {
      pbVar1 = *(byte **)(*piVar6 + 0x28);
      if ((pbVar1 == (byte *)0x0) || ((*pbVar1 & 1) == 0)) {
        iVar5 = iVar5 + 1;
        iVar4 = 1;
      }
      else {
        iVar4 = iVar4 + 1;
      }
      if (param_1 == *piVar6) break;
      uVar3 = uVar3 + 1;
      piVar6 = piVar6 + 1;
    } while (uVar3 < *puVar2);
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar5;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = iVar4;
  }
  return;
}


