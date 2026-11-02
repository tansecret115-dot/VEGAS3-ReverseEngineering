/* Module: vegas30k.dll
   Function: FUN_01069d00
   Address: 01069d00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_01069d00(__int64 *param_1)

{
  int iVar1;
  int iVar2;
  LPCSTR lpMultiByteStr;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_76c;
  undefined4 local_764;
  undefined4 local_760;
  char local_75c [64];
  undefined1 auStack_71c [260];
  undefined1 auStack_618 [260];
  WCHAR local_514 [259];
  undefined2 local_30e;
  undefined1 local_30c [260];
  WCHAR aWStack_208 [259];
  undefined2 uStack_2;
  
  local_76c = 0;
  iVar1 = CArchive2::GetMultiVolumeStatus();
  uVar4 = 0;
  if (0 < iVar1) {
    _SfGetPathNameFromFilePath_12((int)param_1 + 0x77c,local_30c,0x104);
    if ((int)param_1[4] != 0) {
      CArchive2::GetSizeExtractAll(param_1);
      MultiByteToWideChar(0,1,"Entries",-1,local_514,0x104);
      local_30e = 0;
      (**(code **)(**(int **)(param_1 + 4) + 4))(local_514,local_764,local_760);
      (**(code **)(**(int **)(param_1 + 4) + 0xc))(0xaaaaaa7);
    }
    iVar3 = 2;
    if (1 < iVar1) {
      do {
        _splitpath((char *)(param_1 + 0x8d),(char *)0x0,(char *)0x0,(char *)local_514,local_75c);
        SfPrintF(auStack_618,"%s%s%d%s",local_30c,local_514,iVar3,local_75c);
        iVar2 = _SfDoesFileExist_4(auStack_618);
        if (iVar2 == 0) {
          FUN_010704e0(param_1 + 0x8d,iVar3,auStack_71c);
          iVar2 = _SfDoesFileExist_4(auStack_71c);
          if (iVar2 == 0) {
            FUN_01070600(0xaaaaaaad,"CopySEAMultiFiles",0);
            local_76c = 0x8004e032;
            break;
          }
          if ((int)param_1[4] != 0) {
            lpMultiByteStr = (LPCSTR)_SfGetFileNamePtrA_4(auStack_71c);
            MultiByteToWideChar(0,1,lpMultiByteStr,-1,aWStack_208,0x104);
            uStack_2 = 0;
            FUN_011496a0(aWStack_208);
            (**(code **)(**(int **)(param_1 + 4) + 0xc))(0xaaaaaa7);
          }
          local_76c = FUN_01069ba0(auStack_71c,auStack_618);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 <= iVar1);
    }
    uVar4 = local_76c;
    if (*(int **)(param_1 + 4) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 4) + 0xc))(0xaaaaaaf);
    }
  }
  return uVar4;
}


