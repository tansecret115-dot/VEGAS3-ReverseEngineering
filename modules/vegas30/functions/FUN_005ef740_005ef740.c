/* Module: vegas30.exe
   Function: FUN_005ef740
   Address: 005ef740
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005ef740(int param_1,undefined4 param_2,int param_3,LPCSTR param_4)

{
  HANDLE hObject;
  int iVar1;
  undefined4 uVar2;
  undefined4 local_8;
  undefined4 local_4;
  
  SfPrintF(param_4,"%s.sfap%d",param_3 + 0x170,param_2);
  hObject = CreateFileA(param_4,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  if (hObject == (HANDLE)0xffffffff) {
    iVar1 = lstrlenA(&DAT_006479a0);
    if (iVar1 != 0) {
      uVar2 = _SfGetFileNamePtrA_4(param_3 + 0x170);
      SfPrintF(param_4,"%s%s.sfap%d",&DAT_006479a0,uVar2,param_2);
      hObject = CreateFileA(param_4,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
      if (hObject != (HANDLE)0xffffffff) goto LAB_005ef7cd;
    }
    *param_4 = '\0';
    return 0x8004e00a;
  }
LAB_005ef7cd:
  local_8 = *(undefined4 *)(param_3 + 0x144);
  local_4 = *(undefined4 *)(param_3 + 0x148);
  uVar2 = FUN_005ef820(hObject,*(undefined4 *)(param_1 + 0x2c),&local_8);
  CloseHandle(hObject);
  return uVar2;
}


