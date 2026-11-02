/* Module: vidcap30.exe
   Function: FUN_004babf0
   Address: 004babf0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004babf0(undefined4 param_1,int *param_2,LPCSTR param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  char cVar4;
  SHFILEINFOA local_368 [2];
  undefined4 uStack_c;
  
  if (param_2 == (int *)0x0) {
    if (*param_3 != '\0') {
      SHGetFileInfoA(param_3,0,local_368,0x160,0x400);
      if (local_368[0].szTypeName[0] != '\0') {
        _SfGetString2_8();
        SfMEditPrintF();
      }
    }
  }
  else {
    iVar1 = (**(code **)(*param_2 + 0x10))();
    cVar4 = (char)param_2;
    if (-1 < iVar1) {
      if ((&stack0x00000000 == (undefined1 *)0x218) || (local_368[0].szTypeName._64_2_ != 0)) {
        WideCharToMultiByte(0,0,(LPCWSTR)(local_368[0].szTypeName + 0x40),-1,&stack0xfffffc88,0x104,
                            (LPCSTR)0x0,(LPBOOL)0x0);
      }
      else if (&stack0x00000000 != (undefined1 *)0x378) {
        cVar4 = '\0';
      }
      puVar3 = &stack0xfffffc88;
      local_368[0].szDisplayName[0xe7] = '\0';
      if (cVar4 != '\0') {
        uVar2 = _SfGetString2_8(DAT_005c16d8,0x1145);
        SfMEditPrintF(uStack_c,uVar2,puVar3);
        return;
      }
    }
  }
  return;
}


