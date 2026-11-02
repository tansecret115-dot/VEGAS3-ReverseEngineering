/* Module: vidcap30.exe
   Function: ExtractEntry
   Address: 00533e60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __stdcall CArchive2::ExtractEntry(char const *,char const *,unsigned long) */

long CArchive2::ExtractEntry(char *param_1,char *param_2,ulong param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint in_stack_00000010;
  int local_67c;
  int local_678;
  undefined4 local_674;
  undefined4 local_670;
  undefined4 local_66c [21];
  undefined1 local_618 [260];
  undefined1 local_514;
  undefined1 local_410;
  WCHAR local_30c [259];
  undefined2 local_106;
  undefined1 local_104 [260];
  
                    /* 0x133e60  15  ?ExtractEntry@CArchive2@@QAGJPBD0K@Z */
  uVar3 = 0;
  local_678 = 0;
  *(uint *)(param_1 + 0x880) = in_stack_00000010;
  if (*(int *)(param_1 + 0x24) == 0) {
    return -0x7fffbffb;
  }
  lVar1 = IsSpaceForExtractEntry(param_1,param_2,param_3);
  if (lVar1 == 0) {
    iVar2 = GetMultiVolumeStatus();
    if (((iVar2 < 2) || (iVar2 = FUN_00536dd0(), iVar2 < 0)) &&
       (iVar2 = GetMultiVolumeStatus(), 1 < iVar2)) {
      FUN_00536e70(0xaaaaaaad,"ExtractEntry",0);
      uVar3 = 0x8004e00b;
    }
    else {
      if (*(int *)(param_1 + 0x20) != 0) {
        local_674 = 0;
        local_670 = 0;
        MultiByteToWideChar(0,1,param_2,-1,local_30c,0x104);
        local_106 = 0;
        if ((in_stack_00000010 & 8) == 0) {
          GetSizeExtractEntry(param_1,(__int64 *)param_2,(ulong)&local_674);
          (**(code **)(**(int **)(param_1 + 0x20) + 4))(local_30c,local_674,local_670);
        }
        else {
          FUN_00555170(local_30c);
        }
      }
      puVar4 = local_66c;
      for (iVar2 = 0xd8; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      *(uint *)(param_1 + 0x880) = in_stack_00000010;
      local_618[0] = 0;
      local_514 = 0;
      local_410 = 0;
      local_67c = 0;
      uVar3 = FUN_005307b0(param_2,local_104,&local_67c);
      if (-1 < (int)uVar3) {
        iVar2 = FUN_00537440(local_66c);
        while (iVar2 == 0) {
          iVar2 = FUN_005308d0(local_618,local_104,local_67c);
          if (iVar2 != 0) {
            FUN_005361d0(local_66c,param_3);
            local_678 = 1;
            if (local_67c == 0) break;
          }
          iVar2 = FUN_00537500(local_66c);
        }
        uVar3 = (uint)(local_678 == 0);
        if (*(int **)(param_1 + 0x20) != (int *)0x0) {
          (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(0xaaaaaaf);
          return uVar3;
        }
      }
    }
  }
  return uVar3;
}


