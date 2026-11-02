/* Module: vidcap30.exe
   Function: SfSaveDiskPngDib
   Address: 004a4860
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfSaveDiskPngDib(char const *,struct tagBITMAPINFOHEADER const *,void const
   *,struct SFPNGFILEOPTIONS *) */

long SfSaveDiskPngDib(char *param_1,tagBITMAPINFOHEADER *param_2,void *param_3,
                     SFPNGFILEOPTIONS *param_4)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  FILE *local_18;
  int local_14;
  int *local_10;
  int local_c;
  int local_8;
  
                    /* 0xa4860  123
                       ?SfSaveDiskPngDib@@YGJPBDPBUtagBITMAPINFOHEADER@@PBXPAUSFPNGFILEOPTIONS@@@Z
                        */
  iVar5 = *(int *)(param_4 + 4);
  local_10 = (int *)0x0;
  local_8 = 0;
  local_c = 0;
  local_18 = (FILE *)0x0;
  iVar1 = _SfDibAlloc_28(&local_10,*(undefined4 *)param_4,param_2->biWidth,param_2->biHeight,0,0,0);
  if (((-1 < iVar1) && (iVar1 = _SfDibCopy_36(local_10,0,0,0,param_2,param_3,0,0,3), -1 < iVar1)) &&
     (iVar1 = _SfDibSwapRB_16(local_10,*local_10 + local_10[8] * 4 + (int)local_10,0,0), -1 < iVar1)
     ) {
    local_8 = FUN_0052b1b0("1.0.2",0,0,0);
    if (local_8 == 0) {
      iVar1 = -0x7fffbffb;
    }
    else {
      local_c = FUN_0052aba0(local_8);
      if (local_c == 0) {
        iVar1 = -0x7fffbffb;
      }
      else {
        iVar1 = setjmp3(local_8,0);
        if (iVar1 == 0) {
          local_18 = fopen(param_1,"wb+");
          if (local_18 == (FILE *)0x0) {
            iVar1 = -0x7ffb1ffa;
          }
          else {
            FUN_0052ac80(local_8,local_18);
            FUN_0052b7d0(local_8,0,0x98);
            FUN_0052bbe0(local_8,9);
            FUN_0052bde0(local_8,local_c,local_10[1],local_10[2],8,6,iVar5 != 0,0,0);
            FUN_0052ae00(local_8,local_c);
            FUN_0052b580(local_8,0x32);
            local_14 = FUN_00526290(local_8);
            uVar2 = (uint)*(ushort *)((int)local_10 + 0xe) * local_10[1] + 0x1f;
            iVar5 = (int)((uVar2 & 0xffffffe0) + ((int)uVar2 >> 0x1f & 7U)) >> 3;
            piVar3 = local_10;
            if (0 < local_14) {
              do {
                iVar1 = piVar3[2];
                if (-1 < iVar1 + -1) {
                  iVar4 = (iVar1 + -1) * iVar5;
                  do {
                    FUN_0052b380(local_8,*piVar3 + piVar3[8] * 4 + iVar4 + (int)piVar3);
                    iVar4 = iVar4 - iVar5;
                    iVar1 = iVar1 + -1;
                    piVar3 = local_10;
                  } while (iVar1 != 0);
                }
                local_14 = local_14 + -1;
              } while (local_14 != 0);
            }
            FUN_0052b090(local_8,0);
            iVar1 = 0;
          }
        }
        else {
          iVar1 = -0x7fffbffb;
        }
      }
    }
  }
  if (local_10 != (int *)0x0) {
    _SfDibFree_8(local_10,0);
    local_10 = (int *)0x0;
  }
  uVar2 = -(uint)(local_8 != 0) & (uint)&local_8;
  if (uVar2 != 0) {
    FUN_0052b660(uVar2,-(uint)(local_c != 0) & (uint)&local_c);
  }
  local_8 = 0;
  local_c = 0;
  if (local_18 != (FILE *)0x0) {
    fclose(local_18);
  }
  return iVar1;
}


