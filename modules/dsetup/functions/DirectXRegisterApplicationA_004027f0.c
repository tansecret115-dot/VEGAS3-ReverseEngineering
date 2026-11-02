/* Module: dsetup.dll
   Function: DirectXRegisterApplicationA
   Address: 004027f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 DirectXRegisterApplicationA(undefined4 param_1,int *param_2)

{
  int iVar1;
  LSTATUS LVar2;
  DWORD DVar3;
  OLECHAR local_524 [260];
  CHAR local_31c [260];
  BYTE local_218 [260];
  CHAR local_114 [260];
  DWORD local_10;
  undefined4 local_c;
  HKEY local_8;
  
                    /* 0x27f0  3  DirectXRegisterApplicationA */
  if (((((DAT_0040aa60 != 0) || (iVar1 = FUN_00401c7b((LPCSTR)0x0,&local_c), iVar1 != 0)) &&
       (param_2 != (int *)0x0)) &&
      ((iVar1 = FUN_004026a2(param_2), iVar1 != 0 && (DAT_0040aa88 != (code *)0x0)))) &&
     (iVar1 = (*DAT_0040aa88)(2000,local_31c,0x104), iVar1 != 0)) {
    wsprintfA(local_114,local_31c,param_2[2]);
    LVar2 = RegCreateKeyExA((HKEY)0x80000002,local_114,0,(LPSTR)0x0,0,0xf003f,
                            (LPSECURITY_ATTRIBUTES)0x0,&local_8,&local_10);
    if (((LVar2 == 0) && (iVar1 = StringFromGUID2((GUID *)param_2[3],local_524,0x104), iVar1 != 0))
       && ((iVar1 = WideCharToMultiByte(0,0,local_524,iVar1,(LPSTR)local_218,0x104,(LPCSTR)0x0,
                                        (LPBOOL)0x0), iVar1 != 0 &&
           (iVar1 = (*DAT_0040aa88)(0x7d1,local_114,0x104), iVar1 != 0)))) {
      DVar3 = lstrlenA((LPCSTR)local_218);
      LVar2 = RegSetValueExA(local_8,local_114,0,1,local_218,DVar3);
      if ((LVar2 == 0) && (iVar1 = (*DAT_0040aa88)(0x7d2,local_114,0x104), iVar1 != 0)) {
        DVar3 = lstrlenA((LPCSTR)param_2[4]);
        LVar2 = RegSetValueExA(local_8,local_114,0,1,(BYTE *)param_2[4],DVar3);
        if ((LVar2 == 0) && (iVar1 = (*DAT_0040aa88)(0x7d3,local_114,0x104), iVar1 != 0)) {
          DVar3 = lstrlenA((LPCSTR)param_2[5]);
          LVar2 = RegSetValueExA(local_8,local_114,0,1,(BYTE *)param_2[5],DVar3);
          if ((LVar2 == 0) && (iVar1 = (*DAT_0040aa88)(0x7d5,local_114,0x104), iVar1 != 0)) {
            DVar3 = lstrlenA((LPCSTR)param_2[6]);
            LVar2 = RegSetValueExA(local_8,local_114,0,1,(BYTE *)param_2[6],DVar3);
            if ((LVar2 == 0) && (iVar1 = (*DAT_0040aa88)(0x7d4,local_114,0x104), iVar1 != 0)) {
              DVar3 = lstrlenA((LPCSTR)param_2[7]);
              LVar2 = RegSetValueExA(local_8,local_114,0,1,(BYTE *)param_2[7],DVar3);
              if (LVar2 == 0) {
                if ((*param_2 != 4) || (param_2[8] == 0)) {
LAB_00402a73:
                  RegCloseKey(local_8);
                  return 1;
                }
                iVar1 = (*DAT_0040aa88)(0x7d6,local_114,0x104);
                if (iVar1 != 0) {
                  DVar3 = lstrlenA((LPCSTR)param_2[8]);
                  LVar2 = RegSetValueExA(local_8,local_114,0,1,(BYTE *)param_2[8],DVar3);
                  if (LVar2 == 0) goto LAB_00402a73;
                }
              }
            }
          }
        }
      }
    }
    if (local_8 != (HKEY)0x0) {
      RegCloseKey(local_8);
    }
  }
  return 0;
}


