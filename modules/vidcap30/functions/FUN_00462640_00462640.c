/* Module: vidcap30.exe
   Function: FUN_00462640
   Address: 00462640
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00462640(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uchar local_514 [260];
  WCHAR local_410 [259];
  undefined2 local_20a;
  WCHAR local_208 [259];
  undefined2 local_2;
  
  iVar1 = _SfGetModulePath_12(DAT_005ba298,local_514,0x104);
  if (iVar1 != 0) {
    _mbscat(local_514,(uchar *)"sfvidfact30.zip");
    MultiByteToWideChar(0,1,(LPCSTR)local_514,-1,local_208,0x104);
    local_2 = 0;
    MultiByteToWideChar(0,1,"sfvidfact30.ini",-1,local_410,0x104);
    local_20a = 0;
    uVar2 = (**(code **)(*param_1 + 0x18))(param_1,local_208,local_410);
    return uVar2;
  }
  return 0x80004005;
}


