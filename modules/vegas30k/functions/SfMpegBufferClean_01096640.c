/* Module: vegas30k.dll
   Function: SfMpegBufferClean
   Address: 01096640
   Source: Ghidra pseudocode (Stage 10 batch) */


/* void __stdcall SfMpegBufferClean(struct tagMPEG_BUFFER *,unsigned __int64 *) */

void SfMpegBufferClean(tagMPEG_BUFFER *param_1,__uint64 *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
                    /* 0x96640  425  ?SfMpegBufferClean@@YGXPAUtagMPEG_BUFFER@@PA_K@Z */
  iVar4 = 0;
  while( true ) {
    piVar1 = *(int **)param_1;
    if (piVar1 == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *piVar1;
    }
    if (iVar2 <= iVar4) {
      return;
    }
    if (piVar1 == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *piVar1;
    }
    if ((iVar4 < 0) || (iVar2 + -1 < iVar4)) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)(piVar1[1] * iVar4 + piVar1[2]);
    }
    if (*(uint *)((int)param_2 + 4) < (uint)piVar3[3]) break;
    if ((*(uint *)((int)param_2 + 4) <= (uint)piVar3[3]) && ((uint)*param_2 < (uint)piVar3[2])) {
      return;
    }
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + *piVar3;
    _SfList_DeleteList_16(piVar1,iVar4,1,0);
    iVar4 = iVar4 + 1;
  }
  return;
}


