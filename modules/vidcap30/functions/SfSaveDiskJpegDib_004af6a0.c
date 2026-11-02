/* Module: vidcap30.exe
   Function: SfSaveDiskJpegDib
   Address: 004af6a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfSaveDiskJpegDib(char const *,struct tagBITMAPINFOHEADER const *,void const
   *,struct SFJPEGFILEOPTIONS *) */

long SfSaveDiskJpegDib(char *param_1,tagBITMAPINFOHEADER *param_2,void *param_3,
                      SFJPEGFILEOPTIONS *param_4)

{
  int iVar1;
  HANDLE hObject;
  uint uVar2;
  int *local_21c;
  int local_218;
  undefined4 local_214 [99];
  undefined1 local_87 [135];
  
                    /* 0xaf6a0  122
                       ?SfSaveDiskJpegDib@@YGJPBDPBUtagBITMAPINFOHEADER@@PBXPAUSFJPEGFILEOPTIONS@@@Z
                        */
  local_21c = (int *)0x0;
  iVar1 = _SfDibAlloc_28(&local_21c,0x1b,param_2->biWidth,param_2->biHeight,0,0,0);
  if ((iVar1 < 0) || (iVar1 = _SfDibCopy_36(local_21c,0,0,0,param_2,param_3,0,0,3), iVar1 < 0))
  goto LAB_004af7c1;
  local_214[0] = FUN_0052cfd0(local_87);
  hObject = CreateFileA(param_1,0x40000000,2,(LPSECURITY_ATTRIBUTES)0x0,2,0,(HANDLE)0x0);
  if (hObject == (HANDLE)0xffffffff) {
    iVar1 = -0x7ffb1ff9;
  }
  else {
    local_218 = FUN_0052ccd0(hObject);
    if (local_218 == 0) {
LAB_004af82f:
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_0052d480(local_214,local_218);
      if (iVar1 == 0) {
        iVar1 = local_21c[1];
        if (param_4 == (SFJPEGFILEOPTIONS *)0x0) {
          uVar2 = (uint)*(ushort *)((int)local_21c + 0xe) * iVar1 + 0x1f;
          iVar1 = FUN_0052d4d0(local_214,*local_21c + local_21c[8] * 4 + (int)local_21c,
                               (int)((uVar2 & 0xffffffe0) + ((int)uVar2 >> 0x1f & 7U)) >> 3,iVar1,
                               local_21c[2],0x4b,0,0,0);
        }
        else {
          uVar2 = (uint)*(ushort *)((int)local_21c + 0xe) * iVar1 + 0x1f;
          iVar1 = FUN_0052d4d0(local_214,*local_21c + local_21c[8] * 4 + (int)local_21c,
                               (int)((uVar2 & 0xffffffe0) + ((int)uVar2 >> 0x1f & 7U)) >> 3,iVar1,
                               local_21c[2],*(undefined4 *)param_4,*(undefined4 *)(param_4 + 4),0,0)
          ;
        }
        if (iVar1 == 0) {
          if (hObject != (HANDLE)0x0) {
            CloseHandle(hObject);
            hObject = (HANDLE)0x0;
          }
          FUN_0052d260(local_214);
          goto LAB_004af82f;
        }
      }
      iVar1 = -0x7fffbffb;
    }
    if (hObject == (HANDLE)0x0) goto LAB_004af7c1;
  }
  CloseHandle(hObject);
LAB_004af7c1:
  if (local_21c != (int *)0x0) {
    _SfDibFree_8(local_21c,0);
  }
  return iVar1;
}


