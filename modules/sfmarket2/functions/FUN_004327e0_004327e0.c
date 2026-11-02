/* Module: sfmarket2.dll
   Function: FUN_004327e0
   Address: 004327e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_004327e0(void *param_1)

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
  iVar2 = FUN_00437a00((int)param_1);
  iVar3 = 0;
  if (0 < iVar2) {
    FUN_00420570((uchar *)((int)param_1 + 0x77c),local_30c,0x104);
    if (*(int *)((int)param_1 + 0x20) != 0) {
      FUN_00435bf0(param_1,&local_764);
      MultiByteToWideChar(0,1,"Entries",-1,local_514,0x104);
      local_30e = 0;
      (**(code **)(**(int **)((int)param_1 + 0x20) + 4))(local_514,local_764,local_760);
      (**(code **)(**(int **)((int)param_1 + 0x20) + 0xc))(0xaaaaaa7);
    }
    iVar3 = 2;
    if (1 < iVar2) {
      do {
        _splitpath((char *)((int)param_1 + 0x468),(char *)0x0,(char *)0x0,(char *)local_514,
                   local_75c);
        FUN_00424a60(auStack_618,(BYTE *)"%s%s%d%s");
        bVar1 = FUN_00420b70((LPCSTR)auStack_618);
        if (CONCAT31(extraout_var,bVar1) == 0) {
          FUN_00438fc0(param_1,(char *)((int)param_1 + 0x468),iVar3,auStack_71c);
          bVar1 = FUN_00420b70((LPCSTR)auStack_71c);
          if (CONCAT31(extraout_var_00,bVar1) == 0) {
            FUN_004390e0(param_1,0xaaaaaaad,(uchar *)"CopySEAMultiFiles",(uchar *)0x0);
            local_76c = -0x7ffb1fce;
            break;
          }
          if (*(int *)((int)param_1 + 0x20) != 0) {
            lpMultiByteStr = FUN_004201b0((LPCSTR)auStack_71c);
            MultiByteToWideChar(0,1,lpMultiByteStr,-1,aWStack_208,0x104);
            uStack_2 = 0;
            FUN_004450d0(*(void **)((int)param_1 + 0x20),aWStack_208);
            (**(code **)(**(int **)((int)param_1 + 0x20) + 0xc))(0xaaaaaa7);
          }
          local_76c = FUN_00432680(param_1,(LPCSTR)auStack_71c,(LPCSTR)auStack_618);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 <= iVar2);
    }
    iVar3 = local_76c;
    if (*(int **)((int)param_1 + 0x20) != (int *)0x0) {
      (**(code **)(**(int **)((int)param_1 + 0x20) + 0xc))(0xaaaaaaf);
    }
  }
  return iVar3;
}


