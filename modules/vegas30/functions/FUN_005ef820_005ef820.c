/* Module: vegas30.exe
   Function: FUN_005ef820
   Address: 005ef820
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005ef820(undefined4 param_1,int param_2,FILETIME *param_3)

{
  int iVar1;
  LONG LVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  uint local_34;
  int local_30;
  uint local_2c;
  undefined4 local_28;
  int local_24 [4];
  int local_14;
  FILETIME local_10;
  short local_8;
  int local_6;
  short local_2;
  
  iVar1 = riff64_ReadFileID(param_1,&local_34,local_24);
  local_28 = local_30;
  local_2c = local_34;
  if (-1 < iVar1) {
    iVar1 = 4;
    bVar5 = true;
    piVar3 = local_24;
    piVar4 = &DAT_0062c758;
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar5 = *piVar3 == *piVar4;
      piVar3 = piVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (bVar5);
    iVar1 = -0x7ffb1ff5;
    if (bVar5) {
      local_34 = 0;
      local_30 = 0;
      iVar1 = riff64_FindChunkHeader
                        (param_1,DAT_0062c768,DAT_0062c76c,DAT_0062c770,DAT_0062c774,&local_34,
                         &local_2c);
      if (-1 < iVar1) {
        iVar1 = -0x7ffb1ff5;
        if ((-1 < local_30) && ((0 < local_30 || (0x13 < local_34)))) {
          iVar1 = riff64_ReadData(param_1,&local_14,0x14,0);
          if ((-1 < iVar1) && (iVar1 = -0x7ffb1ff5, local_14 == 1)) {
            iVar1 = 1;
            LVar2 = CompareFileTime(&local_10,param_3);
            if ((((LVar2 == 0) && (local_8 == *(short *)(param_2 + 2))) &&
                (local_6 == *(int *)(param_2 + 4))) && (local_2 == *(short *)(param_2 + 0xe))) {
              iVar1 = 0;
            }
          }
        }
      }
    }
  }
  return iVar1;
}


