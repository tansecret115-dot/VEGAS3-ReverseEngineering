/* Module: vegas30.exe
   Function: FUN_004a3070
   Address: 004a3070
   Source: Ghidra pseudocode (Stage 10 batch) */


HRESULT FUN_004a3070(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,int param_6)

{
  HRESULT HVar1;
  int iVar2;
  undefined4 *puVar3;
  LPCSTR lpMultiByteStr;
  CLSID local_60;
  WCHAR local_50;
  undefined4 local_4e [19];
  undefined2 local_2;
  
  local_50 = L'\0';
  puVar3 = local_4e;
  for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  if (param_6 == 1) {
    lpMultiByteStr = &DAT_00649998;
  }
  else if (param_6 == 2) {
    lpMultiByteStr = &DAT_006499c0;
  }
  else {
    if (param_6 != 3) goto LAB_004a30dd;
    lpMultiByteStr = &DAT_006499e8;
  }
  MultiByteToWideChar(0,1,lpMultiByteStr,-1,&local_50,0x28);
  local_2 = 0;
LAB_004a30dd:
  if (local_50 == L'\0') {
    HVar1 = -0x7fffbffb;
  }
  else {
    HVar1 = CLSIDFromString(&local_50,&local_60);
    if (-1 < HVar1) {
      HVar1 = FUN_005a2ed0(*(undefined4 *)(param_1 + 0xbc8),param_1,param_2,param_3,param_4,param_5,
                           &local_60);
      return HVar1;
    }
  }
  return HVar1;
}


