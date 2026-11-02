/* Module: vidcap30.exe
   Function: FUN_0045bc10
   Address: 0045bc10
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_0045bc10(undefined4 param_1)

{
  int iVar1;
  CHAR local_118 [260];
  CHAR local_14 [16];
  
  _SfGetRootPathFromFilePath_12(param_1,local_118,0x104);
  GetVolumeInformationA(local_118,(LPSTR)0x0,0,(LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,local_14,0x10)
  ;
  FUN_00579db0();
  FUN_00579db0();
  lstrcpynA(&stack0xfffffedc,local_14,4);
  lstrcpynA(&stack0xfffffedc,(LPCSTR)&PTR_LAB_0058c2a8,4);
  iVar1 = lstrcmpA(&stack0xfffffedc,&stack0xfffffedc);
  return iVar1 == 0;
}


