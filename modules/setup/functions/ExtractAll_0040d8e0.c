/* Module: Setup.exe
   Function: ExtractAll
   Address: 0040d8e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __stdcall CArchive2::ExtractAll(char const *,unsigned long) */

long CArchive2::ExtractAll(char *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 in_stack_0000000c;
  int local_568 [21];
  undefined1 uStack_514;
  undefined1 uStack_410;
  undefined1 uStack_30c;
  WCHAR local_208 [259];
  undefined2 local_2;
  
                    /* 0xd8e0  10  ?ExtractAll@CArchive2@@QAGJPBDK@Z */
  if (*(int *)(param_1 + 0x24) == 0) {
    uVar3 = 0x80004005;
  }
  else {
    lVar1 = IsSpaceForExtractAll(param_1,param_2);
    if (lVar1 == 0) {
      iVar2 = GetMultiVolumeStatus();
      if (((iVar2 < 2) || (iVar2 = FUN_00410b90(param_1), iVar2 < 0)) &&
         (iVar2 = GetMultiVolumeStatus(), 1 < iVar2)) {
        uVar3 = 0x8004e00b;
      }
      else {
        if (*(int *)(param_1 + 0x20) != 0) {
          MultiByteToWideChar(0,1,param_1 + 0x678,-1,local_208,0x104);
          local_2 = 0;
          GetSizeExtractAll((__int64 *)param_1);
          (**(code **)(**(int **)(param_1 + 0x20) + 4))(local_208,0,0);
        }
        *(undefined4 *)(param_1 + 0x880) = in_stack_0000000c;
        piVar4 = local_568;
        for (iVar2 = 0xd8; iVar2 != 0; iVar2 = iVar2 + -1) {
          *piVar4 = 0;
          piVar4 = piVar4 + 1;
        }
        uStack_514 = 0;
        uStack_410 = 0;
        uStack_30c = 0;
        uVar3 = FUN_00411200(param_1,local_568);
        while ((uVar3 == 0 &&
               (uVar3 = FUN_0040ff90(param_1,(int)local_568,(uchar *)param_2), -1 < (int)uVar3))) {
          piVar4 = local_568;
          for (iVar2 = 0xd8; iVar2 != 0; iVar2 = iVar2 + -1) {
            *piVar4 = 0;
            piVar4 = piVar4 + 1;
          }
          uVar3 = FUN_004112c0(param_1,local_568);
        }
        if (*(int **)(param_1 + 0x20) != (int *)0x0) {
          (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(0xaaaaaaf);
        }
      }
    }
    else {
      FUN_00410c30(param_1,0xaaaaaaa8,(uchar *)"ExtractAll",(uchar *)0x0);
      uVar3 = 0x8004e0c8;
    }
  }
  return (-1 < (int)uVar3) - 1 & uVar3;
}


