/* Module: vegas30.exe
   Function: FUN_005321b0
   Address: 005321b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005321b0(undefined4 param_1,uchar *param_2,int param_3,int param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7)

{
  HANDLE hObject;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 local_104 [260];
  
  hObject = CreateFileA((LPCSTR)param_2,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  if (hObject != (HANDLE)0xffffffff) {
    iVar1 = FUN_005de290(hObject);
    CloseHandle(hObject);
    if (iVar1 != 0) {
      uVar2 = _SfGetString_8(DAT_00647204,0x5a);
      iVar1 = SfMsgBox(0,0x104,uVar2);
      if (iVar1 != 6) {
        return -0x7ffb1ff4;
      }
    }
  }
  if ((param_3 != 0) && (param_4 != 0)) {
    FUN_004055e0();
    InterlockedIncrement(&DAT_0065e144);
    iVar1 = FUN_005c6190(param_1,param_5,param_6);
    if ((-1 < iVar1) && (iVar1 = FUN_00566570(param_1,param_2), -1 < iVar1)) {
      return iVar1;
    }
    InterlockedDecrement(&DAT_0065e144);
    FUN_004055f0();
    return iVar1;
  }
  iVar3 = -0x7ff8fff2;
  iVar1 = FUN_004e6c90(0x144);
  if (iVar1 != 0) {
    *(undefined1 **)(iVar1 + 0x20) = &LAB_00531f60;
    *(undefined4 *)(iVar1 + 0x2c) = 0x49;
    *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 0x32;
    *(undefined4 *)(iVar1 + 0x18) = 6;
    _mbscpy((uchar *)(iVar1 + 0x30),param_2);
    *(undefined4 *)(iVar1 + 0x134) = param_1;
    *(undefined4 *)(iVar1 + 0x138) = 0;
    *(undefined4 *)(iVar1 + 0x13c) = param_7;
    *(undefined4 *)(iVar1 + 0x140) = 0;
    if (param_3 != 0) {
      _SfGetPathNameFromFilePath_12(param_2,local_104,0x104);
      iVar3 = FUN_00531e60(param_1,local_104);
      if (iVar3 < 0) {
        SfMsgBox(DAT_00647624,0x10,"Error copying media to new directory.");
      }
    }
    iVar3 = FUN_004e7190(iVar1);
  }
  return iVar3;
}


