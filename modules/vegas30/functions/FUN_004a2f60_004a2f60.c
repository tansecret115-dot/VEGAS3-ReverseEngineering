/* Module: vegas30.exe
   Function: FUN_004a2f60
   Address: 004a2f60
   Source: Ghidra pseudocode (Stage 10 batch) */


HRESULT FUN_004a2f60(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,undefined4 param_6)

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
  switch(param_6) {
  case 1:
    lpMultiByteStr = &DAT_00649a10;
    break;
  case 2:
    lpMultiByteStr = &DAT_00649a38;
    break;
  case 3:
    lpMultiByteStr = &DAT_00649a60;
    break;
  case 4:
    lpMultiByteStr = &DAT_00649a88;
    break;
  case 5:
    lpMultiByteStr = &DAT_00649ab0;
    break;
  default:
    goto switchD_004a2f8e_default;
  }
  MultiByteToWideChar(0,1,lpMultiByteStr,-1,&local_50,0x28);
  local_2 = 0;
switchD_004a2f8e_default:
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


