/* Module: mp3plug.dll
   Function: FUN_5f6fcd00
   Address: 5f6fcd00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_5f6fcd00(int param_1,int param_2,int param_3)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (((param_3 == 0) || (param_3 == 1)) || (param_3 == 3)) {
    iVar5 = param_3 * 0x90;
    iVar1 = param_2 + 0x900;
    do {
      iVar4 = 0;
      iVar3 = -9;
      iVar6 = param_2;
      while( true ) {
        *(float *)(param_2 + 0x48 + iVar3 * 4) =
             *(float *)(iVar5 + 0x5f746ddc + iVar3 * 4) * *(float *)(param_1 + 0x24 + iVar3 * 4) -
             (float)(&DAT_5f746dfc)[param_3 * 0x24 + iVar4] * *(float *)(param_1 + 0x44 + iVar4 * 4)
        ;
        fVar2 = -(*(float *)(iVar5 + 0x5f746e24 + iVar3 * 4) *
                  *(float *)(param_1 + 0x6c + iVar3 * 4) +
                 *(float *)(&DAT_5f746e44 + iVar4 * 4 + iVar5) *
                 *(float *)(param_1 + 0x8c + iVar4 * 4));
        iVar4 = iVar4 + -1;
        iVar3 = iVar3 + 1;
        if (iVar3 == 0) break;
        *(float *)(iVar6 + 0x20) = fVar2;
        iVar6 = iVar6 + -4;
      }
      *(float *)(iVar6 + 0x20) = fVar2;
      FUN_5f6fc490();
      param_2 = param_2 + 0x48;
      param_1 = param_1 + 0x90;
    } while (param_2 < iVar1);
  }
  return 0;
}


