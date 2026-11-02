/* Module: Setup.exe
   Function: FUN_0040a330
   Address: 0040a330
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_0040a330(__int64 *param_1)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  char *lpMultiByteStr;
  int iVar3;
  int local_76c;
  undefined4 local_764;
  undefined4 local_760;
  char local_75c [64];
  uchar auStack_71c [260];
  uchar auStack_618 [260];
  WCHAR local_514 [259];
  undefined2 local_30e;
  uchar local_30c [260];
  WCHAR aWStack_208 [259];
  undefined2 uStack_2;
  
  local_76c = 0;
  iVar2 = CArchive2::GetMultiVolumeStatus();
  iVar3 = 0;
  if (0 < iVar2) {
    _SfGetPathNameFromFilePath_12((uchar *)((int)param_1 + 0x77c),local_30c,0x104);
    if ((int)param_1[4] != 0) {
      CArchive2::GetSizeExtractAll(param_1);
      MultiByteToWideChar(0,1,"Entries",-1,local_514,0x104);
      local_30e = 0;
      (**(code **)(**(int **)(param_1 + 4) + 4))(local_514,local_764,local_760);
      (**(code **)(**(int **)(param_1 + 4) + 0xc))(0xaaaaaa7);
    }
    iVar3 = 2;
    if (1 < iVar2) {
      do {
        _splitpath((char *)(param_1 + 0x8d),(char *)0x0,(char *)0x0,(char *)local_514,local_75c);
        SfPrintF(auStack_618,(BYTE *)"%s%s%d%s");
        bVar1 = _SfDoesFileExist_4((LPCSTR)auStack_618);
        if (CONCAT31(extraout_var,bVar1) == 0) {
          FUN_00410b10(param_1,(char *)(param_1 + 0x8d),iVar3,auStack_71c);
          bVar1 = _SfDoesFileExist_4((LPCSTR)auStack_71c);
          if (CONCAT31(extraout_var_00,bVar1) == 0) {
            FUN_00410c30(param_1,0xaaaaaaad,(uchar *)"CopySEAMultiFiles",(uchar *)0x0);
            local_76c = -0x7ffb1fce;
            break;
          }
          if ((int)param_1[4] != 0) {
            lpMultiByteStr = _SfGetFileNamePtrA_4((LPCSTR)auStack_71c);
            MultiByteToWideChar(0,1,lpMultiByteStr,-1,aWStack_208,0x104);
            uStack_2 = 0;
            FUN_0041d0f0(*(void **)(param_1 + 4),aWStack_208);
            (**(code **)(**(int **)(param_1 + 4) + 0xc))(0xaaaaaa7);
          }
          local_76c = FUN_0040a1d0(param_1,(LPCSTR)auStack_71c,(LPCSTR)auStack_618);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 <= iVar2);
    }
    iVar3 = local_76c;
    if (*(int **)(param_1 + 4) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 4) + 0xc))(0xaaaaaaf);
    }
  }
  return iVar3;
}


