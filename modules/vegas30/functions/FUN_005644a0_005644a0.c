/* Module: vegas30.exe
   Function: FUN_005644a0
   Address: 005644a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005644a0(uchar *param_1,int param_2,int *param_3,int param_4)

{
  LPCWSTR lpWideCharStr;
  undefined4 uVar1;
  int iVar2;
  int unaff_EBX;
  int iVar3;
  undefined4 *puVar4;
  int unaff_retaddr;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  undefined1 *puVar10;
  undefined1 local_54c [16];
  undefined4 local_53c [8];
  CHAR aCStack_51c [252];
  uchar auStack_420 [7];
  undefined1 uStack_419;
  undefined1 auStack_31c [260];
  undefined1 auStack_218 [8];
  undefined1 auStack_210 [252];
  undefined1 auStack_114 [8];
  undefined1 auStack_10c [8];
  undefined1 local_104 [248];
  undefined4 uStack_c;
  int iStack_4;
  
  iVar3 = 0;
  if (((param_3 == (int *)0x0) || (*param_3 == 0)) && (param_4 == 0)) {
    return 1;
  }
  FUN_00535b10(local_104,0x104,param_2);
  puVar10 = local_54c;
  puVar4 = local_53c;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_53c[0] = 0xb;
  iVar2 = (**(code **)(**(int **)(param_2 + 8) + 0x60))(*(int **)(param_2 + 8));
  if (-1 < iVar2) {
    lpWideCharStr = (LPCWSTR)(unaff_EBX + 0x14);
    if ((lpWideCharStr == (LPCWSTR)0x0) || (*lpWideCharStr != L'\0')) {
      WideCharToMultiByte(0,0,lpWideCharStr,-1,aCStack_51c,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
    }
    else if (&stack0x00000000 != (undefined1 *)0x51c) {
      aCStack_51c[0] = '\0';
    }
    uStack_419 = 0;
    SfPrintF(auStack_210,".%s;%s",auStack_10c,aCStack_51c);
    (**(code **)(**(int **)(param_2 + 8) + 0x68))(*(int **)(param_2 + 8),unaff_EBX);
    if (0 < (int)puVar10) {
      while( true ) {
        puVar6 = auStack_114;
        puVar4 = (undefined4 *)(iVar3 * *(int *)(iStack_4 + 4) + *(int *)(iStack_4 + 8));
        puVar7 = &stack0xfffffaa8;
        uVar5 = 0x369;
        uVar1 = FUN_005b8960(uStack_c);
        iVar2 = FUN_00535a00(auStack_420,uVar1,uVar5,puVar6,puVar7);
        if (iVar2 < 0) break;
        SfPrintF(auStack_31c,"%I64d;%I64d",*puVar4,puVar4[1],puVar4[2],puVar4[3]);
        iVar2 = FUN_00536050(auStack_420,auStack_218,auStack_31c,local_54c,&stack0xfffffaac,1);
        if ((iVar2 < 0) || (iVar3 = iVar3 + 1, (int)puVar10 <= iVar3)) break;
      }
    }
    if ((unaff_retaddr != 0) &&
       (iVar2 = FUN_00563970(param_2 + 0x414,"{5A94-4c20-97F3-1D8D24C615F4}"), -1 < iVar2)) {
      uVar9 = 0;
      puVar8 = &DAT_0061b420;
      uVar5 = 0x369;
      uVar1 = FUN_005b8960(uStack_c);
      iVar2 = FUN_00535a00(auStack_420,uVar1,uVar5,puVar8,uVar9);
      if (-1 < iVar2) {
        SfPrintF(auStack_218,".%s;%s",&DAT_0061b420,"{5A94-4c20-97F3-1D8D24C615F4}");
        SfPrintF(auStack_31c,"%I64d;%I64d",*(undefined4 *)(param_2 + 0x8e0),
                 *(undefined4 *)(param_2 + 0x8e4),*(undefined4 *)(param_2 + 0x8f0),
                 *(undefined4 *)(param_2 + 0x8f4));
        iVar2 = FUN_00536050(auStack_420,auStack_218,auStack_31c,local_54c,&stack0xfffffaac,0);
        if (-1 < iVar2) {
          _mbscpy(param_1,auStack_420);
        }
      }
    }
  }
  return iVar2;
}


