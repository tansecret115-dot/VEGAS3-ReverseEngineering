/* Module: sfs4rw.dll
   Function: FUN_004393f0
   Address: 004393f0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_004393f0(void *param_1,uchar *param_2,uchar *param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int local_67c;
  int local_678;
  uint local_674;
  undefined4 local_670;
  int local_66c [21];
  CHAR local_618 [260];
  undefined1 local_514;
  undefined1 local_410;
  WCHAR local_30c [259];
  undefined2 local_106;
  uchar local_104 [260];
  
  uVar3 = 0;
  local_678 = 0;
  *(uint *)((int)param_1 + 0x880) = param_4;
  if (*(int *)((int)param_1 + 0x24) == 0) {
    return 0x80004005;
  }
  uVar1 = FUN_00439320(param_1,param_2,param_3);
  if (uVar1 == 0) {
    iVar2 = FUN_0043ad20((int)param_1);
    if (((iVar2 < 2) || (iVar2 = FUN_0043c360(param_1), iVar2 < 0)) &&
       (iVar2 = FUN_0043ad20((int)param_1), 1 < iVar2)) {
      FUN_0043c400(param_1,0xaaaaaaad,(uchar *)"ExtractEntry",(uchar *)0x0);
      uVar3 = 0x8004e00b;
    }
    else {
      if (*(int *)((int)param_1 + 0x20) != 0) {
        local_674 = 0;
        local_670 = 0;
        MultiByteToWideChar(0,1,(LPCSTR)param_2,-1,local_30c,0x104);
        local_106 = 0;
        if ((param_4 & 8) == 0) {
          FUN_00439230(param_1,param_2,&local_674);
          (**(code **)(**(int **)((int)param_1 + 0x20) + 4))(local_30c,local_674,local_670);
        }
        else {
          FUN_0044de40(*(void **)((int)param_1 + 0x20),local_30c);
        }
      }
      piVar4 = local_66c;
      for (iVar2 = 0xd8; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar4 = 0;
        piVar4 = piVar4 + 1;
      }
      *(uint *)((int)param_1 + 0x880) = param_4;
      local_618[0] = '\0';
      local_514 = 0;
      local_410 = 0;
      local_67c = 0;
      uVar3 = FUN_00435d40(param_1,param_2,local_104,&local_67c);
      if (-1 < (int)uVar3) {
        iVar2 = FUN_0043c9d0(param_1,local_66c);
        while (iVar2 == 0) {
          iVar2 = FUN_00435e60(local_618,(LPCSTR)local_104,local_67c);
          if (iVar2 != 0) {
            FUN_0043b760(param_1,(int)local_66c,param_3);
            local_678 = 1;
            if (local_67c == 0) break;
          }
          iVar2 = FUN_0043ca90(param_1,local_66c);
        }
        uVar3 = (uint)(local_678 == 0);
        if (*(int **)((int)param_1 + 0x20) != (int *)0x0) {
          (**(code **)(**(int **)((int)param_1 + 0x20) + 0xc))(0xaaaaaaf);
          return uVar3;
        }
      }
    }
  }
  return uVar3;
}


