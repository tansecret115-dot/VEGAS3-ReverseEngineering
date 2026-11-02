/* Module: vegas30k.dll
   Function: riff64_FindChunkHeader
   Address: 0102e5d0
   Source: Ghidra pseudocode (migrated from analysis/ghidra/output/vegas30k.dll_analysis.txt)
*/


/* __stdcall riff64_FindChunkHeader,28 */

int riff64_FindChunkHeader
              (undefined4 param_1,uint param_2,uint param_3,undefined4 param_4,undefined4 param_5,
              undefined8 *param_6,uint *param_7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined8 local_18;
  int local_10 [4];
  
  uVar8 = CONCAT44(local_18._4_4_,(undefined4)local_18);
                    /* 0x2e5d0  1385  _riff64_FindChunkHeader@28 */
  uVar2 = param_2;
  uVar4 = param_3;
  if (param_7 != (uint *)0x0) {
    uVar2 = *param_7;
    uVar4 = param_7[1];
    uVar8 = CONCAT44(local_18._4_4_,(undefined4)local_18);
  }
  do {
    if ((param_7 != (uint *)0x0) && (((int)uVar4 < 0 || (((int)uVar4 < 1 && (uVar2 < 0x18)))))) {
      *param_7 = uVar2;
      param_7[1] = uVar4;
      return -0x7ffb1ff6;
    }
    local_18 = uVar8;
    iVar1 = riff64_ReadChunkHeader(param_1,local_10,&local_18);
    if (iVar1 != 0) {
      return iVar1;
    }
    uVar3 = uVar2 - 0x18;
    iVar1 = 4;
    uVar4 = (uVar4 - 1) + (uint)(0x17 < uVar2);
    bVar7 = true;
    piVar5 = local_10;
    piVar6 = (int *)&param_2;
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar7 = *piVar5 == *piVar6;
      piVar5 = piVar5 + 1;
      piVar6 = piVar6 + 1;
    } while (bVar7);
    if (bVar7) {
      if (param_6 != (undefined8 *)0x0) {
        *param_6 = local_18;
      }
      if (param_7 != (uint *)0x0) {
        *param_7 = uVar3;
        param_7[1] = uVar4;
      }
      return 0;
    }
    uVar8 = riff64_SkipChunk(param_1,local_18);
    uVar2 = uVar3 - (uint)uVar8;
    uVar4 = (uVar4 - (int)((ulonglong)uVar8 >> 0x20)) - (uint)(uVar3 < (uint)uVar8);
  } while( true );
}



