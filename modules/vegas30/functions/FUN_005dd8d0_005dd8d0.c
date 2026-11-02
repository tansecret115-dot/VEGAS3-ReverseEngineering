/* Module: vegas30.exe
   Function: FUN_005dd8d0
   Address: 005dd8d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005dd8d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4,int param_5,
                undefined4 param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  bool bVar6;
  int local_10 [4];
  
  if (-1 < param_5) {
    uVar2 = param_4;
    iVar3 = param_5;
    if (0 < param_5) goto LAB_005dd8f1;
    do {
      if (uVar2 == 0) {
        return 0;
      }
LAB_005dd8f1:
      do {
        iVar1 = riff64_ReadChunkHeader(param_1,local_10,&param_4);
        if (iVar1 < 0) {
          return iVar1;
        }
        bVar6 = 0x17 < uVar2;
        uVar2 = uVar2 - 0x18;
        iVar1 = 4;
        iVar3 = iVar3 + -1 + (uint)bVar6;
        bVar6 = true;
        piVar4 = &DAT_0062a600;
        piVar5 = local_10;
        do {
          if (iVar1 == 0) break;
          iVar1 = iVar1 + -1;
          bVar6 = *piVar4 == *piVar5;
          piVar4 = piVar4 + 1;
          piVar5 = piVar5 + 1;
        } while (bVar6);
        if (bVar6) {
          iVar1 = FUN_005db0d0(param_1,param_2,&param_4,DAT_0062a600,DAT_0062a604,DAT_0062a608,
                               DAT_0062a60c,param_6);
          if (iVar1 < 0) {
            return iVar1;
          }
          bVar6 = uVar2 < param_4;
          uVar2 = uVar2 - param_4;
          iVar3 = (iVar3 - param_5) - (uint)bVar6;
        }
      } while (0 < iVar3);
    } while (-1 < iVar3);
  }
  return 0;
}


