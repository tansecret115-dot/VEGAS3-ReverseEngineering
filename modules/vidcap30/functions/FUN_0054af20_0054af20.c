/* Module: vidcap30.exe
   Function: FUN_0054af20
   Address: 0054af20
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0054af20(int param_1,undefined4 param_2,int param_3)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  
  if ((*(byte *)(param_1 + 0x60) & 1) == 0) {
    FUN_00549540(param_1,"Missing IHDR before tEXt");
  }
  if ((*(uint *)(param_1 + 0x60) & 4) != 0) {
    *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 8;
  }
  pcVar3 = (char *)FUN_00549470(param_1,param_3 + 1);
  FUN_00549780(param_1,pcVar3,param_3);
  iVar4 = FUN_005497b0(param_1,0);
  if (iVar4 == 0) {
    pcVar3[param_3] = '\0';
    cVar2 = *pcVar3;
    pcVar6 = pcVar3;
    while (cVar2 != '\0') {
      pcVar1 = pcVar6 + 1;
      pcVar6 = pcVar6 + 1;
      cVar2 = *pcVar1;
    }
    if (pcVar6 != pcVar3 + param_3) {
      pcVar6 = pcVar6 + 1;
    }
    puVar5 = (undefined4 *)FUN_00549470(param_1,0x10);
    *puVar5 = 0xffffffff;
    puVar5[1] = pcVar3;
    puVar5[2] = pcVar6;
    FUN_0052c180(param_1,param_2,puVar5,1);
    FUN_005494b0(param_1,puVar5);
    return;
  }
  FUN_005494b0(param_1,pcVar3);
  return;
}


