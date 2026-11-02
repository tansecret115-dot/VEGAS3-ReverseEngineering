/* Module: vegas30k.dll
   Function: SfMpegOffsetVideoAccessUnits
   Address: 01096560
   Source: Ghidra pseudocode (Stage 10 batch) */


/* void __stdcall SfMpegOffsetVideoAccessUnits(struct VIDEO_INFO *,unsigned __int64) */

void SfMpegOffsetVideoAccessUnits(VIDEO_INFO *param_1,__uint64 param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint in_stack_00000008;
  
                    /* 0x96560  434  ?SfMpegOffsetVideoAccessUnits@@YGXPAUVIDEO_INFO@@_K@Z */
  iVar5 = 0;
  while( true ) {
    piVar1 = *(int **)(param_1 + 0x28);
    if (piVar1 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *piVar1;
    }
    if (iVar4 <= iVar5) break;
    if (piVar1 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *piVar1;
    }
    if ((iVar5 < 0) || (iVar4 + -1 < iVar5)) {
      iVar4 = 0;
    }
    else {
      iVar4 = piVar1[1] * iVar5 + piVar1[2];
    }
    uVar2 = *(uint *)(iVar4 + 8);
    *(uint *)(iVar4 + 8) = uVar2 + in_stack_00000008;
    uVar3 = *(uint *)(iVar4 + 0x10);
    *(uint *)(iVar4 + 0xc) =
         *(int *)(iVar4 + 0xc) + (int)param_2 + (uint)CARRY4(uVar2,in_stack_00000008);
    *(uint *)(iVar4 + 0x10) = uVar3 + in_stack_00000008;
    iVar5 = iVar5 + 1;
    *(uint *)(iVar4 + 0x14) =
         *(int *)(iVar4 + 0x14) + (int)param_2 + (uint)CARRY4(uVar3,in_stack_00000008);
  }
  return;
}


