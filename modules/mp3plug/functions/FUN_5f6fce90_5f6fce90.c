/* Module: mp3plug.dll
   Function: FUN_5f6fce90
   Address: 5f6fce90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_5f6fce90(int param_1,int param_2,int param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  do {
    iVar3 = 0;
    iVar4 = param_1 + iVar6 + (param_3 * 6 + 6) * 4;
    iVar2 = -3;
    iVar5 = param_2;
    while( true ) {
      *(float *)(param_2 + 0x18 + iVar2 * 4) =
           *(float *)(iVar4 + 0xc + iVar2 * 4) * *(float *)(&DAT_5f746ee4 + iVar2 * 4) -
           *(float *)(iVar4 + 0x14 + iVar3 * 4) * (float)(&DAT_5f746eec)[iVar3];
      fVar1 = -(*(float *)(iVar4 + 0x24 + iVar2 * 4) * *(float *)(iVar2 * 4 + 0x5f746efc) +
               *(float *)(iVar4 + 0x2c + iVar3 * 4) * (float)(&DAT_5f746f04)[iVar3]);
      iVar3 = iVar3 + -1;
      iVar2 = iVar2 + 1;
      if (iVar2 == 0) break;
      *(float *)(iVar5 + 8) = fVar1;
      iVar5 = iVar5 + -4;
    }
    *(float *)(iVar5 + 8) = fVar1;
    FUN_5f6fc930();
    param_2 = param_2 + 0x18;
    iVar6 = iVar6 + 0x90;
  } while (iVar6 < 0x1200);
  return 0;
}


