/* Module: vegas30.exe
   Function: FUN_005dd9a0
   Address: 005dd9a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005dd9a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4,int param_5)

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
    if (0 < param_5) goto LAB_005dd9c1;
    do {
      if (uVar2 == 0) {
        return 0;
      }
LAB_005dd9c1:
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
        piVar4 = &DAT_0062a800;
        piVar5 = local_10;
        do {
          if (iVar1 == 0) break;
          iVar1 = iVar1 + -1;
          bVar6 = *piVar4 == *piVar5;
          piVar4 = piVar4 + 1;
          piVar5 = piVar5 + 1;
        } while (bVar6);
        if (bVar6) {
          iVar1 = FUN_005db0d0(param_1,param_2,&param_4,DAT_0062a800,DAT_0062a804,DAT_0062a808,
                               _DAT_0062a80c,param_3);
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


