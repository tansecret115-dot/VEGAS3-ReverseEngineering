/* Module: sfconfigmgr.dll
   Function: FUN_00403240
   Address: 00403240
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00403240(void)

{
  int iVar1;
  wchar_t *pwVar2;
  wchar_t local_105c [1024];
  wchar_t local_85c [40];
  wchar_t local_80c [512];
  wchar_t local_40c [64];
  wchar_t local_38c [64];
  undefined2 local_30c;
  undefined2 local_28c;
  undefined4 local_20c;
  undefined4 local_208;
  undefined4 local_204;
  wchar_t local_200 [100];
  wchar_t local_138 [100];
  wchar_t local_70 [30];
  undefined4 uStackY_34;
  int iVar3;
  
  FUN_00417b20();
  FUN_00417b20();
  do {
    iVar3 = -0x7fffbffb;
    local_70[0] = L'\0';
    iVar1 = Ordinal_45();
    if (iVar1 != 0) {
      return 0;
    }
    iVar1 = Ordinal_70();
    if (iVar1 == 0xea) {
      FUN_00417b20();
      iVar1 = Ordinal_70();
    }
    if (iVar1 == 0) {
      _wcsupr((wchar_t *)&stack0xfffffff0);
      pwVar2 = wcsstr((wchar_t *)&stack0xfffffff0,L"SONIC FOUNDRY");
      if (pwVar2 == (wchar_t *)0x0) goto LAB_004033fd;
      iVar1 = Ordinal_70();
      if (iVar1 == 0) {
        iVar1 = Ordinal_70();
        if (iVar1 == 0) {
          iVar1 = Ordinal_70();
          if (iVar1 == 0) {
            wcscpy(local_85c,local_70);
            pwVar2 = local_105c;
            wcscpy(local_80c,pwVar2);
            wcscpy(local_40c,local_138);
            uStackY_34 = 0x4033b7;
            wcscpy(local_38c,local_200);
            local_30c = 0;
            local_28c = 0;
            local_20c = 0;
            local_208 = 0;
            local_204 = 0;
            iVar3 = FUN_0040c330(*(int **)(pwVar2 + 4),(int *)local_85c,0x65c,-1,
                                 (int *)&stack0xffffffe0);
          }
        }
      }
    }
    else {
LAB_004033fd:
      iVar3 = 0;
    }
    if (iVar3 < 0) {
      return iVar3;
    }
  } while( true );
}


