/* Module: vegas30k.dll
   Function: SfMpegOffsetAudioAccessUnits
   Address: 01096500
   Source: Ghidra pseudocode (Stage 10 batch) */


/* void __stdcall SfMpegOffsetAudioAccessUnits(struct tagAUDIO_INFO *,unsigned __int64) */

void SfMpegOffsetAudioAccessUnits(tagAUDIO_INFO *param_1,__uint64 param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint in_stack_00000008;
  
                    /* 0x96500  433  ?SfMpegOffsetAudioAccessUnits@@YGXPAUtagAUDIO_INFO@@_K@Z */
  iVar4 = 0;
  while( true ) {
    piVar1 = *(int **)(param_1 + 0x28);
    if (piVar1 == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *piVar1;
    }
    if (iVar3 <= iVar4) break;
    if (piVar1 == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *piVar1;
    }
    if ((iVar4 < 0) || (iVar3 + -1 < iVar4)) {
      iVar3 = 0;
    }
    else {
      iVar3 = piVar1[1] * iVar4 + piVar1[2];
    }
    uVar2 = *(uint *)(iVar3 + 4);
    *(uint *)(iVar3 + 4) = uVar2 + in_stack_00000008;
    iVar4 = iVar4 + 1;
    *(uint *)(iVar3 + 8) =
         *(int *)(iVar3 + 8) + (int)param_2 + (uint)CARRY4(uVar2,in_stack_00000008);
  }
  return;
}


