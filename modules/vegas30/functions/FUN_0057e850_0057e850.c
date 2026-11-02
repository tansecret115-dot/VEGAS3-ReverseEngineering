/* Module: vegas30.exe
   Function: FUN_0057e850
   Address: 0057e850
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0057e850(undefined4 *param_1,uint param_2,int *param_3)

{
  wchar_t *_Str;
  LPSTR lpMultiByteStr;
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  size_t sVar4;
  undefined4 *puVar5;
  uint cbMultiByte;
  int local_8;
  
  puVar1 = (undefined4 *)((int)param_1 + param_2);
  if (param_2 < 0xc) {
    return 0x8000ffff;
  }
  *param_1 = 0x5453494c;
  param_1[1] = 4;
  param_1[2] = 0x4f464e49;
  puVar5 = param_1 + 3;
  if (param_3 == (int *)0x0) {
    local_8 = 0;
  }
  else {
    local_8 = *param_3;
  }
  param_2 = 0;
  if (0 < local_8) {
    do {
      iVar2 = *(int *)(param_3[2] + param_2 * 4);
      _Str = (wchar_t *)(iVar2 + 0xc);
      sVar4 = wcslen(_Str);
      cbMultiByte = sVar4 + 1;
      if ((int)puVar1 <= (int)((cbMultiByte & 1) + cbMultiByte + 8 + (int)puVar5)) break;
      uVar3 = *(undefined4 *)(iVar2 + 4);
      puVar5[1] = cbMultiByte;
      *puVar5 = uVar3;
      lpMultiByteStr = (LPSTR)(puVar5 + 2);
      if ((_Str == (wchar_t *)0x0) || (*_Str != L'\0')) {
        WideCharToMultiByte(0,0,_Str,-1,lpMultiByteStr,cbMultiByte,(LPCSTR)0x0,(LPBOOL)0x0);
      }
      else if (lpMultiByteStr != (LPSTR)0x0) {
        *lpMultiByteStr = '\0';
      }
      *(undefined1 *)((int)puVar5 + sVar4 + 8) = 0;
      puVar5 = (undefined4 *)((int)puVar5 + (puVar5[1] & 1) + puVar5[1] + 8);
      param_1[1] = (int)puVar5 + (-8 - (int)param_1);
      param_2 = param_2 + 1;
    } while ((int)param_2 < local_8);
  }
  if (puVar5 < puVar1) {
    if (puVar5 + 2 <= puVar1) {
      *puVar5 = 0x4b4e554a;
      puVar5[1] = (int)puVar1 + (-8 - (int)puVar5);
      return 0;
    }
    param_1[1] = (int)puVar1 + (-8 - (int)param_1);
  }
  return 0;
}


