/* Module: vidcap30.exe
   Function: riff64_FindListChunk
   Address: 004b7e30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall riff64_FindListChunk,28 */

int riff64_FindListChunk(HANDLE param_1)

{
  uint *puVar1;
  int iVar2;
  BOOL BVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  bool bVar7;
  int *in_stack_00000018;
  uint *in_stack_0000001c;
  uint local_18;
  int local_14;
  int local_10 [4];
  
                    /* 0xb7e30  748  _riff64_FindListChunk@28 */
  puVar1 = in_stack_0000001c;
  do {
    iVar2 = riff64_FindChunkHeader
                      (param_1,DAT_00599f48,DAT_00599f4c,DAT_00599f50,DAT_00599f54,&local_18,puVar1)
    ;
    if (iVar2 < 0) {
      return iVar2;
    }
    if ((puVar1 != (uint *)0x0) && (((int)puVar1[1] < 0 || (((int)puVar1[1] < 1 && (*puVar1 < 8)))))
       ) {
      return -0x7ffb1ff6;
    }
    BVar3 = ReadFile(param_1,local_10,0x10,(LPDWORD)&stack0x0000001c,(LPOVERLAPPED)0x0);
    if ((BVar3 == 0) || (in_stack_0000001c != (uint *)0x10)) {
      return -0x7ffb1ff8;
    }
    if (puVar1 != (uint *)0x0) {
      uVar4 = *puVar1;
      *puVar1 = uVar4 - 0x10;
      puVar1[1] = (puVar1[1] - 1) + (uint)(0xf < uVar4);
    }
    iVar2 = 4;
    bVar7 = true;
    piVar5 = local_10;
    piVar6 = (int *)&stack0x00000008;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar7 = *piVar5 == *piVar6;
      piVar5 = piVar5 + 1;
      piVar6 = piVar6 + 1;
    } while (bVar7);
    if (bVar7) {
      if (in_stack_00000018 != (int *)0x0) {
        *in_stack_00000018 = local_18 - 0x10;
        in_stack_00000018[1] = local_14 - (uint)(local_18 < 0x10);
      }
      return 0;
    }
    uVar4 = local_18 & 7;
    if (uVar4 != 0) {
      bVar7 = CARRY4(local_18,8 - uVar4);
      local_18 = local_18 + (8 - uVar4);
      local_14 = (local_14 - (uint)(8 < uVar4)) + (uint)bVar7;
    }
    riff64_SkipChunk(param_1,local_18 - 0x10,local_14 - (uint)(local_18 < 0x10));
    if (puVar1 != (uint *)0x0) {
      uVar4 = *puVar1;
      *puVar1 = uVar4 + (0x10 - local_18);
      puVar1[1] = puVar1[1] + (-(uint)(0x10 < local_18) - local_14) +
                  (uint)CARRY4(uVar4,0x10 - local_18);
    }
  } while( true );
}


