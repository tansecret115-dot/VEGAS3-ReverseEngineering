/* Module: sfcdi.dll
   Function: FUN_5bf40700
   Address: 5bf40700
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf40700(int *param_1,uchar *param_2,undefined4 param_3,undefined4 param_4,short *param_5)

{
  int iVar1;
  short sVar2;
  int iVar3;
  HANDLE hFindFile;
  int local_154;
  uchar local_150 [16];
  _WIN32_FIND_DATAA local_140;
  
  *param_5 = 0;
  iVar3 = FUN_5bf3e580(*param_1,"MPEGAV");
  if (iVar3 == 0) {
    return -0x7ff8ffa9;
  }
  hFindFile = FindFirstFileA((LPCSTR)param_2,&local_140);
  if (hFindFile == (HANDLE)0xffffffff) {
    iVar3 = -0x7ffb1ff9;
  }
  else {
    FindClose(hFindFile);
    sVar2 = 0;
    if (*(undefined4 **)(iVar3 + 0x214) != (undefined4 *)0x0) {
      sVar2 = (short)**(undefined4 **)(iVar3 + 0x214);
    }
    FUN_5bf25750(local_150,(BYTE *)"AVSEQ%02u.DAT");
    iVar3 = FUN_5bf3dc10((int)param_1,iVar3,local_150,local_150,param_2,0,0,local_140.nFileSizeLow,
                         local_140.nFileSizeHigh,0,1,&local_154);
    if (-1 < iVar3) {
      iVar3 = FUN_5bf3f4f0(local_154);
      if (-1 < iVar3) {
        iVar1 = *(int *)(local_154 + 0x350);
        *(undefined4 *)(iVar1 + 4) = param_3;
        *(undefined4 *)(iVar1 + 8) = param_4;
        *param_5 = sVar2 + 2;
        return iVar3;
      }
    }
  }
  return iVar3;
}


