/* Module: vegas30.exe
   Function: FUN_00578330
   Address: 00578330
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x005783e9) */

int FUN_00578330(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  HANDLE hFile;
  DWORD DVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  int *piVar6;
  uint uVar7;
  int local_258;
  int *piStack_254;
  uint uStack_250;
  uint uStack_24c;
  DWORD local_248 [6];
  undefined1 auStack_230 [12];
  uchar auStack_224 [260];
  uchar auStack_120 [288];
  
  local_258 = 0;
  if (DAT_0064b570 != 0) {
    local_258 = FUN_00578950(DAT_00647624);
    if (local_258 < 0) {
      local_258 = 0;
      SfMsgBox(DAT_00647624,0x10,
               "Unable to make connection to Screenblast. Please login to your internet service provider first."
              );
      *param_3 = 1;
    }
    else {
      iVar1 = _SfDialogBoxParam_20(DAT_00647204,0x3bf,param_1,&DAT_00577840,0);
      if (iVar1 == 1) {
        hFile = CreateFileA(&DAT_00659d30,0x80000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0
                           );
        if (hFile != (HANDLE)0xffffffff) {
          DVar2 = GetFileSize(hFile,local_248);
          CloseHandle(hFile);
          iVar1 = FUN_00575d40();
          lVar5 = FUN_00578f10(iVar1 != 0);
          if ((lVar5 != 0) && (lVar5 < CONCAT44(local_248[0],DVar2))) {
            SfMsgBox(param_1,0x40,"%s%s%s%s","Your selection is too large for publishing. ",
                     " Try making it smaller by either"," reducing the size of the project or by",
                     " changing the \'format\' on the Media Choice Wizard.");
            *param_3 = 1;
            FUN_00578a10();
            goto LAB_00578460;
          }
        }
      }
      else {
        *param_3 = 1;
      }
      FUN_00578a10();
    }
  }
LAB_00578460:
  if (DAT_0064b510 != (int *)0x0) {
    uStack_24c = (**(code **)(*DAT_0064b510 + 0x18))(DAT_0064b510);
    uStack_250 = 0;
    if (uStack_24c != 0) {
      do {
        uVar4 = uStack_250;
        piStack_254 = (int *)0x0;
        (**(code **)(*DAT_0064b510 + 0x34))(DAT_0064b510,&piStack_254,uStack_250);
        if (-1 < local_258) {
          uVar7 = 0;
          piVar6 = (int *)0x0;
          iVar1 = (**(code **)(*piStack_254 + 0x2c))(piStack_254,0,0,auStack_230,0x14);
          if (-1 < iVar1) {
            if ((&stack0x00000000 == (undefined1 *)0x24c) ||
               (uVar4 = uVar7, (WCHAR)uStack_24c != L'\0')) {
              WideCharToMultiByte(0,0,(LPCWSTR)&uStack_24c,-1,&stack0xfffffda0,0x14,(LPCSTR)0x0,
                                  (LPBOOL)0x0);
              uVar4 = uVar7;
            }
            uStack_250 = uStack_250 & 0xffffff;
            iVar1 = 1;
            do {
              SfPrintF(auStack_120,"%s%d%s","__@Temp@Media",iVar1,&stack0xfffffda1);
              _mbscpy(auStack_224,&DAT_006479a0);
              _SfAddSlashToPathName_8(auStack_224,0x104);
              _mbscat(auStack_224,auStack_120);
              iVar3 = lstrcmpA((LPCSTR)auStack_224,&DAT_00659c2c);
              if (iVar3 != 0) {
                DeleteFileA((LPCSTR)auStack_224);
              }
              iVar1 = iVar1 + 1;
            } while (iVar1 < 200);
          }
          (**(code **)(*piVar6 + 8))(piVar6);
        }
        uStack_250 = uVar4 + 1;
      } while (uStack_250 < uStack_24c);
    }
  }
  return local_258;
}


