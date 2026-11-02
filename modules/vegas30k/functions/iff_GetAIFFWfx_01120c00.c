/* Module: vegas30k.dll
   Function: iff_GetAIFFWfx
   Address: 01120c00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall iff_GetAIFFWfx,16 */

int iff_GetAIFFWfx(HANDLE param_1,short *param_2,uint *param_3,int *param_4)

{
  HANDLE hFile;
  int *piVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  BOOL BVar5;
  undefined4 uVar6;
  uint uVar7;
  DWORD DVar8;
  short *psVar9;
  DWORD local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34 [4];
  int local_30 [2];
  short local_28;
  uint local_26;
  short local_22;
  undefined1 local_20 [12];
  short local_14 [10];
  
                    /* 0x120c00  1371  _iff_GetAIFFWfx@16 */
  hFile = param_1;
  psVar9 = param_2;
  if (param_2 == (short *)0x0) {
    psVar9 = local_14;
  }
  iVar4 = iff_IsAIFFFile(param_1,&local_3c);
  if (iVar4 == 0) {
    return -0x7ffb1ff5;
  }
  riff_SaveLocation(hFile,&local_38);
  param_1 = (HANDLE)local_3c;
  iVar4 = iff_FindChunkHeader(hFile,0x434f4d4d,local_34,&param_1);
  if (-1 < iVar4) {
    BVar5 = ReadFile(hFile,&local_28,0x12,&local_40,(LPOVERLAPPED)0x0);
    if (BVar5 == 0) {
      return -0x7ffb1ff8;
    }
    if (local_40 != 0x12) {
      return -0x7ffb1ff8;
    }
    iff_ByteSwap16(&local_28,1);
    iff_ByteSwap32(&local_26,1);
    iff_ByteSwap16(&local_22,1);
    iff_ByteSwap16(local_20,5);
    uVar6 = aiff_ConvertRate(local_20);
    *(undefined4 *)(psVar9 + 2) = uVar6;
    psVar9[7] = local_22;
    psVar9[1] = local_28;
    *psVar9 = (local_22 != 8) - 0x1ff;
    uVar2 = ((ushort)psVar9[7] >> 3) * psVar9[1];
    psVar9[6] = uVar2;
    *(uint *)(psVar9 + 4) = (uint)uVar2 * *(int *)(psVar9 + 2);
    if (uVar2 == 0) {
      sVar3 = 1;
    }
    else {
      sVar3 = psVar9[6];
    }
    psVar9[6] = sVar3;
    riff_RestoreLocation(hFile,local_38);
    param_1 = (HANDLE)local_3c;
    iVar4 = iff_FindChunkHeader(hFile,0x53534e44,&param_2,&param_1);
    if (-1 < iVar4) {
      param_2 = param_2 + -4;
      BVar5 = ReadFile(hFile,local_30,8,&local_40,(LPOVERLAPPED)0x0);
      if (BVar5 == 0) {
        return -0x7ffb1ff8;
      }
      if (local_40 != 8) {
        return -0x7ffb1ff8;
      }
      iff_ByteSwap32(local_30,2);
      piVar1 = param_4;
      if (local_30[0] != 0) {
        param_2 = (short *)((int)param_2 - local_30[0]);
      }
      if (param_3 != (uint *)0x0) {
        uVar7 = (uint)param_2 / (uint)(ushort)psVar9[6];
        *param_3 = uVar7;
        if (local_26 <= uVar7) {
          uVar7 = local_26;
        }
        *param_3 = uVar7;
      }
      if (param_4 != (int *)0x0) {
        DVar8 = SetFilePointer(hFile,0,(PLONG)0x0,1);
        *piVar1 = DVar8 + local_30[0];
      }
    }
  }
  return iVar4;
}


